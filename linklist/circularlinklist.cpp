#include<iostream>
#include<string.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;

    }

        ~Node(){
        int value =  this->data ;
        if(this->data != NULL){
            delete next;
            this->next = NULL;
        }
    }

};

void insertNode(Node* &head, int element, int d){
    //assuming that the element is present in the list

    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list
        // assuming element is present in the list

        Node* curr = head;
        while(curr->data != element){
            curr = curr->next;
        }
        //element is found
        Node* temp = new Node(d);
        temp -> next = curr->next;
        curr->next = temp;

    }
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

/* void deleteNode(Node* &head, int value ){
    //empty list
    if (head  == NULL)
    {
       // cout<<"the list is empty";
        return;
    }
    else{
        //non empty
        // assuming that value is present in the linked list 
        Node* prev = head;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //one node link list
        if(curr==prev){
            head =NULL;
        }
        //if more than 2 node is present
        // if(tail==curr){
        //     tail = prev;
        // }
        curr->next = NULL;
        delete curr;

    }
    

}
*/

Node* deleteNode(Node* head, int key) 
{	
    if(head == NULL){
        
    }
    if(head->data == key && head->next == head){
        delete head;
        
    }
    Node* last = head;
    Node* d = NULL;
    if(head->data == key){
        while(last != head){
            last = last->next;
        }
        last ->next = head->next;
        delete head;
        head = last ->next;
        
       }
    	while(last->next != head && last->next->data != key){
            last = last ->next;
        }
    	
    	if(last->next->data == key){
            d = last->next;
            last->next = d->next;
            delete d;
        }
 
   
}
/*
Node* deleteNode(Node* tail, int key) 
{	 if (tail  == NULL)
    {
       delete tail;
    }
 if(tail->next == tail && tail->data == key){
     delete tail;
 }
    
       
        Node* curr = tail->next;
        while(curr != tail){
            tail = tail->next;
            curr = curr->next;
            if(curr->data == key ){
                break;
            }
            
        }
 		tail->next = curr->next;
        curr->next = NULL;
 		delete curr;
}*/

int main(){

    Node* head = NULL;

    insertNode(head, 5, 3);    
    print(head);
    
    insertNode(head, 3, 5 );    
    print(head);
    insertNode(head, 5, 7 );    
    print(head);
    insertNode(head, 7, 9 );    
    print(head);
    insertNode(head, 5, 6 );    
    print(head);
    insertNode(head, 9, 10 );    
    print(head);
    insertNode(head, 3, 1 );    
    print(head);


    deleteNode(head , 10 );
    print(head);




    return 0;
}