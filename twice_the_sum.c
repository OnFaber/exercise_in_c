#include <stdio.h>

#define SIZE 3

int twice(int x){
  return 2 * x;
}

int main(void) {
  int num_arr[SIZE], result;
  int sum=0;
  
  printf("input %d integers: ", SIZE);
  for (int i = 0; i < SIZE; ++i) {
    scanf("%d", &num_arr[i]);
    sum += num_arr[i];
  }
  result = twice(sum) + num_arr[SIZE - 1];
  printf("Twice the sum of your integers plus %d is %d --- bye!\n", num_arr[SIZE - 1], result);
  return 0;
}
