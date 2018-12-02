//
//  main.c
//  11-container with most water
//
//  Created by 西河 on 2018/12/2.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
int maxArea(int* height, int heightSize) {
    int max_area = 0;
    int area;
    for (int i = 0; i< heightSize; i++) {
        for(int j = i; j< heightSize; j++) {
            if (height[i] > height[j]) {
                area = height[j]*(j-i);
            } else {
                area = height[i] * (j-i);
            }
            if (max_area < area) {
                max_area = area;
            }
        }
    }
    return max_area;
}

int main(int argc, const char * argv[]) {
    int heights[] = {1,8,6,2,5,4,8,3,7};
    int area = maxArea(heights, 9);
    printf("--->%d\n",area);
    return 0;
}
