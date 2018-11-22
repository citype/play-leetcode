//
//  main.c
//  88-merge sorted array
//
//  Created by 西河 on 2018/11/22.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int left = 0, right = 0, k = 0;
    int *nums_copy;
//    动态创建数组空间
    nums_copy = (int *)malloc((m+n)*sizeof(int));
    
    for (k=0; k < m+n; k++) {
        if ((*(nums1 + left) < *(nums2 + right) && left < m) || right == n) {
            nums_copy[k] = *(nums1 + left);
            left++;
        } else if ((*(nums1 + left) >= *(nums2 + right) && right < n)|| left == m){
            nums_copy[k] = *(nums2 + right);
            right++;
        }
    }
    
    for (int i = 0;i < m+n;i++) {
        *(nums1 + i) = nums_copy[i];
    }
    
}

int main(int argc, const char * argv[]) {
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};
    merge(nums1, 3, nums2, 3);
    return 0;
}
