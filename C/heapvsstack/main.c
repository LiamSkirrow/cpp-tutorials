// playing with declaring variables on the stack and on the heap, seeing which
// variables are preserved across scope boundaries. The heap-declared variable
// remains even when the original scope is left, and as long as you have access 
// to the pointer then you keep the heap-declared variable. Inversely, the stack-
// declared variable is destroyed when the local scope is returned from.

#include <stdio.h>
#include <malloc.h>

int *declareStackVar(void);
int *declareHeapVar(void);

int main(int argc, char **argv){
    
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = declareStackVar();
    ptr2 = declareHeapVar();

    printf("In main scope\n");
    printf("Heap var: %d\n", *ptr2);
    printf("Stack var: %d\n", *ptr1);

    free(ptr2);
    
    return 0;
}

// declare vars in a separate scope
int *declareStackVar(void){

    int var = 5;
    int *ptr;
    ptr = &var;

    printf("Stack: in local scope: %d\n", *ptr);

    return ptr;
}

// declare vars in a separate scope
int *declareHeapVar(void){

    int var = 5;
    int *ptr = malloc(sizeof(int));
    *ptr = var;

    printf("Heap: in local scope: %d\n", *ptr);

    return ptr;
}
