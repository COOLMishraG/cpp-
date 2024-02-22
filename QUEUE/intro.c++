#include<iostream>
using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[20];
        front =-1;
        back=-1;
    }
    void push(int val){
        if(back==-1 && front!=-1)
        {cout<<"not enough space";}
        back++;
        arr[back]=val;
        if(front==-1){
            front++;
        }}
    void pop(){
        if(front==-1 || back<front){
            cout<<"nothing here";
        }
        front++;
    }
    int peek(){
        if(front==-1 || back<front){
            cout<<"nothing here";
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 && back==-1){
            return true;
        }
        else return false;
    }

};
int main(){
    queue qu1;
    qu1.push(0);
        qu1.push(1);

    qu1.push(2);

    qu1.push(3);
    qu1.push(4);
    cout<<qu1.peek()<<endl;
    qu1.pop();
    qu1.pop();
    cout<<qu1.peek()<<endl;
    return 0;
}