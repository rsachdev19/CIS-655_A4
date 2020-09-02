//
//  main.c
//  bubble_sort
//
//  Created by Hancock, Brandon (E) on 9/2/20.
//  Copyright © 2020 Hancock, Brandon (E). All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i -1; j ++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void print_result(int arr[], int size) {
    for (int i = 0; i < size; i ++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int counter = 0;
    
    do {
        int random_array[20], i;
        for(i = 0; i < 20; i ++) {
            random_array[i] = rand() % 100;
        }
        
        bubble_sort(random_array, 20);
        print_result(random_array, 20);
        
        counter ++;
    } while(counter != 10);
    return 0;
}
