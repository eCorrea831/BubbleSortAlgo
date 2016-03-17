//
//  main.c
//  16 - C
//
//  Created by Erica Correa on 2/3/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int array[] = {4, 9, 2, 3, 7, 1, 6, 8, 5};
    
    int num_integers = sizeof(array) / sizeof(array[0]);
    
    int temp;
    
    for (int step = 0; step < num_integers - 1; step++) {
        for (int i = 0; i < num_integers - step - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    
    printf("In ascending order: ");
    
    for(int i = 0; i < num_integers; i++) {
        printf("%d ",array[i]);
    }
    
    printf("\n");
    
    return 0;
}
