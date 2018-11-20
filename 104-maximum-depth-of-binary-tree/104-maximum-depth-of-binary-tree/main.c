//
//  main.c
//  104-maximum-depth-of-binary-tree
//
//  Created by 西河 on 2018/11/20.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>

struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
};
 
int maxDepth(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return left > right ? left+1:right+1;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
