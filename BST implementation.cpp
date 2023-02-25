#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
int data;
struct node *left;
struct node *right;

};
struct node *root;

void insert(int value){
struct node *newnode = (struct node*) malloc( sizeof(struct node));
newnode -> data =value;
newnode -> right = NULL;
newnode -> left = NULL;

if (root==NULL){

    root=newnode;
}
else{
    struct node *temp=root;
    while(1){
        if(newnode ->data <= temp ->data){
            if(temp -> left==NULL){
                temp->left =newnode;
                break;
            }
            else{
                temp=temp->left;
            }}else{
                 if(temp -> right==NULL){
                temp->right=newnode;
                break;
            }
            else{
                temp=temp->right;

            }
        }
    }
}
}


void print (node*temp){
{if(temp=NULL)
      return;
        print(temp->left);
        cout<<temp->data<<" ";
        print(temp->right);
    }




}


void display(){
    print(root);
    cout<<endl;


}



int main(){

root=NULL;
insert(50);
insert(40);
insert(15);
insert(34);
display();


return 0;


}
