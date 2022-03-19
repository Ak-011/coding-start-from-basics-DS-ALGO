#include<iostream>
#include<string.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next ;
            next = NULL; 
        }
    }

};

//traversing
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


//getting length
int getLength(Node* head){
    int len = 0;
  Node* temp = head;
    while(temp!= NULL){
        len++;
        temp = temp->next;
    }
    return len;

}

void insertAtHead(Node* &tail, Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail =temp;

    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
     
}

void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(d);
        tail ->next = temp;
        temp ->prev = tail;
        tail = temp;
    }
}

void nodeToPosition(Node* &tail, Node* &head, int position, int d){
     if(position == 1){
        insertAtHead(tail , head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count <position-1){
        temp = temp->next;
        count++;
    }
    if(temp ->next == NULL){
        insertAtTail(tail, head, d);
        return ;
    }
     
    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp ->next;
    temp->next->prev = nodeToInsert;
    temp->next= nodeToInsert; 
    nodeToInsert->prev = temp;     

} 
void deleteNode(int position, Node* &head , Node* &tail){
    //deleting first or start node
     if(position == 1){
         Node* temp = head;
         temp-> next-> prev = NULL;
         head = temp->next;
         temp->next = NULL;
        delete temp;
    }
     else{
           Node* curr = head;
           Node* prev = NULL;

           int cnt =1;
           while(cnt < position){ 
                prev = curr;
                curr = curr->next;
                cnt++;
           }
           curr->prev = NULL;
           prev->next = curr->next;
           curr->next = NULL;
           delete curr;

           if(prev->next == NULL){
               tail = prev;
           }

      
    

         // any node other then fisrt node
     }
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    print(head);
   // cout<<getLength(head)<<endl;

    insertAtHead(tail, head , 11);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAtHead(tail, head , 13);
    print(head);
     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    insertAtHead(tail, head , 8);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    insertAtTail(tail, head, 78);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    nodeToPosition(tail , head, 2 , 101);
    print(head);
     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    nodeToPosition(tail , head, 3  , 32);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
   deleteNode(6 , head, tail);
   print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    return 0;
}
