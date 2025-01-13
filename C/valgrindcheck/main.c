// check if valgrind detects when floating memory chunks lose their pointer reference
// in other words, check if it can detect that we've reassigned a pointer that was 
// pointing to an allocated region of memory

// Conclusion: yes, it detects it! 
/*
 liam-skirrow:~/Documents/code/cpp-tutorials/C/valgrindcheck$ valgrind ./a.out 
==205665== Memcheck, a memory error detector
==205665== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==205665== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==205665== Command: ./a.out
==205665== 
*ptr = 6
==205665== 
==205665== HEAP SUMMARY:
==205665==     in use at exit: 4 bytes in 1 blocks
==205665==   total heap usage: 2 allocs, 1 frees, 1,028 bytes allocated
==205665== 
==205665== LEAK SUMMARY:
==205665==    definitely lost: 4 bytes in 1 blocks
==205665==    indirectly lost: 0 bytes in 0 blocks
==205665==      possibly lost: 0 bytes in 0 blocks
==205665==    still reachable: 0 bytes in 0 blocks
==205665==         suppressed: 0 bytes in 0 blocks
==205665== Rerun with --leak-check=full to see details of leaked memory
==205665== 
==205665== For lists of detected and suppressed errors, rerun with: -s
==205665== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
 */
 
#include <stdio.h>
#include <malloc.h>

int main(int argc, char **argv){
    
    int var = 6;
    int *ptr = malloc(sizeof(int));
    // now reassign ptr without freeing the malloc'ed int
    ptr = &var;

    printf("*ptr = %d\n", *ptr);

    return 0;
}
