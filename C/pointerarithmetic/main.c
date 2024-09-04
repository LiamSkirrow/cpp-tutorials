// playing with pointer arithmetic

// NOTE: This is a really crappy example due to the compile warnings...
//       but I got the point across

#include <stdio.h>

int main(int argc, char **argv){
    
    int var[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    char chvar[5] = {'a', 'c', 'e', 'g', 'i'};
    int *ptr1  = &var[0];
    char *ptr2 = &chvar[0]; 

    unsigned int ptr1_oldAddr = ptr1;
    unsigned int ptr2_oldAddr = ptr2;

    printf("ptr1_oldAddr = %x\n"  , ptr1_oldAddr);
    printf("ptr2_oldAddr = %x\n\n", ptr2_oldAddr);

    // adding one indicates moving along one array index rather than moving along 
    // by a specific fixed memory amount (1 byte always, or 4 bytes always etc...)
    ptr1 = ptr1 + 1;
    ptr2 = ptr2 + 1;

    printf("ptr1_newAddr = %p\n"  , ptr1);
    printf("ptr2_newAddr = %p\n\n", ptr2);

    printf("delta_addr(bytes) = %d\n"  , (unsigned int) ptr1 - ptr1_oldAddr);
    printf("delta_addr(bytes) = %d\n\n", (unsigned int) ptr2 - ptr2_oldAddr);

    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %c\n", *ptr2);
    
    return 0;
}
