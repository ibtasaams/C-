// All rights reserved copyright Ibtasaam Abbasi

#define _CRT_SECURE_NO_WARNINGS

#include "arena.h"
#include "base.h"
#include "prng.h"

#include "arena.c"
#include "prng.c"

typedef struct {
  u32 rows, cols;
  // Row-major
  f32 *data;
} matrix;

matrix *mat_create(mem_arena *arena, u32 rows, u32 cols);
matrix *mat_load(mem_arena *arena, u32 rows, u32 cols, const char *filename);
b32 mat_copy(matrix *dst, matrix *src);
void mat_clear(matrix *mat);
void mat_fill(matrix *mat, f32 x);
void mat_fill_rand(matrix *mat, f32 lower, f32 upper);
void mat_scale(matrix *mat, f32 scale);
f32 mat_sum(matrix *mat);
u64 mat_argmax(matrix *mat);
b32 mat_add(matrix *out, const matrix *a, const matrix *b);
b32 mat_sub(matrix *out, const matrix *a, const matrix *b);
b32 mat_mul(matrix *out, const matrix *a, const matrix *b, b8 zero_out,
            b8 transpose_a, b8 transpose_b);
b32 mat_relu(matrix *out, const matrix *in);
b32 mat_softmax(matrix *out, const matrix *in);
b32 mat_cross_entropy(matrix *out, const matrix *p, const matrix *q);
b32 mat_relu_add_grad(matrix *out, const matrix *in, const matrix *grad);
b32 mat_softmax_add_grad(matrix *out, const matrix *softmax_out,
                         const matrix *grad);
b32 mat_cross_entropy_add_grad(matrix *p_grad, matrix *q_grad, const matrix *p,
                               const matrix *q, const matrix *grad);

typedef enum {
  MV_FLAG_NONE = 0,

  MV_FLAG_REQUIRES_GRAD = (1 << 0),
  MV_FLAG_PARAMETER = (1 << 1),
  MV_FLAG_INPUT = (1 << 2),
  MV_FLAG_OUTPUT = (1 << 3),
  MV_FLAG_DESIRED_OUTPUT = (1 << 4),
  MV_FLAG_COST = (1 << 5),
} model_var_flags;

typedef enum {
  MV_OP_NULL = 0,
  MV_OP_CREATE,

  _MV_OP_UNARY_START,

  MV_OP_RELU,
  MV_OP_SOFTMAX,

  _MV_OP_BINARY_START,

  MV_OP_ADD,
  MV_OP_SUB,
  MV_OP_MATMUL,
  MV_OP_CROSS_ENTROPY,
} model_var_op;

#define MODEL_VAR_MAX_INPUTS 2
#define MV_NUM_INPUTS(op)                                                      \
  ((op) < _MV_OP_UNARY_START ? 0 : ((op) < _MV_OP_BINARY_START ? 1 : 2))

typedef struct model_var {
  u32 index;
  u32 flags;

  matrix *val;
  matrix *grad;

  model_var_op op;
  struct model_var *inputs[MODEL_VAR_MAX_INPUTS];
} model_var;

typedef struct {
  model_var **vars;
  u32 size;
} model_program;

typedef struct {
  u32 num_vars;

  model_var *input;
  model_var *output;
  model_var *desired_output;
  model_var *cost;

  model_program forward_prog;
  model_program cost_prog;
} model_context;

typedef struct {
  matrix *train_images;
  matrix *train_labels;
  matrix *test_images;
  matrix *test_labels;

  u32 epochs;
  u32 batch_size;
  f32 learning_rate;
} model_training_desc;

model_var *mv_create(mem_arena *arena, model_context *model, u32 rows, u32 cols,
                     u32 flags);

model_var *mv_relu(mem_arena *arena, model_context *model, model_var *input,
                   u32 flags);
model_var *mv_softmax(mem_arena *arena, model_context *model, model_var *input,
                      u32 flags);

model_var *mv_add(mem_arena *arena, model_context *model, model_var *a,
                  model_var *b, u32 flags);
model_var *mv_sub(mem_arena *arena, model_context *model, model_var *a,
                  model_var *b, u32 flags);
model_var *mv_matmul(mem_arena *arena, model_context *model, model_var *a,
                     model_var *b, u32 flags);
model_var *mv_cross_entropy(mem_arena *arena, model_context *model,
                            model_var *p, model_var *q, u32 flags);

model_program model_prog_create(mem_arena *arena, model_context *model,
                                model_var *out_var);
void model_prog_compute(model_program *prog);
void model_prog_compute_grads(model_program *prog);

model_context *model_create(mem_arena *arena);
void model_compile(mem_arena *arena, model_context *model);
void model_feedforward(model_context *model);
void model_train(model_context *model,
                 const model_training_desc *training_desc);

void draw_mnist_digit(f32 *data);
void create_mnist_model(mem_arena *arena, model_context *model);

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main(void) {
  mem_arena *perm_arena = arena_create(GiB(1), MiB(1));

  matrix *train_images = mat_load(perm_arena, 60000, 784, "train_images.mat");
  matrix *test_images = mat_load(perm_arena, 10000, 784, "test_images.mat");
  matrix *train_labels = mat_create(perm_arena, 60000, 10);
  matrix *test_labels = mat_create(perm_arena, 10000, 10);

  {
    matrix *train_labels_file =
        mat_load(perm_arena, 60000, 1, "train_labels.mat");
    matrix *test_labels_file =
        mat_load(perm_arena, 10000, 1, "test_labels.mat");

    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
/ (784 + 16));
f32 bound1 = sqrtf(6.0f / (16 + 16));
f32 bound2 = sqrtf(6.0f / (16 + 10));
mat_fill_rand(W0->val, -bound0, bound0);
mat_fill_rand(W1->val, -bound1, bound1);
mat_fill_rand(W2->val, -bound2, bound2);

model_var *b0 =
    mv_create(arena, model, 16, 1, MV_FLAG_REQUIRES_GRAD | MV_FLAG_PARAMETER);
model_var *b1 =
    mv_create(arena, model, 16, 1, MV_FLAG_REQUIRES_GRAD | MV_FLAG_PARAMETER);
model_var *b2 =
    mv_create(arena, model, 10, 1, MV_FLAG_REQUIRES_GRAD | MV_FLAG_PARAMETER);

model_var *z0_a = mv_matmul(arena, model, W0, input, 0);
model_var *z0_b = mv_add(arena, model, z0_a, b0, 0);
model_var *a0 = mv_relu(arena, model, z0_b, 0);

model_var *z1_a = mv_matmul(arena, model, W1, a0, 0);
model_var *z1_b = mv_add(arena, model, z1_a, b1, 0);
model_var *z1_c = mv_relu(arena, model, z1_b, 0);
model_var *a1 = mv_add(arena, model, a0, z1_c, 0);

model_var *z2_a = mv_matmul(arena, model, W2, a1, 0);
model_var *z2_b = mv_add(arena, model, z2_a, b2, 0);
model_var *output = mv_softmax(arena, model, z2_b, MV_FLAG_OUTPUT);

model_var *y = mv_create(arena, model, 10, 1, MV_FLAG_DESIRED_OUTPUT);

model_var *cost = mv_cross_entropy(arena, model, y, output, MV_FLAG_COST);
  }

  matrix *mat_create(mem_arena * arena, u32 rows, u32 cols) {
    matrix *mat = PUSH_STRUCT(arena, matrix);

    mat->rows = rows;
    mat->cols = cols;
    mat->data = PUSH_ARRAY(arena, f32, (u64)rows * cols);

    return mat;
  }

  matrix *mat_load(mem_arena * arena, u32 rows, u32 cols,
                   const char *filename) {
    matrix *mat = mat_create(arena, rows, cols);

    FILE *f = fopen(filename, "rb");

    fseek(f, 0, SEEK_END);
    u64 size = ftell(f);
    fseek(f, 0, SEEK_SET);

    size = MIN(size, sizeof(f32) * rows * cols);

    fread(mat->data, 1, size, f);

    fclose(f);

    return mat;
  }

  b32 mat_copy(matrix * dst, matrix * src) {
    if (dst->rows != src->rows || dst->cols != src->cols) {
      return false;
    }

    memcpy(dst->data, src->data, sizeof(f32) * (u64)dst->rows * dst->cols);

    return true;
  }

  void mat_clear(matrix * mat) {
    memset(mat->data, 0, sizeof(f32) * (u64)mat->rows * mat->cols);
  }

  void mat_fill(matrix * mat, f32 x) {
    u64 size = (u64)mat->rows * mat->cols;

    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
/ sum);

return true;
  }

  b32 mat_cross_entropy(matrix * out, const matrix *p, const matrix *q) {
    if (p->rows != q->rows || p->cols != q->cols) {
      return false;
    }
    if (out->rows != p->rows || out->cols != p->cols) {
      return false;
    }

    u64 size = (u64)out->rows * out->cols;
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    / q->data[i] * grad->data[i];
  }
}

return true;
}

model_var *mv_create(mem_arena *arena, model_context *model, u32 rows, u32 cols,
                     u32 flags) {
  model_var *out = PUSH_STRUCT(arena, model_var);

  out->index = model->num_vars++;
  out->flags = flags;
  out->op = MV_OP_CREATE;
  out->val = mat_create(arena, rows, cols);

  if (flags & MV_FLAG_REQUIRES_GRAD) {
    out->grad = mat_create(arena, rows, cols);
  }

  if (flags & MV_FLAG_INPUT) {
    model->input = out;
  }
  if (flags & MV_FLAG_OUTPUT) {
    model->output = out;
  }
  if (flags & MV_FLAG_DESIRED_OUTPUT) {
    model->desired_output = out;
  }
  if (flags & MV_FLAG_COST) {
    model->cost = out;
  }

  return out;
}

model_var *_mv_unary_impl(mem_arena *arena, model_context *model,
                          model_var *input, u32 rows, u32 cols, u32 flags,
                          model_var_op op) {
  if (input->flags & MV_FLAG_REQUIRES_GRAD) {
    flags |= MV_FLAG_REQUIRES_GRAD;
  }

  model_var *out = mv_create(arena, model, rows, cols, flags);

  out->op = op;
  out->inputs[0] = input;

  return out;
}

model_var *_mv_binary_impl(mem_arena *arena, model_context *model, model_var *a,
                           model_var *b, u32 rows, u32 cols, u32 flags,
                           model_var_op op) {
  if ((a->flags & MV_FLAG_REQUIRES_GRAD) ||
      (b->flags & MV_FLAG_REQUIRES_GRAD)) {
    flags |= MV_FLAG_REQUIRES_GRAD;
  }

  model_var *out = mv_create(arena, model, rows, cols, flags);

  out->op = op;
  out->inputs[0] = a;
  out->inputs[1] = b;

  return out;
}

model_var *mv_relu(mem_arena *arena, model_context *model, model_var *input,
                   u32 flags) {
  return _mv_unary_impl(arena, model, input, input->val->rows, input->val->cols,
                        flags, MV_OP_RELU);
}

model_var *mv_softmax(mem_arena *arena, model_context *model, model_var *input,
                      u32 flags) {
  return _mv_unary_impl(arena, model, input, input->val->rows, input->val->cols,
                        flags, MV_OP_SOFTMAX);
}

model_var *mv_add(mem_arena *arena, model_context *model, model_var *a,
                  model_var *b, u32 flags) {
  if (a->val->rows != b->val->rows || a->val->cols != b->val->cols) {
    return NULL;
  }

  return _mv_binary_impl(arena, model, a, b, a->val->rows, a->val->cols, flags,
                         MV_OP_ADD);
}

model_var *mv_sub(mem_arena *arena, model_context *model, model_var *a,
                  model_var *b, u32 flags) {
  if (a->val->rows != b->val->rows || a->val->cols != b->val->cols) {
    return NULL;
  }

  return _mv_binary_impl(arena, model, a, b, a->val->rows, a->val->cols, flags,
                         MV_OP_SUB);
}

model_var *mv_matmul(mem_arena *arena, model_context *model, model_var *a,
                     model_var *b, u32 flags) {
  if (a->val->cols != b->val->rows) {
    return NULL;
  }

  return _mv_binary_impl(arena, model, a, b, a->val->rows, b->val->cols, flags,
                         MV_OP_MATMUL);
}

model_var *mv_cross_entropy(mem_arena *arena, model_context *model,
                            model_var *p, model_var *q, u32 flags) {
  if (p->val->rows != q->val->rows || p->val->cols != q->val->cols) {
    return NULL;
  }

  return _mv_binary_impl(arena, model, p, q, p->val->rows, p->val->cols, flags,
                         MV_OP_CROSS_ENTROPY);
}

model_program model_prog_create(mem_arena *arena, model_context *model,
                                model_var *out_var) {
  mem_arena_temp scratch = arena_scratch_get(&arena, 1);

  b8 *visited = PUSH_ARRAY(scratch.arena, b8, model->num_vars);

  u32 stack_size = 0;
  u32 out_size = 0;
  model_var **stack = PUSH_ARRAY(scratch.arena, model_var *, model->num_vars);
  model_var **out = PUSH_ARRAY(scratch.arena, model_var *, model->num_vars);

  stack[stack_size++] = out_var;

  while (stack_size > 0) {
    model_var *cur = stack[--stack_size];

    if (cur->index >= model->num_vars) {
      continue;
    }

    if (visited[cur->index]) {
      if (out_size < model->num_vars) {
        out[out_size++] = cur;
      }
      continue;
    }

    visited[cur->index] = true;

    if (stack_size < model->num_vars) {
      stack[stack_size++] = cur;
    }

    u32 num_inputs = MV_NUM_INPUTS(cur->op);
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    / training_desc->batch_size;

    mem_arena_temp scratch = arena_scratch_get(NULL, 0);

    u32 *training_order = PUSH_ARRAY_NZ(scratch.arena, u32, num_examples);
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    /= (f32)training_desc->batch_size;

    /*
     * Loop Block: Array/Matrix Traversal
     * Iterates through elements
     */

    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (u32 i = 0; i < model->cost_prog.size; i++) {
      model_var *cur = model->cost_prog.vars[i];

      if ((cur->flags & MV_FLAG_PARAMETER) != MV_FLAG_PARAMETER) {
        continue;
      }

      mat_scale(cur->grad,
                training_desc->learning_rate / training_desc->batch_size);
      mat_sub(cur->val, cur->val, cur->grad);
    }

    printf("Epoch %2d / %2d, Batch %4d / %4d, Average Cost: %.4f\r", epoch + 1,
           training_desc->epochs, batch + 1, num_batches, avg_cost);
    fflush(stdout);
  }
  printf("\n");

  u32 num_correct = 0;
  f32 avg_cost = 0;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (u32 i = 0; i < num_tests; i++) {
    memcpy(model->input->val->data, test_images->data + i * input_size,
           sizeof(f32) * input_size);

    memcpy(model->desired_output->val->data,
           test_labels->data + i * output_size, sizeof(f32) * output_size);

    model_prog_compute(&model->cost_prog);

    avg_cost += mat_sum(model->cost->val);
    num_correct += mat_argmax(model->output->val) ==
                   mat_argmax(model->desired_output->val);
  }

  avg_cost /= (f32)num_tests;
  printf("Test Completed. Accuracy: %5d / %5d (%.1f%%), Average Cost: %.4f\n",
         num_correct, num_tests, (f32)num_correct / num_tests * 100.0f,
         avg_cost);
}

arena_scratch_release(scratch);
}
