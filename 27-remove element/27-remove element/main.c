//
//  main.c
//  27-remove element
//
//  Created by 西河 on 2018/11/28.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    int len = 0;
    int *nums_copy;
    nums_copy = (int *)malloc(numsSize * sizeof(int));
    
    for (int i =0;i<numsSize;i++) {
        if (val == nums[i]) {
            len ++ ;
            continue;
        }
        nums_copy[count] = nums[i];
        count++;
    }

    for(int j = 0;j<count; j++) {
        nums[j] = nums_copy[j];
    }
    return count;
}

int main(int argc, const char * argv[]) {
    int nums[] = {0,1,2,2,3,0,4,2};
    int len = removeElement(nums, 8, 2);
    for (int i = 0;i<len;i++) {
        printf("%d\n",nums[i]);
    }
    
    return 0;
}
