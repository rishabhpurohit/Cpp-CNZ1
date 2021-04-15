//
// Created by Purohit on 15-04-2021.
//
#include <vector>
using namespace std;

template <typename T>
#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H


class TreeNode {
public:
    T data;
    vector< TreeNode<T>* >children;

    TreeNode(T data){
        this->data = data;
    }


};
#endif //UNTITLED_TREE_H
