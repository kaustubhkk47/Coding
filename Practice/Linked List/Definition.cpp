#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
};

int length(node * h){
    int count = 0;
    while(h != NULL){
        count++;
        h = h->next;
    }
    return count;
}

void printlist(node* h){
    while(h != NULL){
        cout<<h->data<<" ";
        h = h->next;
    }
}    

void addnode(node **h, int index, int dat){
    if(index < 0 or index > length(*h)){
        return;
    }
    node *newnode = new node;
    newnode->data = dat;
    node *temp1 = *h, *temp2 = NULL;
    for(int i = 0; i<index; i++){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    if(index == 0){
        newnode->next = temp1;    
        *h = newnode;    
    }
    if(index >0 and index<=length(*h)){   
        newnode->next = temp1;    
        temp2->next = newnode;
    }            
}

void delnode(node **h, int index){
    if(index < 0 or index > length(*h)){
        return;
    }
    node *temp1 = *h, *temp2 = NULL;
    for(int i = 0; i<index; i++){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    if(index == 0){
        *h = temp1->next;
        delete temp1;
    }    
    else if(index >0 and index<=length(*h)){   
        temp2->next = temp1->next;    
        delete temp1;
    }                
}            

node* copylist(node* h){
    while(h != NULL){
        node *copy = new node;
        copy->data = h->data;
        copyh->next = copy;
        h = h->next;
    }    
}
    
int main(){
    node *head, *first, *second, *third = NULL;
    
    head = new node;
    first = new node;
    second = new node;
    third = NULL;
    
    head->data = 1;
    first->data = 2;
    second->data = 3;
    
    head->next = first;
    first->next = second;
    second->next = third;
    
    printlist(head);
    cout<<endl<<"length = "<<length(head)<<endl;
    
    addnode(&head, 3, 4);
    printlist(head);
    cout<<endl<<"length = "<<length(head)<<endl;
    
    delnode(&head, 3);
    printlist(head);
    cout<<endl<<"length = "<<length(head)<<endl;
    
    for(int i = 3; i<10; i++){
        addnode(&head, i, i+1);
    }    
    printlist(head);
    cout<<endl<<"length = "<<length(head)<<endl;
    
    node *copied = copylist(copy, head);
    printlist(copied);
    cout<<endl<<"length = "<<length(copied)<<endl;
    
    system("pause");    
    return 0;
}        
