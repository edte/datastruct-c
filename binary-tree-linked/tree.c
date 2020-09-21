//
// Created by edte on 9/21/20.
//

// binary-tree-linked 的 node
typedef struct TreeNode {
    int data; // 当前 node 的 data
    struct TreeNode *child1, *child2; // 当前 node 的两个 child 的 address
};
