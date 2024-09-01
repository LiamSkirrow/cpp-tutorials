// playing with pointers

#include <stdio.h>

int main(int argc, char **argv){
    
    int var = 6;
    int *ptr1, *ptr2;

    ptr1 = &var;
    ptr2 = ptr1;

    printf("&ptr1 = %x\n", &ptr1);
    printf("ptr1 = %x\n", ptr1);
    printf("&var = %x\n", &var);
    printf("var = %d\n\n", *ptr1);

    printf("&ptr2 = %x\n", &ptr2);
    printf("ptr2 = %x\n", ptr2);
    printf("var = %d\n\n", *ptr2);
    
    return 0;
}
