// All rights reserved copyright Ibtasaam Abbasi
#ifndef ARRAY_FUNCTIONS
#define ARRAY_FUNCTIONS

#include <climits>
#include <iostream>
using namespace std;

// ============================================================
//                     INPUT / OUTPUT
// ============================================================

// Take Input
void takeinput(int arr[], int n) {
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << " ";
    /* Getting user input */
    cin >> arr[i];
  }
  cout << endl << endl;
}

// Print Array
void printarr(int arr[], int n) {
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    /* Displaying output to the console */
    cout << arr[i] << " ";
  }
  cout << endl << endl;
}

// Reverse Print Array
void reverseprint(int arr[], int n) {
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = n - 1; i >= 0; i--) {
    /* Displaying output to the console */
    cout << arr[i] << " ";
  }
  cout << endl << endl;
}

// ============================================================
//                   BASIC ARRAY OPERATIONS
// ============================================================

// Sum of Array
void sumarray(int arr[], int n) {
  int sum = 0;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  /* Displaying output to the console */
  cout << "Sum = " << sum;
  cout << endl << endl;
}

// Product of Array
void multarray(int arr[], int n) {
  int mult = 1;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    mult *= arr[i];
  }
  cout << "Product = " << mult;
  cout << endl << endl;
}

// Average of Array
void averagearray(int arr[], int n) {
  double sum = 0;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  /* Displaying output to the console */
  cout << "Average = " << sum / n;
  cout << endl << endl;
}

// Maximum Element
void maxelement(int arr[], int n) {
  int maxVal = INT_MIN;
  int maxIndex = 0;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    if (arr[i] > maxVal) {
      maxVal = arr[i];
      maxIndex = i;
    }
  }
  cout << "Max = " << maxVal << " at index " << maxIndex;
  cout << endl << endl;
}

// Minimum Element
void minelement(int arr[], int n) {
  int minVal = INT_MAX;
  int minIndex = 0;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    if (arr[i] < minVal) {
      minVal = arr[i];
      minIndex = i;
    }
  }
  cout << "Min = " << minVal << " at index " << minIndex;
  cout << endl << endl;
}

// Reverse Array In-Place
void reversearray(int arr[], int n) {
  int left = 0, right = n - 1;
  while (left < right) {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
  cout << "Reversed Array: ";
  printarr(arr, n);
}

// Count Occurrences of a Target
void countoccurrence(int arr[], int n, int target) {
  int count = 0;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    if (arr[i] == target)
      count++;
  }
  cout << target << " appears " << count << " time(s)";
  cout << endl << endl;
}

// Check if Array is Sorted (Ascending)
void issorted(int arr[], int n) {
  bool sorted = true;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      sorted = false;
      break;
    }
  }
  cout << (sorted ? "Array is Sorted" : "Array is NOT Sorted");
  cout << endl << endl;
}

// ============================================================
//                     SEARCHING ALGORITHMS
// ============================================================

// Linear Search  (fixed — single loop, clean output)
void linearsearch(int arr[], int n, int target) {
  bool found = false;
  /*
   * Loop Block: Array/Matrix Traversal
   * Iterates through elements
   */
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      cout << "Found " << target << " at index " << i << " (position " << i + 1
           << ")";
      cout << endl << endl;
      found = true;
      break;
    }
  }
  if (!found) {
    cout << target << " not found in array";
    cout << endl << endl;
  }
}

// Binary Search  (array must be sorted)
void binarysearch(int arr[], int n, int target) {
  int left = 0, right = n - 1;
  bool found = false;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      cout << "Found " << target << " at index " << mid << " (position "
           << mid + 1 << ")";
      cout << endl << endl;
      found = true;
      break;
    } else if (arr[mid] < target)
      left = mid + 1;
    else
      right = mid - 1;
  }

  if (!found) {
    cout << target << " not found in array";
    cout << endl << endl;
  }
}

// ============================================================
//                     SORTING ALGORITHMS
// ============================================================

// Bubble Sort (Ascending)
void bubbleSortasc(int arr[], int n) {
  int temp;
  /*
   * Nested Loop Block: Matrix/2D Traversal
   * Iterates through rows and columns
   */
  // Optimized Bubble Sort (with early-exit flag)
  void bubbleSortAscOpt(int arr[], int n) {
    int temp;
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    // Selection Sort (Ascending)
    void selectionSort(int arr[], int n) {
      /*
       * Nested Loop Block: Matrix/2D Traversal
       * Iterates through rows and columns
       */
      // Insertion Sort (Ascending)
      void insertionSort(int arr[], int n) {
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 1; i < n; i++) {
          int key = arr[i];
          int j = i - 1;

          // Shift elements greater than key one position to the right
          while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
          }
          arr[j + 1] = key;
        }
      }

      // ---------- Merge Sort Helpers ----------
      void merge(int arr[], int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int *L = new int[n1];
        int *R = new int[n2];

        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */

        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int i = 0; i < n1; i++)
          L[i] = arr[left + i];
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = 0; j < n2; j++)
          R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
          if (L[i] <= R[j])
            arr[k++] = L[i++];
          else
            arr[k++] = R[j++];
        }
        while (i < n1)
          arr[k++] = L[i++];
        while (j < n2)
          arr[k++] = R[j++];

        delete[] L;
        delete[] R;
      }

      void mergeSortHelper(int arr[], int left, int right) {
        if (left < right) {
          int mid = left + (right - left) / 2;
          mergeSortHelper(arr, left, mid);
          mergeSortHelper(arr, mid + 1, right);
          merge(arr, left, mid, right);
        }
      }

      // Merge Sort (Ascending)
      void mergeSort(int arr[], int n) { mergeSortHelper(arr, 0, n - 1); }

      // ---------- Quick Sort Helpers ----------
      int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */

        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = low; j < high; j++) {
          if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
          }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
      }

      void quickSortHelper(int arr[], int low, int high) {
        if (low < high) {
          int pi = partition(arr, low, high);
          quickSortHelper(arr, low, pi - 1);
          quickSortHelper(arr, pi + 1, high);
        }
      }

      // Quick Sort (Ascending)
      void quickSort(int arr[], int n) { quickSortHelper(arr, 0, n - 1); }

      // ============================================================
      //                  DUPLICATE HANDLING
      // ============================================================

      // Remove Duplicates from a Sorted Array (returns new length)
      int removeDuplicatesSorted(int arr[], int n) {
        if (n == 0)
          return 0;
        int newLen = 1;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 1; i < n; i++) {
          if (arr[i] != arr[i - 1])
            arr[newLen++] = arr[i];
        }
        cout << "Array after removing duplicates: ";
        printarr(arr, newLen);
        return newLen;
      }

      // Check if Any Duplicate Exists  O(n²)
      void hasDuplicate(int arr[], int n) {
        bool found = false;
        /*
         * Nested Loop Block: Matrix/2D Traversal
         * Iterates through rows and columns
         */
        // Find the First Duplicate Element
        void findFirstDuplicate(int arr[], int n) {
          bool found = false;
          /*
           * Nested Loop Block: Matrix/2D Traversal
           * Iterates through rows and columns
           */
          // Find and Print ALL Duplicate Elements
          void findAllDuplicates(int arr[], int n) {
            bool anyFound = false;
            cout << "Duplicate elements: ";
            /*
             * Nested Loop Block: Matrix/2D Traversal
             * Iterates through rows and columns
             */
            // Only print it once per value
            bool alreadyPrinted = false;
            /*
             * Loop Block: Array/Matrix Traversal
             * Iterates through elements
             */
            for (int k = 0; k < i; k++) {
              if (arr[k] == arr[i]) {
                alreadyPrinted = true;
                break;
              }
            }
            if (!alreadyPrinted) {
              /* Displaying output to the console */
              cout << arr[i] << " ";
              anyFound = true;
            }
            break;
          }
        }
      }
      if (!anyFound)
        cout << "None";
      cout << endl << endl;
    }

    // Count Total Duplicate Elements (unique values that repeat)
    void countDuplicates(int arr[], int n) {
      int count = 0;
      /*
       * Nested Loop Block: Matrix/2D Traversal
       * Iterates through rows and columns
       */
      // Count this value only once even if it repeats many times
      if (isDuplicate) {
        bool alreadyCounted = false;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int k = 0; k < i; k++) {
          if (arr[k] == arr[i]) {
            alreadyCounted = true;
            break;
          }
        }
        if (!alreadyCounted)
          count++;
      }
    }
    cout << "Number of duplicate values = " << count;
    cout << endl << endl;
  }

  // Remove Duplicates from an UNSORTED Array (returns new length)
  int removeDuplicatesUnsorted(int arr[], int n) {
    int newLen = 0;
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    // Find Missing Number in Array of 1 to N  (XOR method)
    void findMissingNumber(int arr[], int n) {
      // arr should contain n-1 elements from the range [1, n]
      int xorAll = 0, xorArr = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i <= n; i++)
        xorAll ^= i;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n - 1; i++)
        xorArr ^= arr[i];
      cout << "Missing number = " << (xorAll ^ xorArr);
      cout << endl << endl;
    }

    // Find Duplicate in Array of Range 1 to N  (XOR method)
    // Array has n+1 elements where one value is repeated
    void findDuplicateInRange(int arr[], int n) {
      int xorAll = 0, xorArr = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i <= n; i++)
        xorAll ^= i;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i <= n; i++)
        xorArr ^= arr[i];
      cout << "Duplicate number = " << (xorAll ^ xorArr);
      cout << endl << endl;
    }

    // ============================================================
    //                  ROTATION FUNCTIONS
    // ============================================================

    // Rotate Array Left by k Positions
    void rotateLeft(int arr[], int n, int k) {
      k = k % n;
      if (k == 0) {
        printarr(arr, n);
        return;
      }

      int *temp = new int[k];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < k; i++)
        temp[i] = arr[i];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n - k; i++)
        arr[i] = arr[i + k];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < k; i++)
        arr[n - k + i] = temp[i];

      delete[] temp;
      cout << "Array after left rotation by " << k << ": ";
      printarr(arr, n);
    }

    // Rotate Array Right by k Positions
    void rotateRight(int arr[], int n, int k) {
      k = k % n;
      if (k == 0) {
        printarr(arr, n);
        return;
      }

      int *temp = new int[k];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < k; i++)
        arr[i] = temp[i];

      delete[] temp;
      cout << "Array after right rotation by " << k << ": ";
      printarr(arr, n);
    }

    // ============================================================
    //              ELEMENT ANALYSIS FUNCTIONS
    // ============================================================

    // Second Largest Element
    void secondLargest(int arr[], int n) {
      if (n < 2) {
        cout << "Need at least 2 elements";
        cout << endl << endl;
        return;
      }
      int first = INT_MIN, second = INT_MIN;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
          second = first;
          first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
          second = arr[i];
        }
      }
      if (second == INT_MIN)
        cout << "No second largest (all elements equal)";
      else
        cout << "Second Largest = " << second;
      cout << endl << endl;
    }

    // Second Smallest Element
    void secondSmallest(int arr[], int n) {
      if (n < 2) {
        cout << "Need at least 2 elements";
        cout << endl << endl;
        return;
      }
      int first = INT_MAX, second = INT_MAX;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
          second = first;
          first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
          second = arr[i];
        }
      }
      if (second == INT_MAX)
        cout << "No second smallest (all elements equal)";
      else
        cout << "Second Smallest = " << second;
      cout << endl << endl;
    }

    // Frequency of Every Element
    void frequencyCount(int arr[], int n) {
      bool counted[n];
      /*
       * Nested Loop Block: Matrix/2D Traversal
       * Iterates through rows and columns
       */
      // ============================================================
      //              TWO-ARRAY OPERATIONS
      // ============================================================

      // Merge Two Arrays into a Third (result printed)
      void mergeArrays(int arr1[], int n1, int arr2[], int n2) {
        int n3 = n1 + n2;
        int *arr3 = new int[n3];
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int i = 0; i < n1; i++)
          arr3[i] = arr1[i];
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int i = 0; i < n2; i++)
          arr3[n1 + i] = arr2[i];
        cout << "Merged Array: ";
        printarr(arr3, n3);
        delete[] arr3;
      }

      // Intersection of Two Arrays (elements common to both)
      void arrayIntersection(int arr1[], int n1, int arr2[], int n2) {
        cout << "Intersection: ";
        bool found = false;
        /*
         * Nested Loop Block: Matrix/2D Traversal
         * Iterates through rows and columns
         */
        // Print only if not already printed
        bool alreadyPrinted = false;
        /*
         * Loop Block: Array/Matrix Traversal
         * Iterates through elements
         */
        for (int k = 0; k < i; k++)
          if (arr1[k] == arr1[i]) {
            alreadyPrinted = true;
            break;
          }
        if (!alreadyPrinted) {
          cout << arr1[i] << " ";
          found = true;
        }
        break;
      }
    }
  }
  if (!found)
    cout << "None";
  cout << endl << endl;
}

// Union of Two Arrays (all unique elements from both)
void arrayUnion(int arr1[], int n1, int arr2[], int n2) {
  cout << "Union: ";
  int total = n1 + n2;
  int *combined = new int[total];
  /*
   * Nested Loop Block: Matrix/2D Traversal
   * Iterates through rows and columns
   */
  // ============================================================
  //              SPECIAL PATTERN FUNCTIONS
  // ============================================================

  // Check if Array is a Palindrome
  void isPalindrome(int arr[], int n) {
    bool palind = true;
    /*
     * Loop Block: Array/Matrix Traversal
     * Iterates through elements
     */
    for (int i = 0; i < n / 2; i++) {
      if (arr[i] != arr[n - 1 - i]) {
        palind = false;
        break;
      }
    }
    cout << (palind ? "Array is a Palindrome" : "Array is NOT a Palindrome");
    cout << endl << endl;
  }

  // Move All Zeros to End (preserves order of non-zero elements)
  void moveZerosToEnd(int arr[], int n) {
    int pos = 0;
    /*
     * Loop Block: Array/Matrix Traversal
     * Iterates through elements
     */
    for (int i = 0; i < n; i++)
      if (arr[i] != 0)
        arr[pos++] = arr[i];
    while (pos < n)
      arr[pos++] = 0;

    cout << "Array after moving zeros to end: ";
    printarr(arr, n);
  }

  // Two Sum — Find a Pair That Adds Up to Target
  void twoSum(int arr[], int n, int target) {
    bool found = false;
    /*
     * Nested Loop Block: Matrix/2D Traversal
     * Iterates through rows and columns
     */
    // Largest Sum Subarray — Kadane's Algorithm
    void largestSumSubarray(int arr[], int n) {
      int maxSum = arr[0];
      int currentSum = arr[0];
      int start = 0, end = 0, tempStart = 0;

      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */

      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] < arr[i]) {
          currentSum = arr[i];
          tempStart = i;
        } else {
          currentSum += arr[i];
        }

        if (currentSum > maxSum) {
          maxSum = currentSum;
          start = tempStart;
          end = i;
        }
      }
      /* Displaying output to the console */
      cout << "Largest sum subarray sum = " << maxSum;
      cout << " (from index " << start << " to " << end << ")";
      cout << endl << endl;
    }

    // ============================================================
    //                  TWO POINTER TECHNIQUES
    // ============================================================

    // Check if Pair with Given Sum Exists (sorted array, O(n))
    void twoSumSorted(int arr[], int n, int target) {
      int left = 0, right = n - 1;
      bool found = false;
      while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
          /* Displaying output to the console */
          cout << "Pair found: " << arr[left] << " + " << arr[right] << " = "
               << target << "  (index " << left << " and " << right << ")";
          cout << endl << endl;
          found = true;
          break;
        } else if (sum < target)
          left++;
        else
          right--;
      }
      if (!found) {
        /* Displaying output to the console */
        cout << "No pair with sum = " << target;
        cout << endl << endl;
      }
    }

    // Three Sum — Find Triplet That Sums to Target
    void threeSum(int arr[], int n, int target) {
      // Sort first, then use two pointers for inner search
      int *tmp = new int[n];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        tmp[i] = arr[i];

      // Simple sort for temp copy
      for (int i = 0; i < n - 1; i++)
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = 0; j < n - i - 1; j++)
          if (tmp[j] > tmp[j + 1])
            swap(tmp[j], tmp[j + 1]);

      bool found = false;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n - 2 && !found; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
          int sum = tmp[i] + tmp[left] + tmp[right];
          if (sum == target) {
            cout << "Triplet found: " << tmp[i] << " + " << tmp[left] << " + "
                 << tmp[right] << " = " << target;
            cout << endl << endl;
            found = true;
            break;
          } else if (sum < target)
            left++;
          else
            right--;
        }
      }
      if (!found) {
        /* Displaying output to the console */
        cout << "No triplet with sum = " << target;
        cout << endl << endl;
      }
      delete[] tmp;
    }

    // Segregate Positive and Negative Numbers (negatives left, positives right)
    void segregatePosNeg(int arr[], int n) {
      int left = 0, right = n - 1;
      while (left < right) {
        while (left < right && arr[left] < 0)
          left++;
        while (left < right && arr[right] >= 0)
          right--;
        if (left < right)
          swap(arr[left], arr[right]);
      }
      cout << "After segregation: ";
      printarr(arr, n);
    }

    // Container With Most Water (two pointers on heights array)
    void maxWater(int arr[], int n) {
      int left = 0, right = n - 1, maxVol = 0;
      while (left < right) {
        int vol = min(arr[left], arr[right]) * (right - left);
        maxVol = max(maxVol, vol);
        if (arr[left] < arr[right])
          left++;
        else
          right--;
      }
      cout << "Maximum water = " << maxVol;
      cout << endl << endl;
    }

    // ============================================================
    //                  SLIDING WINDOW TECHNIQUES
    // ============================================================

    // Maximum Sum Subarray of Size K  (fixed window)
    void maxSumSubarrayK(int arr[], int n, int k) {
      if (k > n) {
        cout << "k > n, invalid";
        cout << endl << endl;
        return;
      }

      int windowSum = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < k; i++)
        windowSum += arr[i];

      int maxSum = windowSum, maxStart = 0;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
          maxSum = windowSum;
          maxStart = i - k + 1;
        }
      }
      /* Displaying output to the console */
      cout << "Max sum of subarray of size " << k << " = " << maxSum;
      cout << " (index " << maxStart << " to " << maxStart + k - 1 << ")";
      cout << endl << endl;
    }

    // Smallest Subarray with Sum >= Target  (variable window)
    void smallestSubarrayWithSum(int arr[], int n, int target) {
      int minLen = INT_MAX, windowSum = 0, start = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int end = 0; end < n; end++) {
        windowSum += arr[end];
        while (windowSum >= target) {
          minLen = min(minLen, end - start + 1);
          windowSum -= arr[start++];
        }
      }
      if (minLen == INT_MAX)
        /* Displaying output to the console */
        cout << "No subarray with sum >= " << target;
      else
        /* Displaying output to the console */
        cout << "Smallest subarray length with sum >= " << target << " = "
             << minLen;
      cout << endl << endl;
    }

    // Count Subarrays with Sum Equals K  (sliding window for non-negatives)
    void countSubarraysWithSum(int arr[], int n, int k) {
      int count = 0, windowSum = 0, start = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int end = 0; end < n; end++) {
        windowSum += arr[end];
        while (windowSum > k && start <= end)
          windowSum -= arr[start++];
        if (windowSum == k)
          count++;
      }
      /* Displaying output to the console */
      cout << "Subarrays with sum = " << k << ": " << count;
      cout << endl << endl;
    }

    // Longest Subarray with All Equal Elements
    void longestEqualSubarray(int arr[], int n) {
      int maxLen = 1, curLen = 1, maxStart = 0, curStart = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
          curLen++;
          if (curLen > maxLen) {
            maxLen = curLen;
            maxStart = curStart;
          }
        } else {
          curLen = 1;
          curStart = i;
        }
      }
      cout << "Longest equal subarray length = " << maxLen
           << " (value = " << arr[maxStart] << ", index " << maxStart << " to "
           << maxStart + maxLen - 1 << ")";
      cout << endl << endl;
    }

    // ============================================================
    //                  PREFIX SUM TECHNIQUES
    // ============================================================

    // Build and Print Prefix Sum Array
    void prefixSum(int arr[], int n) {
      int *prefix = new int[n];
      prefix[0] = arr[0];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

      /* Displaying output to the console */
      cout << "Prefix Sum Array: ";
      printarr(prefix, n);
      delete[] prefix;
    }

    // Range Sum Query using Prefix Sum  O(1) per query
    void rangeSumQuery(int arr[], int n, int l, int r) {
      int *prefix = new int[n];
      prefix[0] = arr[0];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

      int sum = (l == 0) ? prefix[r] : prefix[r] - prefix[l - 1];
      /* Displaying output to the console */
      cout << "Sum of arr[" << l << " to " << r << "] = " << sum;
      cout << endl << endl;
      delete[] prefix;
    }

    // Equilibrium Index — index where left sum equals right sum
    void equilibriumIndex(int arr[], int n) {
      int totalSum = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        totalSum += arr[i];

      int leftSum = 0;
      bool found = false;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
          /* Displaying output to the console */
          cout << "Equilibrium index = " << i << " (value = " << arr[i] << ")";
          cout << endl << endl;
          found = true;
          break;
        }
        leftSum += arr[i];
      }
      if (!found) {
        cout << "No equilibrium index found";
        cout << endl << endl;
      }
    }

    // Product Array — each element = product of all others (no division)
    void productExceptSelf(int arr[], int n) {
      int *result = new int[n];
      result[0] = 1;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++)
        result[i] = result[i - 1] * arr[i - 1];

      int rightProd = 1;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProd;
        rightProd *= arr[i];
      }
      cout << "Product Except Self: ";
      printarr(result, n);
      delete[] result;
    }

    // ============================================================
    //              MAJORITY / FREQUENCY PROBLEMS
    // ============================================================

    // Majority Element — appears more than n/2 times  (Boyer-Moore Voting)
    void majorityElement(int arr[], int n) {
      int candidate = arr[0], votes = 1;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++) {
        if (votes == 0) {
          candidate = arr[i];
          votes = 1;
        } else if (arr[i] == candidate)
          votes++;
        else
          votes--;
      }
      // Verify
      int count = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        if (arr[i] == candidate)
          count++;
      if (count > n / 2)
        cout << "Majority element = " << candidate << " (appears " << count
             << " times)";
      else
        cout << "No majority element exists";
      cout << endl << endl;
    }

    // Leaders in Array — element greater than all elements to its right
    void leadersInArray(int arr[], int n) {
      cout << "Leaders: ";
      int maxRight = arr[n - 1];
      /* Displaying output to the console */
      cout << arr[n - 1] << " "; // rightmost is always a leader
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
          /* Displaying output to the console */
          cout << arr[i] << " ";
          maxRight = arr[i];
        }
      }
      cout << endl << endl;
    }

    // Kth Largest Element (using partial selection)
    void kthLargest(int arr[], int n, int k) {
      if (k < 1 || k > n) {
        cout << "Invalid k";
        cout << endl << endl;
        return;
      }
      int *tmp = new int[n];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        tmp[i] = arr[i];
      // Sort descending
      for (int i = 0; i < n - 1; i++)
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = 0; j < n - i - 1; j++)
          if (tmp[j] < tmp[j + 1])
            swap(tmp[j], tmp[j + 1]);
      cout << k << "th Largest = " << tmp[k - 1];
      cout << endl << endl;
      delete[] tmp;
    }

    // Kth Smallest Element
    void kthSmallest(int arr[], int n, int k) {
      if (k < 1 || k > n) {
        cout << "Invalid k";
        cout << endl << endl;
        return;
      }
      int *tmp = new int[n];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        tmp[i] = arr[i];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n - 1; i++)
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = 0; j < n - i - 1; j++)
          if (tmp[j] > tmp[j + 1])
            swap(tmp[j], tmp[j + 1]);
      cout << k << "th Smallest = " << tmp[k - 1];
      cout << endl << endl;
      delete[] tmp;
    }

    // ============================================================
    //              SPECIAL INTERVIEW PROBLEMS
    // ============================================================

    // Dutch National Flag — Sort 0s, 1s, and 2s in one pass
    void dutchNationalFlag(int arr[], int n) {
      int low = 0, mid = 0, high = n - 1;
      while (mid <= high) {
        if (arr[mid] == 0) {
          swap(arr[low++], arr[mid++]);
        } else if (arr[mid] == 1) {
          mid++;
        } else {
          swap(arr[mid], arr[high--]);
        }
      }
      cout << "Sorted 0s 1s 2s: ";
      printarr(arr, n);
    }

    // Trapping Rainwater — total water trapped between walls
    void trappingRainwater(int arr[], int n) {
      if (n < 3) {
        cout << "Water trapped = 0";
        cout << endl << endl;
        return;
      }
      int *leftMax = new int[n];
      int *rightMax = new int[n];

      leftMax[0] = arr[0];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], arr[i]);

      rightMax[n - 1] = arr[n - 1];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], arr[i]);

      int water = 0;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n; i++)
        water += min(leftMax[i], rightMax[i]) - arr[i];

      cout << "Total water trapped = " << water;
      cout << endl << endl;
      delete[] leftMax;
      delete[] rightMax;
    }

    // Stock Buy & Sell — Maximum Profit (one transaction)
    void maxProfitOnce(int prices[], int n) {
      int minPrice = prices[0], maxProfit = 0;
      int buyDay = 0, sellDay = 0, tempBuy = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
          minPrice = prices[i];
          tempBuy = i;
        } else if (prices[i] - minPrice > maxProfit) {
          maxProfit = prices[i] - minPrice;
          buyDay = tempBuy;
          sellDay = i;
        }
      }
      if (maxProfit == 0)
        cout << "No profitable transaction possible";
      else
        cout << "Buy on day " << buyDay + 1 << " at price " << prices[buyDay]
             << ", Sell on day " << sellDay + 1 << " at price "
             << prices[sellDay] << " | Profit = " << maxProfit;
      cout << endl << endl;
    }

    // Stock Buy & Sell — Maximum Profit (unlimited transactions)
    void maxProfitUnlimited(int prices[], int n) {
      int totalProfit = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++)
        if (prices[i] > prices[i - 1])
          totalProfit += prices[i] - prices[i - 1];
      cout << "Max profit (unlimited trades) = " << totalProfit;
      cout << endl << endl;
    }

    // Maximum Product Subarray
    void maxProductSubarray(int arr[], int n) {
      int maxProd = arr[0], minProd = arr[0], result = arr[0];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++) {
        if (arr[i] < 0)
          swap(maxProd, minProd);
        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);
        result = max(result, maxProd);
      }
      cout << "Maximum product subarray = " << result;
      cout << endl << endl;
    }

    // Find Peak Element — element greater than both its neighbours
    void findPeakElement(int arr[], int n) {
      bool found = false;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++) {
        bool leftOK = (i == 0) || arr[i] > arr[i - 1];
        bool rightOK = (i == n - 1) || arr[i] > arr[i + 1];
        if (leftOK && rightOK) {
          /* Displaying output to the console */
          cout << "Peak element = " << arr[i] << " at index " << i;
          cout << endl << endl;
          found = true;
          break;
        }
      }
      if (!found) {
        cout << "No peak element found";
        cout << endl << endl;
      }
    }

    // Longest Consecutive Sequence (unsorted array)
    void longestConsecutive(int arr[], int n) {
      // Sort a copy then scan
      int *tmp = new int[n];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        tmp[i] = arr[i];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n - 1; i++)
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = 0; j < n - i - 1; j++)
          if (tmp[j] > tmp[j + 1])
            swap(tmp[j], tmp[j + 1]);

      int maxLen = 1, curLen = 1;
      int seqStart = tmp[0];
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 1; i < n; i++) {
        if (tmp[i] == tmp[i - 1])
          continue; // skip duplicates
        if (tmp[i] == tmp[i - 1] + 1) {
          curLen++;
        } else {
          if (curLen > maxLen) {
            maxLen = curLen;
            seqStart = tmp[i - curLen];
          }
          curLen = 1;
        }
      }
      if (curLen > maxLen) {
        maxLen = curLen;
        seqStart = tmp[n - curLen];
      }

      cout << "Longest consecutive sequence length = " << maxLen
           << " (starts at " << seqStart << ")";
      cout << endl << endl;
      delete[] tmp;
    }

    // Jump Game — can you reach the last index?
    void jumpGame(int arr[], int n) {
      int maxReach = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++) {
        if (i > maxReach) {
          cout << "Cannot reach the end";
          cout << endl << endl;
          return;
        }
        maxReach = max(maxReach, i + arr[i]);
      }
      cout << "Can reach the last index";
      cout << endl << endl;
    }

    // Minimum Jumps to Reach End
    void minJumps(int arr[], int n) {
      if (n <= 1) {
        cout << "Already at end, jumps = 0";
        cout << endl << endl;
        return;
      }
      if (arr[0] == 0) {
        cout << "Cannot move from start";
        cout << endl << endl;
        return;
      }

      int jumps = 1, curEnd = arr[0], maxReach = arr[0];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 1; i < n; i++) {
        if (i == n - 1)
          break;
        maxReach = max(maxReach, i + arr[i]);
        if (i == curEnd) {
          jumps++;
          curEnd = maxReach;
        }
      }
      cout << "Minimum jumps to reach end = " << jumps;
      cout << endl << endl;
    }

    // Wave Array — arrange in wave form: arr[0] >= arr[1] <= arr[2] >=
    // arr[3]...
    void waveArray(int arr[], int n) {
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n - 1; i += 2)
        if (arr[i] < arr[i + 1])
          swap(arr[i], arr[i + 1]);
      cout << "Wave Array: ";
      printarr(arr, n);
    }

    // Rearrange — Alternate Positive and Negative (keeps order, fills
    // remaining)
    void alternatePosnNeg(int arr[], int n) {
      int *result = new int[n];
      int pos = 0, neg = 0, idx = 0;

      // collect positives and negatives
      int *posArr = new int[n];
      int *negArr = new int[n];
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
          posArr[pos++] = arr[i];
        else
          negArr[neg++] = arr[i];
      }
      int pi = 0, ni = 0;
      while (pi < pos && ni < neg) {
        result[idx++] = posArr[pi++];
        result[idx++] = negArr[ni++];
      }
      while (pi < pos)
        result[idx++] = posArr[pi++];
      while (ni < neg)
        result[idx++] = negArr[ni++];

      cout << "Alternating Pos/Neg: ";
      printarr(result, n);
      delete[] result;
      delete[] posArr;
      delete[] negArr;
    }

    // Subarray with Zero Sum — check if any subarray sums to 0
    void hasZeroSumSubarray(int arr[], int n) {
      // Using prefix sums — if same prefix sum seen twice → zero sum subarray
      // exists O(n²) version (no hash map needed)
      int *prefix = new int[n + 1];
      prefix[0] = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + arr[i];

      bool found = false;
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i <= n && !found; i++)
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = i + 1; j <= n; j++)
          if (prefix[j] == prefix[i]) {
            /* Displaying output to the console */
            cout << "Zero-sum subarray exists (index " << i << " to " << j - 1
                 << ")";
            cout << endl << endl;
            found = true;
            break;
          }
      if (!found) {
        /* Displaying output to the console */
        cout << "No zero-sum subarray";
        cout << endl << endl;
      }
      delete[] prefix;
    }

    // Count Inversions — pairs (i,j) where i<j but arr[i]>arr[j]
    void countInversions(int arr[], int n) {
      int count = 0;
      /*
       * Loop Block: Array/Matrix Traversal
       * Iterates through elements
       */
      for (int i = 0; i < n - 1; i++)
        /*
         * Loop Block
         * Iterates through the array/matrix elements to perform operations.
         */
        for (int j = i + 1; j < n; j++)
          if (arr[i] > arr[j])
            count++;
      cout << "Number of inversions = " << count;
      cout << endl << endl;
    }

    // Next Permutation — rearranges to lexicographically next permutation
    void nextPermutation(int arr[], int n) {
      int i = n - 2;
      while (i >= 0 && arr[i] >= arr[i + 1])
        i--;

      if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i])
          j--;
        swap(arr[i], arr[j]);
      }
      // Reverse from i+1 to end
      int left = i + 1, right = n - 1;
      while (left < right)
        swap(arr[left++], arr[right--]);

      cout << "Next Permutation: ";
      printarr(arr, n);
    }

    // Minimum in Rotated Sorted Array
    void minInRotatedSorted(int arr[], int n) {
      int left = 0, right = n - 1;
      while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[right])
          left = mid + 1;
        else
          right = mid;
      }
      /* Displaying output to the console */
      cout << "Minimum in rotated sorted array = " << arr[left];
      cout << endl << endl;
    }

    // Search in Rotated Sorted Array
    void searchRotatedSorted(int arr[], int n, int target) {
      int left = 0, right = n - 1;
      while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
          cout << "Found " << target << " at index " << mid;
          cout << endl << endl;
          return;
        }
        // Left half is sorted
        if (arr[left] <= arr[mid]) {
          if (target >= arr[left] && target < arr[mid])
            right = mid - 1;
          else
            left = mid + 1;
        } else // Right half is sorted
        {
          if (target > arr[mid] && target <= arr[right])
            left = mid + 1;
          else
            right = mid - 1;
        }
      }
      cout << target << " not found in rotated sorted array";
      cout << endl << endl;
    }

    // Merge Overlapping Intervals
    // intervals[][0] = start, intervals[][1] = end
    void mergeIntervals(int intervals[][2], int n) {
      // Sort by start time
      /*
       * Nested Loop Block: Matrix/2D Traversal
       * Iterates through rows and columns
       */
      // ARRAY_FUNCTIONS