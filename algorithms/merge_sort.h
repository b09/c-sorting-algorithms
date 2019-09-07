/*

Merge sort

Worst case performance: O(n log(n))
Best case performance: Ω(n log(n))
Average performance: Θ(n log(n))
Worst case space complexity: O(n)

*/

void merge(int arr1[], int n1, int arr2[], int n2) {
  int tmp[n1 + n2];
  int i = 0;
  int j = 0;
  int k = 0;

  while (j < n1 && k < n2) {
    if (arr1[j] < arr2[k]) {
      tmp[i++] = arr1[j++];
    } else {
      tmp[i++] = arr2[k++];
    }
  }

  while (j < n1) {
    tmp[i++] = arr1[j++];
  }

  while (k < n2) {
    tmp[i++] = arr2[k++];
  }

  for (i = 0; i < n1 + n2; i++) {
    arr1[i] = tmp[i];
  }
}

void merge_sort(int arr[], int n) {
  if (n == 1) {
    return;
  }

  int n1 = n / 2;
  int n2 = n - n1;

  merge_sort(arr, n1);
  merge_sort(arr + n1, n2);
  merge(arr, n1, arr + n1, n2);
}
