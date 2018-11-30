//
//  main.c
//  125-valid palindrome
//
//  Created by 西河 on 2018/11/30.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
typedef int bool;
#define false -1
#define true 1

bool isPalindrome(char* s) {
    int len = sizeof(s) / sizeof(char);
    printf("%s\n%d\n",s,len);
    return false;
}

int main(int argc, const char * argv[]) {
    char a[] = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(a);
    
    return 0;
}
