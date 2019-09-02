#include <stdbool.h>

bool array_equals(int a[], int b[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}
