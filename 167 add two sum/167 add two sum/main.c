//
//  main.cpp
//  167 add two sum
//
//  Created by 西河 on 2019/1/12.
//  Copyright © 2019 xihe. All rights reserved.
//

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int p=0,q=0;
    
    while(p<numsSize)
    {
        //找非零
        while(nums[p])
        {
            p++;
        }
        //找零的位置
        while(nums[q]==0)
        {
            q++;
        }
        //交换
        if(p>q)
        {
            nums[q]=nums[p];
            nums[p]=0;
        }
    }
}

int main() {
    int nums[] = {0,1,0,3,12};
    moveZeroes(nums, 5);
    return 0;
}
