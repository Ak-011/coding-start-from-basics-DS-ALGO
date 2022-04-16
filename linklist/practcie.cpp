#include<iostream>
#include<string.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor call
    Node(int data){
        this-> data = data;
        this-> next = NULL; 

    }

    //destructor
    ~Node(){
        int value = this-> data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
       // cout<< "Memory is free for node with data " <<value<<endl;
    } 
};


void insertAtHead(Node* &head , int d){
    //new node creation

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

    
}


void insertAtTail(Node* &tail, int d){
    //new node creation

    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp; 

}




void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head , d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count <position-1){
        temp = temp->next;
        count++;
    }
    if(temp ->next == NULL){
        insertAtTail(tail , d);
        return ;
    }
     
    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp ->next;
    temp ->next= nodeToInsert;
     


 }
 void insertNode(Node* &tail, int element, int d){
    //assuming that the element is present in the list

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list
        // assuming element is present in the list

        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //element is found
        Node* temp = new Node(d);
        temp -> next = curr->next;
        curr->next = temp;

    }
}


Node* deleteNode1(Node* head, int key){
    if(head->next == head && head->data == key)
    {
        delete head;
    }
    Node* curr = head->next;
    Node* prev = head;
    while(curr != head){
        if(curr->data == key){
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next =NULL;
    delete curr;
}
void print(Node* tail){
    Node* temp = tail;
    if (tail == NULL){
        cout<<"List is empty"<<endl;
        return;
}
   do{
       cout<<tail->data<<" ";
       tail = tail->next;
   }while(tail!= temp);
    cout<<endl;
}

int main(){
   Node* tail = NULL;
   Node* head = NULL;
        
    insertNode(tail, 5, 3);    
    print(tail);
    
    insertNode(tail, 3, 5 );    
    print(tail);
    insertNode(tail, 5, 7 );    
    print(tail);
    insertNode(tail, 7, 9 );    
    print(tail);
    insertNode(tail, 5, 6 );    
    print(tail);
    insertNode(tail, 9, 10 );    
    print(tail);
    insertNode(tail, 3, 1 );    
    print(tail);


   
        deleteNode1(head, 7);
        print(head);
        

   
   
    return 0;
}