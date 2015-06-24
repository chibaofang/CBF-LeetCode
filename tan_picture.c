/*p114*/
/*       *
        ***
       *****
      *******
       *****
        ***
         *
*/

#include<stdio.h>

int main()
{
  int i = 0;
  int j = 0;
  for (i < 0; i < 4; i++){
    for(i = 0; j < 3 - i; i++){
      printf(" ");
    }
    for(j = 3 - i; j < 3; j++){
      printf("*");
    }
    printf(" ");
    
    for(j = 3; j < 3 + i; j++){
      printf("*");
    }
    for(j = 3 + i; j < 6; j++){
      printf(" ");
    }
  }

  for(i = 4; i < 7; i++){
    for(j = 0; j <i - 3; j++){
      printf("*");
    }
    for(j = 1; j < 7 - i; j++){
      printf(" ");
    }
    
    printf("*");
    
    for(j = 0; j < 6 - i; j++){
      printf("*");
    }
    for(j = 0; j < i - 3; j++){
      printf(" ")
    }
  }
  
  return 0;
}
