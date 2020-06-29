
#include <stdio.h>
#include <cilk/cilk.h>

static void hello(){
    for(int i=0;i<1000000;i++)
        printf("");
    printf("Hello ");
}

static void world(){
    for(int i=0;i<1000000;i++)
        printf("");
    printf("world! ");
}

int main(){
    cilk_spawn hello();
    cilk_spawn world();
    printf("Done! ");
}
