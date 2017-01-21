/*
* @Author: Suphaanan Mujarin
* @580510640
*/

#include <iostream>

using namespace std;

template<class TYPE,int N>
class Queue
{
private: 
    int count;
    int front;
    int rear;
    TYPE item[];

public:
    Queue(){
        front=0;
        rear =0;
        count =0;
    }
    int isEmpty(){
        if(count == 0){
            return 0;
        }
        return 1;
    }

    int isFull(){
        if(count<=N){
            return 1;
        }
        return 0;
    }

    void enqueue(q_++){

        if(rear<N-1){
            rear+=1;
            count+=1;
            cout<<"OK";
        }
        else{
            cout<<"Queue is full";  
        }
    }

    void dequeue(){
        if(!q_.isEmpty()){
            QueueFront=item[front];
            front+=1;
            count-=1;
        }
        else{
            cout<<"Queue is empty";   
        }
    }
    void show(){
        for(int i=0;i<count;i++){
            cout<<item[(front+i)%N];
        }
    }
    void setData(){
        cout<<"Input data:";cin>>q_;
    }

};

void printMenu(){
    cout<<"\n1) enqueue";
    cout<<"\n2) dequeue";
    cout<<"\n3) show";
    cout<<"\n4) exit";
}


int main(){
    char key;
    cout<<"Input type of data int or char(i/c):";
    cin>>key;
    int choice=0;
    //int N=0;
    Queue <int,3> q;
    if(key == 'i'){
        //N = 3;
        Queue <int,3> q;
        do{
        printMenu();
        cin>>choice;
        if(choice == 1){
            q.enqueue();
            q.setData();
        }
        if(choice == 2){
            q.dequeue();
        }
        if(choice == 3){
            q.show();
        }
    }while(choice != 4);

    }
    else{
        //N = 5;
        Queue <int,5> q;
        do{
        printMenu();
        cin>>choice;
        if(choice == 1){
            q.enqueue();
            q.setData();
        }
        if(choice == 2){
            q.dequeue();
        }
        if(choice == 3){
            q.show();
        }
    }while(choice != 4);

    }
    
    return 0;
}