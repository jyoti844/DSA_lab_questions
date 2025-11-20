#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
class Traversal{
    public:
    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void preorder(Node* root){
        if(root==NULL) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}; 
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    Traversal t;
    cout<<"Inorder Traversal: ";
    t.inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal: ";
    t.preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal: ";
    t.postorder(root);
    cout<<endl;

    return 0;
}
