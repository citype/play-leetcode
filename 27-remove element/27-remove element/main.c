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
    int i = 0;
    int j = 0;
    while (j < numsSize) {
        if (nums[j] == val) {
            j++;
        } else {
            nums[i++] = nums[j++];
        }
    }
    return i;
}

int main(int argc, const char * argv[]) {
    int nums[] = {0,1,2,2,3,0,4,2};
    int len = removeElement(nums, 8, 2);
    for (int i = 0;i<len;i++) {
        printf("%d\n",nums[i]);
    }
    
    return 0;
}
