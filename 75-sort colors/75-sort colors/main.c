//
//  main.c
//  75-sort colors
//
//  Created by 西河 on 2018/11/21.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int bucket[3] = {0};
    for (int i=0;i<numsSize;i++) {
        bucket[*(nums+i)]++;
    }
    int k=0;
    for (int j=0;j<3;j++) {
        while (bucket[j] > 0) {
            *(nums+k) = j;
            k++;
            bucket[j]--;
        }
    }
    
}
int main(int argc, const char * argv[]) {
    int a[] = {2,0,2,1,1,0};
    sortColors(a, 6);
    return 0;
}
