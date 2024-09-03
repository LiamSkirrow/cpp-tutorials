// playing with pointers

#include <stdio.h>

void func(const int *, int *);

int main(int argc, char **argv){
    
    int var = 6;
    int value;

    func(&var, &value);

    printf("value = %d\n", value);
    
    return 0;
}

void func(const int *ptr, int *value){
    // doesn't work!
    // *ptr = 0;

    // assign a dummy variable with the read-only const value
    *value = *ptr;
}