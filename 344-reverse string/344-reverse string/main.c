//
//  main.c
//  344-reverse string
//
//  Created by 西河 on 2018/12/3.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>

char* reverseString(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
    
}

int main(int argc, const char * argv[]) {
    char s[] = "hello";
    reverseString(s);
    
    return 0;
}
