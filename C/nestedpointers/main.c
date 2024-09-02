// playing with multiple levels of pointers

#include <stdio.h>

int main(int argc, char **argv){
    
    int var = 6;
    int *ptr1;
    int **ptr2;

    ptr1 = &var;
    ptr2 = &ptr1;

    printf("**ptr2 = %d\n", *(*ptr2));
    
    return 0;
}
