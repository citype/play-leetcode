//
//  main.c
//  345-reverse vowels of a string
//
//  Created by 西河 on 2018/11/30.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
/**
 a e i o u

 */

char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        while(s[left] !='a' && s[left] !='e'&& s[left] !='i'&& s[left] !='o' && s[left] !='u' && s[left] !='A' && s[left] !='E'&& s[left] !='I'&& s[left] !='O'&& s[left] !='U' && left<right) {
            left++;
        }
        while(s[right] !='a' && s[right] !='e'&& s[right] !='i'&& s[right] !='o' && s[right] !='u' && s[right] !='A'&& s[right] !='E'&& s[right] !='I'&& s[right] !='O'&& s[right] !='U' && right>left) {
            right--;
        }
        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
        }
        left++;
        right--;
    }
    return s;
}



int main(int argc, const char * argv[]) {
    char s[] = "leetcode";
    char *s1;
    s1 = (char *)malloc(sizeof(char) * strlen(s));
    s1 = reverseVowels(s);
    
    return 0;
}
