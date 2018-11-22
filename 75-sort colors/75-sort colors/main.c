//
//  main.c
//  75-sort colors
//
//  Created by 西河 on 2018/11/21.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int zero = -1;
    int two = numsSize;
    int temp;
    
    for (int i =0; i < two; i++) {
        if (*(nums + i) == 1) {
            i ++;
        } else if (*(nums + i) == 2) {
            --two;
            temp = *(nums + i);
            *(nums + i) = *(nums + two);
            *(nums + two) = temp;
        } else { // 0
            ++zero;
            temp = *(nums + i);
            *(nums + i) = *(nums + zero);
            *(nums + zero) = temp;
        }
    }
}


int main(int argc, const char * argv[]) {
    int a[] = {2,0,2,1,1,0};
    sortColors(a, 6);
    return 0;
}
