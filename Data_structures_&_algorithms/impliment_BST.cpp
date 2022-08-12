#include<iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val){
		data = val;
        left = NULL;
		right = NULL;
	}
};
// 	TreeNode* root = new Node(1);
	
//  Treeroot->left = new TreeNode(2);
// 	Treeroot->right = new TreeNode(3);
// 	Treeroot->left->left = new TreeNode(4);

class BST{
    TreeNode *root;
    public:
    BST(){
        root = NULL;
    }

    ~BST(){
        root = NULL;
    }
    void deleteData(int data){

    }
    void insertData(int data){
        
    }
    private:
    bool hasData(int data ,TreeNode root){
        if(root == NULL) return false;
        if(root == root) return true;
        else if(data < root->data){
            return hasData(data,root->left);
        }
        else if(data > node->data){
            return hasData(data,root->right);
        }
    }
    public:
    bool hasData(int data){
        return hasData(data,root);
    }

};
int main(){
    cout<<"hello world";
    BST * root = new BST(10);
    BST * leftnode = new BST(5);
    BST * rightnode = new BST(4);

    root->left = leftnode;
    root->right = rightnode;
    bool ans = root.hasData(10);
    return 0;
}