#include <stdio.h>

int max_of_four(int num1, int num2, int num3, int num4) {
  int array[4] = {
    num1,
    num2,
    num3,
    num4
  };
  int max = array[0];
  for (int i = 0; i < 4; i++) {
    if (max < array[i]) {
      max = array[i];
    }
  }
  return max;
}

int main() {
  int num1, num2, num3, num4;
  int res = max_of_four(10, 14, 25, 98);
  printf("%d", res);

  return 0;
}
