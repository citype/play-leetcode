//
//  main.c
//  215-kth largest element in an array
//
//  Created by 西河 on 2018/11/23.
//  Copyright © 2018 xihe. All rights reserved.
//

/**
 跟快速排序一个思路。先取一个枢纽值，将数组中小于枢纽值的放在左边，大于枢纽值的放在右边，
 具体方法是用左右两个指针，如果他们小于枢纽值则将他们换到对面，一轮过后记得将枢纽值赋回分界点。
 如果这个分界点是k，说明分界点的数就是第k个数。
 否则，如果分界点大于k，则在左半边做同样的搜索。如果分界点小于k，则在右半边做同样的搜索。
 */

#include <stdio.h>


int quickSort(int* nums, int l, int r) {
    int v = nums[l];
    int i = l + 1;
    int j = r;

    while (i <= j) {
        while (nums[j] > v) {
            j--;
        }
        while (nums[i] < v)
            i++;
        if (i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            
        }
    }
    // 在 j 这个位置，赋值成新的数组 交换 v 所在的位置
    int temp = nums[l];
    nums[l] = nums[j];
    nums[j] = temp;
    return j;
}

int findKthLargest(int* nums, int numsSize, int k) {
    int count = 0;
    int index = numsSize - k;
    int k1 = quickSort(nums, 0, numsSize - 1);
    while (count != numsSize) {
        if (index > k1) {
            // 只要排列 k1 右边
            k1 = quickSort(nums, k1+1, numsSize-1);
            
        } else if(index == k1) {
            
            return nums[k1];
            
        } else {
            k1 = quickSort(nums, 0, k1-1);
        }
        count++;
    }
    return 0;
}



int main(int argc, const char * argv[]) {
    int nums[] = {3,2,1,5,6,4};
    int a = findKthLargest(nums, 6, 2);
    return 0;
}
