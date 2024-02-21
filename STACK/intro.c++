#include<iostream>
using namespace std;

#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push( int x){
        if(top==n-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"nothing to pop";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"nothing here";
            return -1;
        }
        return arr[top];
    }
    bool empt(){
        return top==-1;
    }
};
int main(){
    stack st;
    st.push(0);
        st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    cout<<st.Top()<<" "<<endl;
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();st.pop();st.pop();st.pop();
    cout<<st.empt();
    return 0;

}