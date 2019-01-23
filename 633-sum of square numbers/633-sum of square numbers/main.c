//
//  main.c
//  633-sum of square numbers
//
//  Created by 西河 on 2019/1/23.
//  Copyright © 2019 xihe. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define True 1
#define False 0
typedef int bool;

bool judgeSquareSum(int c) {
    int i = 0;
    int j = sqrt(c);
    while (i <= j) {
        int pow = j * j + i * i;
        if (pow == c) {
            return True;
        } else if (pow > c) {
            j--;
        } else {
            i++;
            
        }
    }
    return False;
}

int main () {
    int a = judgeSquareSum(1000);
    printf("%d",a);
    return 0;
}
