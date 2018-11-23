//
//  main.c
//  sort method
//
//  Created by 西河 on 2018/11/23.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>

//插入排序
void insertionSorted (int *nums, int numsize) {
    for (int i =0;i<numsize; i++) {
        for (int j = i -1; j>0; j--) {
            if (nums[j] < nums[j-1]) {
                int temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
            }
        }
    }
}

void insertion_sorted (int *nums, int numSize) {
    int j;
    for (int i = 1; i<numSize; i++) {
        int e = nums[i];
        for (j = i; j>0 && nums[j-1] > e; j--) {
            nums[j] = nums[j-1];
        }
        nums[j] = e;
    }
}

int main(int argc, const char * argv[]) {
    int nums[5] = {8,7,9,2,3};
    insertion_sorted(nums, 5);
    return 0;
}
