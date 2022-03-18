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
        cout<< "Memory is free for node with data " <<value<<endl;
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

void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp ->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

void deleteNode(int position, Node* &head){
    //deleting first or start node
     if(position == 1){
         Node* temp = head;
         cout<<head<<endl;
        head  = head ->next;
        //memory free start node
        delete temp;


     }
     else{
           Node* curr = head;
           Node* prev = NULL;

           int cnt =1;
           while(cnt <= position){ 
                prev = curr;
                curr = curr->next;
                cnt++;
           }

           prev->next = curr->next;
           delete curr;

         // any node other then fisrt node
     }
}

int main(){

    //created new node
        Node* node1 = new Node(10);
      //  cout<<node1 ->data<<endl;
      //  cout<<node1 ->next<<endl;

        //head pointed to node1

        Node* head = node1;

        //tail point to node1

        Node* tail = node1;
        print(head);
        insertAtTail(tail , 12);
        print(head);
        insertAtTail(tail , 15);
        print(head);

        insertAtPosition(tail ,head , 4, 17);
        print(head);
        insertAtPosition(tail , head , 5, 22);
        print(head);

        cout<<"Head "<< head ->data<<endl;
        cout<<"Tail "<< tail ->data<<endl;
     
        deleteNode(3 , head);
        
        cout<<"Head "<< head ->data<<endl;
        cout<<"Tail "<< tail ->data<<endl;
        
    return 0;
}