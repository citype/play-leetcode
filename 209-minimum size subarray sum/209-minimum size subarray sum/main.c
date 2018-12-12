//
//  main.c
//  209-minimum size subarray sum
//
//  Created by 西河 on 2018/12/5.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/*
 [2,3,1,2,4,3]
 s = 7
 */

int minSubArrayLen(int s, int* nums, int numsSize) {
    int r = 0;
    int l = -1;
    int sum = 0;
    int minLen = numsSize + 1;
    while (l<r) {
        if (sum < s) {
            sum +=nums[r++];
        } else {
            minLen = minLen < (r-l+1) ? minLen : (r-l+1);
            
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
