#include<iostream>
using namespace std;

class Queue{

        int *arr;
        int size;
        int front ;
        int rear;
     public:

     Queue(){
         size = 1000001;
         arr = new int[size];
         front =0;
         rear=0;
     }

     /**********************/
     bool isEmpty(){
         if(front == rear){
             return true;
         }
     }

     void enqueue(int data){
          if(rear == size){
              cout<<"queue is full"
          }else{
              arr[rear] = data;
              rear++;
          }

     }
     int dequeue(){
        if(front == rear){
            return -1;
        } else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front =0; 
                rear =0;
            }
            return ans;
        }
     }

     int front(){
         if(front == rear){
             return -1;
         }else{
           return  arr[front];
         }
     }
     bool isEmpty(){
         if(front == rear){
             return true;
         }else{
             return false;
         }
     }

};
int main(){

    return 0;
}