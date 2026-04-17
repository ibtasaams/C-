// All rights reserved copyright Ibtasaam Abbasi
#ifndef ARRAY_FUNCTIONS_2D
#define ARRAY_FUNCTIONS_2D

#include <climits>
#include <iostream>
using namespace std;

// ============================================================
//                     INPUT / OUTPUT
// ============================================================

// Take Input for 2D Array
void takeinput2D(int arr[][100], int rows, int cols) {
  /*
   * Nested Loop Block: Matrix/2D Traversal
   * Iterates through rows and columns
   */
  // Print 2D Array (matrix format)
  void printarr2D(int arr[][100], int rows, int cols) {
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    // Print 2D Array with Row and Column Labels
    void printarr2DLabeled(int arr[][100], int rows, int cols) {
      cout << "\t";
      /*
       * Nested Loop Block: Matrix/2D Traversal
       * Iterates through rows and columns
       */
      // Print Specific Row
      void printRow(int arr[][100], int cols, int row) {
        cout << "Row " << row + 1 << ": ";
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int j = 0; j < cols; j++)
          /* Displaying output to the console */
          cout << arr[row][j] << " ";
        cout << endl << endl;
      }

      // Print Specific Column
      void printCol(int arr[][100], int rows, int col) {
        cout << "Column " << col + 1 << ": ";
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < rows; i++)
          /* Displaying output to the console */
          cout << arr[i][col] << " ";
        cout << endl << endl;
      }

      // ============================================================
      //                  BASIC MATRIX OPERATIONS
      // ============================================================

      // Sum of All Elements
      void sum2D(int arr[][100], int rows, int cols) {
        int sum = 0;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < rows; i++)
          /*
           * Loop Block
           * Iterates through the array/matrix elements to perform operations.
           */
          for (int j = 0; j < cols; j++)
            sum += arr[i][j];
        /* Displaying output to the console */
        cout << "Sum of all elements = " << sum;
        cout << endl << endl;
      }

      // Product of All Elements
      void mult2D(int arr[][100], int rows, int cols) {
        long long product = 1;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < rows; i++)
          /*
           * Loop Block
           * Iterates through the array/matrix elements to perform operations.
           */
          for (int j = 0; j < cols; j++)
            product *= arr[i][j];
        cout << "Product of all elements = " << product;
        cout << endl << endl;
      }

      // Average of All Elements
      void average2D(int arr[][100], int rows, int cols) {
        double sum = 0;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < rows; i++)
          /*
           * Loop Block
           * Iterates through the array/matrix elements to perform operations.
           */
          for (int j = 0; j < cols; j++)
            sum += arr[i][j];
        /* Displaying output to the console */
        cout << "Average = " << sum / (rows * cols);
        cout << endl << endl;
      }

      // Maximum Element in 2D Array
      void maxElement2D(int arr[][100], int rows, int cols) {
        int maxVal = INT_MIN, maxRow = 0, maxCol = 0;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < rows; i++)
          /*
           * Loop Block
           * Iterates through the array/matrix elements to perform operations.
           */
          for (int j = 0; j < cols; j++)
            if (arr[i][j] > maxVal) {
              maxVal = arr[i][j];
              maxRow = i;
              maxCol = j;
            }
        cout << "Max = " << maxVal << " at [" << maxRow << "][" << maxCol
             << "]";
        cout << endl << endl;
      }

      // Minimum Element in 2D Array
      void minElement2D(int arr[][100], int rows, int cols) {
        int minVal = INT_MAX, minRow = 0, minCol = 0;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < rows; i++)
          /*
           * Loop Block
           * Iterates through the array/matrix elements to perform operations.
           */
          for (int j = 0; j < cols; j++)
            if (arr[i][j] < minVal) {
              minVal = arr[i][j];
              minRow = i;
              minCol = j;
            }
        cout << "Min = " << minVal << " at [" << minRow << "][" << minCol
             << "]";
        cout << endl << endl;
      }

      // Row-wise Sum
      void rowSum(int arr[][100], int rows, int cols) {
        /* Displaying output to the console */
        cout << "Row Sums:" << endl;
        /*
         * Nested Loop Block: Matrix/2D Traversal
         * Iterates through rows and columns
         */
        // Column-wise Sum
        void colSum(int arr[][100], int rows, int cols) {
          /* Displaying output to the console */
          cout << "Column Sums:" << endl;
          /*
           * Nested Loop Block: Matrix/2D Traversal
           * Iterates through rows and columns
           */
          // Row-wise Maximum
          void rowMax(int arr[][100], int rows, int cols) {
            cout << "Row Maximums:" << endl;
            /*
             * Nested Loop Block: Matrix/2D Traversal
             * Iterates through rows and columns
             */
            // Column-wise Maximum
            void colMax(int arr[][100], int rows, int cols) {
              cout << "Column Maximums:" << endl;
              /*
               * Nested Loop Block: Matrix/2D Traversal
               * Iterates through rows and columns
               */
              // Count of Zeros and Non-Zeros
              void countZerosNonZeros(int arr[][100], int rows, int cols) {
                int zeros = 0, nonZeros = 0;
                /*
                 * Loop Block: Array/Matrix Traversal
                 * Iterates through elements
                 */
                for (int i = 0; i < rows; i++)
                  /*
                   * Loop Block
                   * Iterates through the array/matrix elements to perform
                   * operations.
                   */
                  for (int j = 0; j < cols; j++)
                    arr[i][j] == 0 ? zeros++ : nonZeros++;
                cout << "Zeros = " << zeros << "  |  Non-Zeros = " << nonZeros;
                cout << endl << endl;
              }

              // ============================================================
              //                  SEARCHING ALGORITHMS
              // ============================================================

              // Linear Search in 2D Array
              void linearSearch2D(int arr[][100], int rows, int cols,
                                  int target) {
                bool found = false;
                /*
                 * Loop Block: Array/Matrix Traversal
                 * Iterates through elements
                 */
                for (int i = 0; i < rows && !found; i++)
                  /*
                   * Loop Block
                   * Iterates through the array/matrix elements to perform
                   * operations.
                   */
                  for (int j = 0; j < cols; j++)
                    if (arr[i][j] == target) {
                      cout << "Found " << target << " at [" << i << "][" << j
                           << "]"
                           << " (Row " << i + 1 << ", Col " << j + 1 << ")";
                      cout << endl << endl;
                      found = true;
                      break;
                    }
                if (!found) {
                  cout << target << " not found";
                  cout << endl << endl;
                }
              }

              // Search in Row-wise and Column-wise Sorted Matrix (Staircase
              // Search) O(n+m)
              void searchSortedMatrix(int arr[][100], int rows, int cols,
                                      int target) {
                int i = 0, j = cols - 1; // start from top-right corner
                bool found = false;
                while (i < rows && j >= 0) {
                  if (arr[i][j] == target) {
                    cout << "Found " << target << " at [" << i << "][" << j
                         << "]"
                         << " (Row " << i + 1 << ", Col " << j + 1 << ")";
                    cout << endl << endl;
                    found = true;
                    break;
                  } else if (arr[i][j] > target)
                    j--;
                  else
                    i++;
                }
                if (!found) {
                  /* Displaying output to the console */
                  cout << target << " not found in sorted matrix";
                  cout << endl << endl;
                }
              }

              // Count Negatives in Row-wise and Column-wise Sorted Matrix
              void countNegatives(int arr[][100], int rows, int cols) {
                int count = 0;
                int i = rows - 1, j = 0; // start from bottom-left
                while (i >= 0 && j < cols) {
                  if (arr[i][j] < 0) {
                    count += (cols - j);
                    i--;
                  } else
                    j++;
                }
                cout << "Count of negative numbers = " << count;
                cout << endl << endl;
              }

              // ============================================================
              //                  MATRIX ARITHMETIC
              // ============================================================

              // Add Two Matrices
              void addMatrices(int A[][100], int B[][100], int result[][100],
                               int rows, int cols) {
                /*
                 * Loop Block: Array/Matrix Traversal
                 * Iterates through elements
                 */
                for (int i = 0; i < rows; i++)
                  /*
                   * Loop Block
                   * Iterates through the array/matrix elements to perform
                   * operations.
                   */
                  for (int j = 0; j < cols; j++)
                    result[i][j] = A[i][j] + B[i][j];
                /* Displaying output to the console */
                cout << "Sum Matrix:" << endl;
                printarr2D(result, rows, cols);
              }

              // Subtract Two Matrices
              void subtractMatrices(int A[][100], int B[][100],
                                    int result[][100], int rows, int cols) {
                /*
                 * Loop Block: Array/Matrix Traversal
                 * Iterates through elements
                 */
                for (int i = 0; i < rows; i++)
                  /*
                   * Loop Block
                   * Iterates through the array/matrix elements to perform
                   * operations.
                   */
                  for (int j = 0; j < cols; j++)
                    result[i][j] = A[i][j] - B[i][j];
                /* Displaying output to the console */
                cout << "Difference Matrix:" << endl;
                printarr2D(result, rows, cols);
              }

              // Multiply Two Matrices  (A: rowsA x colsA, B: colsA x colsB)
              void multiplyMatrices(int A[][100], int B[][100],
                                    int result[][100], int rowsA, int colsA,
                                    int colsB) {
                /*
                 * Nested Loop Block: Matrix/2D Traversal
                 * Iterates through rows and columns
                 */
                // Scalar Multiplication
                void scalarMultiply(int arr[][100], int rows, int cols,
                                    int scalar) {
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < rows; i++)
                    /*
                     * Loop Block
                     * Iterates through the array/matrix elements to perform
                     * operations.
                     */
                    for (int j = 0; j < cols; j++)
                      arr[i][j] *= scalar;
                  /* Displaying output to the console */
                  cout << "Matrix after scalar multiplication by " << scalar
                       << ":" << endl;
                  printarr2D(arr, rows, cols);
                }

                // ============================================================
                //                  TRANSPOSE OPERATIONS
                // ============================================================

                // Transpose — Square Matrix In-Place
                void transposeInPlace(int arr[][100], int n) {
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    /*
                     * Loop Block
                     * Iterates through the array/matrix elements to perform
                     * operations.
                     */
                    for (int j = i + 1; j < n; j++)
                      swap(arr[i][j], arr[j][i]);
                  /* Displaying output to the console */
                  cout << "Transposed Matrix:" << endl;
                  printarr2D(arr, n, n);
                }

                // Transpose — Rectangular Matrix into Result
                void transposeRect(int arr[][100], int result[][100], int rows,
                                   int cols) {
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < rows; i++)
                    /*
                     * Loop Block
                     * Iterates through the array/matrix elements to perform
                     * operations.
                     */
                    for (int j = 0; j < cols; j++)
                      result[j][i] = arr[i][j];
                  /* Displaying output to the console */
                  cout << "Transposed Matrix (" << cols << "x" << rows
                       << "):" << endl;
                  printarr2D(result, cols, rows);
                }

                // ============================================================
                //                  ROTATION OPERATIONS
                // ============================================================

                // Rotate Matrix 90° Clockwise (square matrix, in-place)
                void rotate90Clockwise(int arr[][100], int n) {
                  // Step 1: Transpose
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    /*
                     * Loop Block
                     * Iterates through the array/matrix elements to perform
                     * operations.
                     */
                    for (int j = i + 1; j < n; j++)
                      swap(arr[i][j], arr[j][i]);
                  // Step 2: Reverse each row
                  for (int i = 0; i < n; i++) {
                    int left = 0, right = n - 1;
                    while (left < right)
                      swap(arr[i][left++], arr[i][right--]);
                  }
                  /* Displaying output to the console */
                  cout << "Matrix after 90° clockwise rotation:" << endl;
                  printarr2D(arr, n, n);
                }

                // Rotate Matrix 90° Anti-Clockwise (square matrix, in-place)
                void rotate90AntiClockwise(int arr[][100], int n) {
                  // Step 1: Transpose
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    /*
                     * Loop Block
                     * Iterates through the array/matrix elements to perform
                     * operations.
                     */
                    for (int j = i + 1; j < n; j++)
                      swap(arr[i][j], arr[j][i]);
                  // Step 2: Reverse each column
                  for (int j = 0; j < n; j++) {
                    int top = 0, bot = n - 1;
                    while (top < bot)
                      swap(arr[top++][j], arr[bot--][j]);
                  }
                  /* Displaying output to the console */
                  cout << "Matrix after 90° anti-clockwise rotation:" << endl;
                  printarr2D(arr, n, n);
                }

                // Rotate Matrix 180° (square matrix, in-place)
                void rotate180(int arr[][100], int n) {
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    /*
                     * Loop Block
                     * Iterates through the array/matrix elements to perform
                     * operations.
                     */
                    for (int j = 0; j < n; j++)
                      if (i * n + j < (n * n) / 2)
                        swap(arr[i][j], arr[n - 1 - i][n - 1 - j]);
                  /* Displaying output to the console */
                  cout << "Matrix after 180° rotation:" << endl;
                  printarr2D(arr, n, n);
                }

                // ============================================================
                //                  DIAGONAL OPERATIONS
                // ============================================================

                // Trace — Sum of Main Diagonal (square matrix)
                void traceMatrix(int arr[][100], int n) {
                  int trace = 0;
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    trace += arr[i][i];
                  /* Displaying output to the console */
                  cout << "Trace (main diagonal sum) = " << trace;
                  cout << endl << endl;
                }

                // Print Main Diagonal
                void printMainDiagonal(int arr[][100], int n) {
                  cout << "Main Diagonal: ";
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    /* Displaying output to the console */
                    cout << arr[i][i] << " ";
                  cout << endl << endl;
                }

                // Print Anti-Diagonal
                void printAntiDiagonal(int arr[][100], int n) {
                  cout << "Anti-Diagonal: ";
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++)
                    /* Displaying output to the console */
                    cout << arr[i][n - 1 - i] << " ";
                  cout << endl << endl;
                }

                // Print All Diagonals (top-right to bottom-left)
                void printAllDiagonals(int arr[][100], int rows, int cols) {
                  cout << "All Diagonals:" << endl;
                  // Upper diagonals (starting from top row)
                  /*
                   * Nested Loop Block: Matrix/2D Traversal
                   * Iterates through rows and columns
                   */
                  // Lower diagonals (starting from left column, skip main)
                  for (int row = 1; row < rows; row++) {
                    cout << "  ";
                    /*
                     * Loop Block: Array/Matrix Traversal
                     * Iterates through elements
                     */
                    for (int i = row, j = 0; i < rows && j < cols; i++, j++)
                      /* Displaying output to the console */
                      cout << arr[i][j] << " ";
                    cout << endl;
                  }
                  cout << endl;
                }

                // Sum of Both Diagonals
                void diagonalSums(int arr[][100], int n) {
                  int mainSum = 0, antiSum = 0;
                  /*
                   * Loop Block: Array/Matrix Traversal
                   * Iterates through elements
                   */
                  for (int i = 0; i < n; i++) {
                    mainSum += arr[i][i];
                    antiSum += arr[i][n - 1 - i];
                  }
                  // If n is odd, centre element is counted twice
                  if (n % 2 != 0)
                    antiSum -= arr[n / 2][n / 2];
                  /* Displaying output to the console */
                  cout << "Main diagonal sum = " << mainSum
                       << "  |  Anti-diagonal sum = " << antiSum;
                  cout << endl << endl;
                }

                // ============================================================
                //                  TRAVERSAL PATTERNS
                // ============================================================

                // Spiral Order Print (clockwise inward)
                void spiralPrint(int arr[][100], int rows, int cols) {
                  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
                  cout << "Spiral Order: ";
                  while (top <= bottom && left <= right) {
                    /*
                     * Nested Loop Block: Matrix/2D Traversal
                     * Iterates through rows and columns
                     */
                    // Boundary (Border) Print
                    void boundaryPrint(int arr[][100], int rows, int cols) {
                      cout << "Boundary Elements: ";
                      /*
                       * Loop Block: Array/Matrix Traversal
                       * Iterates through elements
                       */
                      for (int j = 0; j < cols; j++)
                        /* Displaying output to the console */
                        cout << arr[0][j] << " "; // top row
                                                  /*
                                                   * Loop Block
                                                   * Iterates through the array/matrix elements to perform
                                                   * operations.
                                                   */
                      for (int i = 1; i < rows; i++)
                        /* Displaying output to the console */
                        cout << arr[i][cols - 1] << " "; // right col
                                                         /*
                                                          * Loop Block
                                                          * Iterates through the array/matrix elements to perform
                                                          * operations.
                                                          */
                      for (int j = cols - 2; j >= 0; j--)
                        /* Displaying output to the console */
                        cout << arr[rows - 1][j] << " "; // bottom row
                                                         /*
                                                          * Loop Block
                                                          * Iterates through the array/matrix elements to perform
                                                          * operations.
                                                          */
                      for (int i = rows - 2; i >= 1; i--)
                        /* Displaying output to the console */
                        cout << arr[i][0] << " "; // left col
                      cout << endl << endl;
                    }

                    // ZigZag (Snake) Print
                    void zigzagPrint(int arr[][100], int rows, int cols) {
                      cout << "ZigZag Order: ";
                      /*
                       * Nested Loop Block: Matrix/2D Traversal
                       * Iterates through rows and columns
                       */
                      // Wave Form Print (column-wise up-down alternating)
                      void waveFormPrint(int arr[][100], int rows, int cols) {
                        cout << "Wave Form: ";
                        /*
                         * Nested Loop Block: Matrix/2D Traversal
                         * Iterates through rows and columns
                         */
                        // ============================================================
                        //               MATRIX PROPERTY CHECKERS
                        // ============================================================

                        // Check if Matrix is Square
                        void isSquare(int rows, int cols) {
                          /* Displaying output to the console */
                          cout << (rows == cols ? "Matrix is Square"
                                                : "Matrix is NOT Square");
                          cout << endl << endl;
                        }

                        // Check if Identity Matrix
                        void isIdentityMatrix(int arr[][100], int n) {
                          bool identity = true;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < n && identity; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < n; j++) {
                              if (i == j && arr[i][j] != 1) {
                                identity = false;
                                break;
                              }
                              if (i != j && arr[i][j] != 0) {
                                identity = false;
                                break;
                              }
                            }
                          cout << (identity
                                       ? "Matrix IS an Identity Matrix"
                                       : "Matrix is NOT an Identity Matrix");
                          cout << endl << endl;
                        }

                        // Check if Symmetric Matrix  (A == A transpose)
                        void isSymmetric(int arr[][100], int n) {
                          bool sym = true;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < n && sym; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < n; j++)
                              if (arr[i][j] != arr[j][i]) {
                                sym = false;
                                break;
                              }
                          /* Displaying output to the console */
                          cout << (sym ? "Matrix is Symmetric"
                                       : "Matrix is NOT Symmetric");
                          cout << endl << endl;
                        }

                        // Check if Diagonal Matrix (all non-diagonal elements
                        // are 0)
                        void isDiagonalMatrix(int arr[][100], int n) {
                          bool diag = true;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < n && diag; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < n; j++)
                              if (i != j && arr[i][j] != 0) {
                                diag = false;
                                break;
                              }
                          /* Displaying output to the console */
                          cout << (diag ? "Matrix is a Diagonal Matrix"
                                        : "Matrix is NOT a Diagonal Matrix");
                          cout << endl << endl;
                        }

                        // Check if Upper Triangular Matrix
                        void isUpperTriangular(int arr[][100], int n) {
                          bool upper = true;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < n && upper; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < i; j++)
                              if (arr[i][j] != 0) {
                                upper = false;
                                break;
                              }
                          /* Displaying output to the console */
                          cout << (upper ? "Matrix is Upper Triangular"
                                         : "Matrix is NOT Upper Triangular");
                          cout << endl << endl;
                        }

                        // Check if Lower Triangular Matrix
                        void isLowerTriangular(int arr[][100], int n) {
                          bool lower = true;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < n && lower; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = i + 1; j < n; j++)
                              if (arr[i][j] != 0) {
                                lower = false;
                                break;
                              }
                          /* Displaying output to the console */
                          cout << (lower ? "Matrix is Lower Triangular"
                                         : "Matrix is NOT Lower Triangular");
                          cout << endl << endl;
                        }

                        // Check if Sparse Matrix (zeros > non-zeros)
                        void isSparseMatrix(int arr[][100], int rows,
                                            int cols) {
                          int zeros = 0;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < rows; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < cols; j++)
                              if (arr[i][j] == 0)
                                zeros++;
                          int total = rows * cols;
                          /* Displaying output to the console */
                          cout << (zeros > total / 2 ? "Matrix IS Sparse"
                                                     : "Matrix is NOT Sparse")
                               << " (" << zeros << " zeros out of " << total
                               << " elements)";
                          cout << endl << endl;
                        }

                        // Check if Magic Square (rows, cols, diag sums all
                        // equal)
                        void isMagicSquare(int arr[][100], int n) {
                          int magicSum = 0;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int j = 0; j < n; j++)
                            magicSum += arr[0][j]; // first row sum

                          bool magic = true;

                          // Check rows
                          for (int i = 1; i < n && magic; i++) {
                            int sum = 0;
                            /*
                             * Loop Block: Array/Matrix Traversal
                             * Iterates through elements
                             */
                            for (int j = 0; j < n; j++)
                              sum += arr[i][j];
                            if (sum != magicSum)
                              magic = false;
                          }
                          // Check columns
                          for (int j = 0; j < n && magic; j++) {
                            int sum = 0;
                            /*
                             * Loop Block: Array/Matrix Traversal
                             * Iterates through elements
                             */
                            for (int i = 0; i < n; i++)
                              sum += arr[i][j];
                            if (sum != magicSum)
                              magic = false;
                          }
                          // Check main diagonal
                          if (magic) {
                            int sum = 0;
                            /*
                             * Loop Block: Array/Matrix Traversal
                             * Iterates through elements
                             */
                            for (int i = 0; i < n; i++)
                              sum += arr[i][i];
                            if (sum != magicSum)
                              magic = false;
                          }
                          // Check anti diagonal
                          if (magic) {
                            int sum = 0;
                            /*
                             * Loop Block: Array/Matrix Traversal
                             * Iterates through elements
                             */
                            for (int i = 0; i < n; i++)
                              sum += arr[i][n - 1 - i];
                            if (sum != magicSum)
                              magic = false;
                          }
                          /* Displaying output to the console */
                          cout << (magic ? "Matrix IS a Magic Square (magic "
                                           "sum = " +
                                               to_string(magicSum) + ")"
                                         : "Matrix is NOT a Magic Square");
                          cout << endl << endl;
                        }

                        // ============================================================
                        //               SORTING OPERATIONS
                        // ============================================================

                        // Sort Each Row Individually (ascending)
                        void sortEachRow(int arr[][100], int rows, int cols) {
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < rows; i++)
                            for (int p = 0; p < cols - 1; p++)
                              for (int q = 0; q < cols - p - 1; q++)
                                if (arr[i][q] > arr[i][q + 1])
                                  swap(arr[i][q], arr[i][q + 1]);
                          /* Displaying output to the console */
                          cout << "Matrix after sorting each row:" << endl;
                          printarr2D(arr, rows, cols);
                        }

                        // Sort Each Column Individually (ascending)
                        void sortEachCol(int arr[][100], int rows, int cols) {
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int j = 0; j < cols; j++)
                            for (int p = 0; p < rows - 1; p++)
                              for (int q = 0; q < rows - p - 1; q++)
                                if (arr[q][j] > arr[q + 1][j])
                                  swap(arr[q][j], arr[q + 1][j]);
                          /* Displaying output to the console */
                          cout << "Matrix after sorting each column:" << endl;
                          printarr2D(arr, rows, cols);
                        }

                        // Sort Entire Matrix (flatten → sort → reshape)
                        void sortEntireMatrix(int arr[][100], int rows,
                                              int cols) {
                          int total = rows * cols;
                          int *flat = new int[total];
                          int idx = 0;

                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */

                          /*
                           * Loop Block
                           * Iterates through the array/matrix elements to
                           * perform operations.
                           */
                          for (int i = 0; i < rows; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < cols; j++)
                              flat[idx++] = arr[i][j];

                          // Bubble sort on flat array
                          for (int i = 0; i < total - 1; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < total - i - 1; j++)
                              if (flat[j] > flat[j + 1])
                                swap(flat[j], flat[j + 1]);

                          idx = 0;
                          /*
                           * Loop Block
                           * Iterates through the array/matrix elements to
                           * perform operations.
                           */
                          for (int i = 0; i < rows; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < cols; j++)
                              arr[i][j] = flat[idx++];

                          /* Displaying output to the console */
                          cout << "Fully sorted matrix:" << endl;
                          printarr2D(arr, rows, cols);
                          delete[] flat;
                        }

                        // ============================================================
                        //             SPECIAL INTERVIEW PROBLEMS
                        // ============================================================

                        // Saddle Point — element minimum in its row AND maximum
                        // in its column
                        void saddlePoint(int arr[][100], int rows, int cols) {
                          bool found = false;
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < rows; i++) {
                            // Find minimum in row i
                            int minVal = arr[i][0], minCol = 0;
                            /*
                             * Loop Block: Array/Matrix Traversal
                             * Iterates through elements
                             */
                            for (int j = 1; j < cols; j++)
                              if (arr[i][j] < minVal) {
                                minVal = arr[i][j];
                                minCol = j;
                              }

                            // Check if that minimum is maximum in its column
                            bool isMax = true;
                            /*
                             * Loop Block: Array/Matrix Traversal
                             * Iterates through elements
                             */
                            for (int k = 0; k < rows; k++)
                              if (arr[k][minCol] > minVal) {
                                isMax = false;
                                break;
                              }

                            if (isMax) {
                              cout << "Saddle Point = " << minVal << " at ["
                                   << i << "][" << minCol << "]";
                              cout << endl << endl;
                              found = true;
                            }
                          }
                          if (!found) {
                            cout << "No Saddle Point exists";
                            cout << endl << endl;
                          }
                        }

                        // Set Row and Column to Zero if Element is Zero
                        void setZeroes(int arr[][100], int rows, int cols) {
                          bool zeroRow[100] = {false};
                          bool zeroCol[100] = {false};

                          /*
                           * Nested Loop Block: Matrix/2D Traversal
                           * Iterates through rows and columns
                           */
/col to zero for each 0 element:" << endl;
    printarr2D(arr, rows, cols);
                        }

                        // Maximum Sum Rectangle (Kadane's Algorithm Extended to
                        // 2D)
                        void maxSumSubmatrix(int arr[][100], int rows,
                                             int cols) {
                          int maxSum = INT_MIN;
                          int finalTop = 0, finalBottom = 0, finalLeft = 0,
                              finalRight = 0;

                          /*
                           * Nested Loop Block: Matrix/2D Traversal
                           * Iterates through rows and columns
                           */
                          // Kadane on temp[]
                          int curSum = temp[0], curStart = 0;
                          int localMax = temp[0], localStart = 0, localEnd = 0;
                          /*
                           * Loop Block
                           * Iterates through the array/matrix elements to
                           * perform operations.
                           */
                          for (int i = 1; i < rows; i++) {
                            if (temp[i] > curSum + temp[i]) {
                              curSum = temp[i];
                              curStart = i;
                            } else
                              curSum += temp[i];
                            if (curSum > localMax) {
                              localMax = curSum;
                              localStart = curStart;
                              localEnd = i;
                            }
                          }
                          if (localMax > maxSum) {
                            maxSum = localMax;
                            finalTop = localStart;
                            finalBottom = localEnd;
                            finalLeft = left;
                            finalRight = right;
                          }
                        }
                      }
                      /* Displaying output to the console */
                      cout << "Maximum sum submatrix sum = " << maxSum
                           << " (rows " << finalTop << "-" << finalBottom
                           << ", cols " << finalLeft << "-" << finalRight
                           << ")";
                      cout << endl << endl;
                    }

                    // Rotate Matrix Layer by Layer (clockwise) — in-place, any
                    // square
                    void rotateLayer(int arr[][100], int n) {
                      /*
                       * Loop Block: Array/Matrix Traversal
                       * Iterates through elements
                       */
                      for (int layer = 0; layer < n / 2; layer++) {
                        int first = layer, last = n - 1 - layer;
                        /*
                         * Loop Block: Array/Matrix Traversal
                         * Iterates through elements
                         */
                        for (int i = first; i < last; i++) {
                          int offset = i - first;
                          int top = arr[first][i]; // save top
                          arr[first][i] =
                              arr[last - offset][first]; // left → top
                          arr[last - offset][first] =
                              arr[last][last - offset]; // bottom → left
                          arr[last][last - offset] =
                              arr[i][last];   // right → bottom
                          arr[i][last] = top; // top → right
                        }
                      }
                      /* Displaying output to the console */
                      cout << "Matrix after layer-by-layer clockwise rotation:"
                           << endl;
                      printarr2D(arr, n, n);
                    }

                    // Transpose Then Reverse Rows (same as rotate 90° — shown
                    // step by step)
                    void transposeAndReverse(int arr[][100], int n) {
                      cout << "Step 1 - Original:" << endl;
                      printarr2D(arr, n, n);

                      // Transpose
                      /*
                       * Loop Block: Array/Matrix Traversal
                       * Iterates through elements
                       */
                      for (int i = 0; i < n; i++)
                        /*
                         * Loop Block
                         * Iterates through the array/matrix elements to perform
                         * operations.
                         */
                        for (int j = i + 1; j < n; j++)
                          swap(arr[i][j], arr[j][i]);
                      cout << "Step 2 - After Transpose:" << endl;
                      printarr2D(arr, n, n);

                      // Reverse each row
                      for (int i = 0; i < n; i++) {
                        int l = 0, r = n - 1;
                        while (l < r)
                          swap(arr[i][l++], arr[i][r--]);
                      }
                      cout << "Step 3 - After Reversing Rows (= 90° CW):"
                           << endl;
                      printarr2D(arr, n, n);
                    }

                    // Print Matrix in Anti-Spiral (reverse of spiral)
                    void antiSpiralPrint(int arr[][100], int rows, int cols) {
                      // Collect spiral into a temp array then print reversed
                      int total = rows * cols;
                      int *spiral = new int[total];
                      int idx = 0;

                      int top = 0, bottom = rows - 1, left = 0,
                          right = cols - 1;
                      while (top <= bottom && left <= right) {
                        /*
                         * Nested Loop Block: Matrix/2D Traversal
                         * Iterates through rows and columns
                         */
                        // Prefix Sum 2D Matrix (for O(1) submatrix sum queries)
                        void buildPrefixSum2D(int arr[][100], int prefix[][100],
                                              int rows, int cols) {
                          /*
                           * Loop Block: Array/Matrix Traversal
                           * Iterates through elements
                           */
                          for (int i = 0; i < rows; i++)
                            /*
                             * Loop Block
                             * Iterates through the array/matrix elements to
                             * perform operations.
                             */
                            for (int j = 0; j < cols; j++) {
                              prefix[i][j] = arr[i][j];
                              if (i > 0)
                                prefix[i][j] += prefix[i - 1][j];
                              if (j > 0)
                                prefix[i][j] += prefix[i][j - 1];
                              if (i > 0 && j > 0)
                                prefix[i][j] -= prefix[i - 1][j - 1];
                            }
                          /* Displaying output to the console */
                          cout << "2D Prefix Sum Matrix:" << endl;
                          printarr2D(prefix, rows, cols);
                        }

                        // Submatrix Sum Query using 2D Prefix Sum  O(1)
                        // Query: sum of submatrix from (r1,c1) to (r2,c2)
                        void submatrixSumQuery(int prefix[][100], int r1,
                                               int c1, int r2, int c2) {
                          int sum = prefix[r2][c2];
                          if (r1 > 0)
                            sum -= prefix[r1 - 1][c2];
                          if (c1 > 0)
                            sum -= prefix[r2][c1 - 1];
                          if (r1 > 0 && c1 > 0)
                            sum += prefix[r1 - 1][c1 - 1];
                          /* Displaying output to the console */
                          cout << "Submatrix sum [" << r1 << "," << c1
                               << "] to [" << r2 << "," << c2 << "] = " << sum;
                          cout << endl << endl;
                        }

                        // Pascal's Triangle — fill matrix with Pascal's
                        // Triangle values
                        void pascalsTriangle(int arr[][100], int n) {
                  /*
                   * Nested Loop Block: Matrix/2D Traversal
                   * Iterates through rows and columns
                   */
                  // ARRAY_FUNCTIONS_2D