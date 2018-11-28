//
//  main.c
//  167-two sum II input array is sorted
//
//  Created by 西河 on 2018/11/28.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int *result = (int *) malloc(sizeof(int) * 2);
    for (int i = 0; i < numbersSize; i++) {
        int l = i+1;
        int r = numbersSize - 1;
        
        while (l <= r) {
            int mid = (l+r) / 2;
            if (numbers[mid] == (target - numbers[i])) {
                result[0] = i+1;
                result[1] = mid+1;
                return result;
            }
            if (numbers[mid] <  (target - numbers[i]))
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    
    return result;
}

int main(int argc, const char * argv[]) {
    int returnSize[] = {0,0};
    int nums[] = {2,3,4};
    twoSum(nums, 3, 8, returnSize);
    for (int i = 0; i<2; i++) {
        printf("-->%d\n",returnSize[i]);
    }
    
    return 0;
}
