#include <bits/stdc++.h>
#include <iostream>
#include "tree.h"

using namespace std;

TreeNode<int>* takeInput(){
    int rootData = 0;
    cout<<"enterData"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n=0;
    cout<<"enter num of children of " << rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        (root->children).push_back(child);
     }
    return root;
}

void printTree(TreeNode<int>* root){
    if(root==nullptr) return;//edge case
    cout << root->data << ":";
    for(int i=0;i<root->children.size();i++)
        cout<<root->children[i]->data<<",";
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
int main(){
//    TreeNode<int>* root = new TreeNode<int>(1);
//    TreeNode<int>* node1 = new TreeNode<int>(2);
//    TreeNode<int>* node2 = new TreeNode<int>(3);
//    root -> children.push_back(node1);
//    root -> children.push_back(node2);
    TreeNode<int>* root = takeInput();
    printTree(root);
    //TODO delete the tree;

}