// Exercise from K.N. King's C book
// Section 11.4, pg 249

#include <stdio.h>

#define MAX_NUM_INPUTS 10

void max_min(int *buf, int n, int *max, int *min);

int main(int argc, char **argv){

    int buf[MAX_NUM_INPUTS];
    int max, min;

    // read in 10 numbers
    for(int i = 0; i < MAX_NUM_INPUTS; i++){
        scanf("Enter a number: %d", &buf[i]);
    }

    for(int i = 0; i < MAX_NUM_INPUTS; i++){
        printf("Index %d of buf: %d\n", i, buf[i]);
    }

    max_min(buf, MAX_NUM_INPUTS, &max, &min);

    return 0;
}

void max_min(int *buf, int n, int *max, int *min){

    if(n > 0){
        // initialise both max and min to the first value
        *max = *min = buf[0];
        for(int i = 1; i < n; i++){
            if(buf[i] < *min)
                *min = buf[i];
            else if(buf[i] > *max)
                *max = buf[i];
        }
    }
    // NULL causes a warning to come up, just use zero instead I guess :(
    else{
        *max = *min = 0;
    }
}