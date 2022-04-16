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
// Node* reverseLinked(Node* head){

    
    // Node* curr = head;
    // Node* prev = NULL;
    // Node* forward = NULL;
    // while(curr != NULL){
    //     forward = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr  = forward;
    // }
    // return prev;

// }
Node* reverse(Node* head){
        Node* prev = NULL, *next = NULL, *current = head;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }


Node* addOne(Node* head){
    Node* kuchalag = reverse(head);
    Node* curr= kuchalag;
    Node *curr1 = kuchalag;
    Node *prev = NULL;

    int carry =0;
    while(curr != NULL){
        int sum = 0;
        if(prev == NULL){
            sum = curr->data+1;
        }else{
            sum = curr->data+carry;
        }
        carry = sum/10;
        curr->data = sum%10;
        prev = curr;
        curr = curr->next;
    }
    if(carry != 1){
        Node* jodo = new Node(carry);
        prev->next = jodo;
    }
       return (curr1);


}
// alternate method by recursion
//****************
/*Node* reverseLinkList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* dusraHead = reverseLinkList(head->next);
    head ->next->next = head;
    head->next = NULL;
    return dusraHead;
}
*/
//  Node* addOne(Node *head) 
//     {   


void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp ->data;
            temp = temp->next;
        }
        cout<<endl;
}

void deleteNode(int position, Node* &head , Node* &tail){
    //deleting first or start node
     if(position == 1){
         Node* temp = head;
        head  = head ->next;
        //memory free start node
        temp ->next = NULL;
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

    //created new node
        Node* node1 = new Node(22);
      //  cout<<node1 ->data<<endl;
      //  cout<<node1 ->next<<endl;

        //head pointed to node1

         Node* head = node1;

        // //tail point to node1

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
        Node* newhead = reverseLinked(head);

        print(newhead);

          Node* opss = addOne(head);
          print(opss);


    //    reverseLinkList(head);
    //    print(head); 
        // deleteNode(5 , head, tail);
        // print(head);
        
   
    return 0;
}