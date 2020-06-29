#include <stdio.h>
#include <cilk/cilk.h>

int main(){
    int sum = 0;
    //int i = 0;

    cilk_for (int i = 0; i <= 1000000; i++)
        sum += i;

    printf("%d\n",sum);
} 
