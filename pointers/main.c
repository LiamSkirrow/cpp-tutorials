// playing with pointers

#include <stdio.h>

typedef struct dataStruct{
    int var;
} ds;

int main(int argc, char **argv){
    
    int var = 6;
    int *ptr;

    ptr = &var;

    ds blah;
    blah.var = 5;

    printf("&ptr = %x\n", &ptr);
    printf("ptr = %x\n", ptr);
    printf("&var = %x\n", &var);
    printf("var = %d\n", *ptr);
    
    return 0;
}
