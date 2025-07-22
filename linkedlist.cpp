#include <iostream>
using namespace  std;
struct node {
    int data;
    node * next;
};
node * head =NULL;

void insertEnd (int num){
    node * newNode = new node();
    newNode->data = num;
    newNode->next = NULL;
    if(head == NULL){
        head=newNode;
        cout<<num<< " inserted" <<endl;
    }
  else{
    node *temp=head;
    while(temp->next !=NULL){
           temp=temp->next;
    }
    temp->next=newNode;
    cout<<num<<" inserted"<<endl;
}
}
int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
 
    
}
