#include<stdio.h>

int card_number(float);

int main()
{
  float length = 0;
  int cards = 0;
  printf("Please enther the length:\n");
  while(scanf("%f",&length) != EOF){
    if(length != 0.00){
      cards = card_number(length);
      printf("%d card(s)\n", cards);
    }else{
      break;
    }
  }
  
  return 0;
}

int card_number(float length){
  int n = 2;
  float length_sum = 0;
  float a = 0;
  if(length < 0){
    printf("WARNING:the value should be positive\n");
    return -1;
  }else{
    while(length_sum < length){
      a = 1.00/n;  /*考察浮点数的运算规则*/
      length_sum = length_sum + a;
      n++;
    }
  }
  return n-2;
}
