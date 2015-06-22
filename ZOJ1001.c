#include <stdio.h>

int sum(int a, int b);

int main(){
  int a = 0;
  int b = 0;
  int c = 0;
  
  printf("Please enter the two number to sum:\n");
  scanf("%d %d", &a, &b);
  c = sum(a,b);
  printf("the sum is: %d\n", c);
  
  return 0
]
