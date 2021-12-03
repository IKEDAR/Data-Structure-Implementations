#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct BSTNode{
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};
//struct BSTNode* rootptr=NULL;

struct BSTNode* getnewnode(int data){
    struct BSTNode* newNode=(struct BSTNode*)malloc(sizeof(struct BSTNode*));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct BSTNode* Insert(struct BSTNode* root, int data){
    if (root==NULL){
        root=getnewnode(data);
        
    }
    else if (data <= root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
    
 }

bool search(struct BSTNode* root, int data){
    if(root==NULL){
        return false;
    }
    else if (root->data==data){
        return true;
    }
    else if(data<=root->data){
        return search( root->left,data);
    }
    else{
        return search(root->right,data);
    }
}



int main(void) {
    struct BSTNode* root=NULL; //Creating an empty tree
    root=Insert(root,15);
    root=Insert(root,230);
    root=Insert(root,67);
    root=Insert(root,77);
    if (search(root,77)){
        printf("Number is there");
    }
    else{
        printf("Number isn't there");
    }
        
    
	
	return 0;
}

