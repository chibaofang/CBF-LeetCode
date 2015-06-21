#include <stdio.h>
#include <stdlib.h>

//Why need the INT_MIN be defined like that?
//Please take a look: 
//  http://stackoverflow.com/questions/14695118/2147483648-0-returns-true-in-c
#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
int reverse(int x) {
    int y=0;
    int n;
    while( x != 0){
        n = x%10;
        //Checking the over/underflow.
        //Actually, it should be y>(INT_MAX-n)/10, but n/10 is 0, so omit it.
        if (y > INT_MAX/10 || y < INT_MIN/10){
             return 0;
        }
        y = y*10 + n;
        x /= 10;
    }
    return y;
}
