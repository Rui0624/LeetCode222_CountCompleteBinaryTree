//
//  main.cpp
//  LeetCode222_CountCompleteFreeNodes
//
//  Created by Rui on 1/31/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int countNodes(TreeNode* root) {
        int hLeft = 0, hRight = 0;
        TreeNode *pLeft = root, *pRight = root;
        while(pLeft)
        {
            hLeft++;
            pLeft = pLeft->left;
        }
        
        while(pRight)
        {
            hRight++;
            pRight = pRight->right;
        }
        if(hLeft == hRight)
            return pow(2, hLeft) - 1;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
