#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node*next;
    Node(int data ){
        info=data;
        next==NULL;
    }
};
Node *front ,*rear;
bool isEmpty(){
    if(front==NULL)
        return 1;
    }
void traverse(){
    if(front==NULL){
        cout<<"Empty Queue";
        return;
    }
    Node*temp=front;
    while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void enqueue(int info){
    Node*newNode=new Node(info);
    if(front==NULL){
        front=newNode;
        rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
int  dequeue(){
    int info;
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
        return -1;

    }
    info=front->info;
    Node *temp=front;
    if(front==rear){
        front=front->next;
        delete temp;
        return info;

    }

}
int main(){
    front=rear=NULL;
    if(isEmpty()){
        cout<<"Queue id initially empty"<<endl;
        enqueue(5);
        enqueue(10);
        enqueue(15);
        cout<<"Queue elements :";
        traverse();
        cout<<"dequeued:"<<dequeue()<<endl;
        cout<<"queue after dequeue:";
        traverse();
        return 0;
    }
}
