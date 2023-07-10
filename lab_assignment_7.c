// Kieran Herron
// COP 3502 - 013
// Lab Assignment # 7

#include <stdio.h.>
#include <stdlib.h>

int sortCounter(array[]);


int main() {
    int finalCount;
    // Rubricdoes not demand that we need to take input from some source
    // As such, "hardcoding" the array is done
    int providedArray[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    finalCount = sortCounter(providedArray);
    
    printf("Number of swaps: ");
    printf("%d", finalCount);
}

int sortCounter(int array[]) {
    // what this function actually does is complete the bubble sort
    // returns how many times it swapped
    int count = 0;
    int temp;
 
    int size = (sizeof(array) / sizeof(int));

    while() {
        int i = 0;
        for(i = 0; i < size; i++) {
            if(array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp
                count++;                
            }
        }
        int j = 0;
        for(i = 0; i < size; i++) {
            if(array[i] > array[i+1]) {
                j++;
                continue;
            }
        }
        if(j != 0) {
            continue;
        }
        break;
    }
    return(count);
}