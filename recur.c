/*递归：注意终止条件的设置*/
#include<stdio.h>

int main()
{
  int N;
  int value;
  int digui(int n);
  printf("Please enter the number:\n");
  scanf("%d", &N);
  value = digui(N);
  printf("value = %d\n", value);
  
  return 0;
}
  
int digui(int n){
  int temp;
  if (n < 1){
    temp  = 1;
  }else{
    temp = n*digui(n-1);
  }
  return temp;
}
