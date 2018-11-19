//
//  main.c
//  283-Move Zeroes
//
//  Created by Xihe on 2018/11/19.
//  Copyright © 2018 Xihe. All rights reserved.
//

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int j=0;
    for(int i=0;i<numsSize;i++) {
        if (*(nums+i) !=0) {
            printf("%d\n",*(nums+i));
            *(nums+j) = *(nums+i);
            j++;
        }
    }
    for(int k=j;k<numsSize;k++) {
        *(nums+k) = 0;
    }
}

int main(int argc, const char * argv[]) {
    int arr[8] = {11,0,12,5,6,0,0,0};
    moveZeroes(arr, 8);
    return 0;
}
