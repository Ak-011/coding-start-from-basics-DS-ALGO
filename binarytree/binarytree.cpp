#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* binaryTree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to be include in left part"<<data<<endl;
    root->left = binaryTree(root->left);
    cout<<"Enter the data to be included in right part"<<data<<endl;
    root->right = binaryTree(root->right);

    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    int cnt = 1;
    q.push(root);
    q.push(NULL);


    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
                cnt++;
            }
        }
        else{
            cout<<temp->data<<" ";
        

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        

    }
    cout<<cnt<<endl;
}

void inOrder(node* root){
    if(root == NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void rightView(node* root){
    if(root == NULL){
        return ;
    }
    rightView(root->right);
    cout<<root->data<<" ";
}

void preOrder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root = NULL;
    root = binaryTree(root);

    // 1 3  7 -1 -1 11 -1 -1 5 17 -1 -1 18 19 -1 -1 -1
    levelOrderTraversal(root);
    // inOrder(root);
    cout<<endl;
    // rightView(root);
    // cout<<endl;
    // postOrder(root);
    return 0;
    
}
