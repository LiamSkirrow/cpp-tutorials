// pass pointers as args to functions to modify addresses directly
// aka: pass-by-address

#include <stdio.h>

void modifyArg(int *);

int main(int argc, char **argv){
    
    int var = 6;
    // explicit way
    // int *ptr = &var;
    // modifyArg(ptr);

    // implicit way
    modifyArg(&var);

    printf("var = %d\n", var);
    
    return 0;
}

// modify the dereferenced address directly in this void function
void modifyArg(int *addr){
    // these parentheses are very important! Just going -> *addr++ translates to -> *addr = addr + 1 (WRONG)
    (*addr)++;
    printf("addr = %d\n", *addr);
}
