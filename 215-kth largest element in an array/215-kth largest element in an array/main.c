//
//  main.c
//  215-kth largest element in an array
//
//  Created by 西河 on 2018/11/23.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>

int partition(int* nums, int l, int r) {
    int v = nums[l];
    int j = l;
    
    for ( int i = l + 1; i <= r; i++) {
        if (nums[i] < v) {
            int temp = nums[j+1];
            nums[j+1] = nums[i];
            nums[i] = temp;
            j++;
        }
    }
    int temp = nums[l];
    nums[l] = nums[j];
    nums[j] = temp;
    return j;
    
}
void quickSort(int *nums, int l, int r) {
    if (l >= r) {
        return;
    }
    int p = partition(nums, l, r);
    quickSort(nums, l, p-1);
    quickSort(nums, p+1, r);
}

int findKthLargest(int* nums, int numsSize, int k) {
    int index = numsSize - k;
    quickSort(nums, 0, numsSize - 1);
    return nums[index];
}


int main(int argc, const char * argv[]) {
    int nums[] = {1,2,3,4,5,6};
    int a = findKthLargest(nums, 6, 1);
    printf("%d\n",a);
    return 0;
}
