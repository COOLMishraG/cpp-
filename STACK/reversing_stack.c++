#include<iostream>
#include<stack>
using namespace std;

void insert_at_bottom(stack<int> &st2 ,int ele){
    if(st2.empty()){
        st2.push(ele);
        return;
    }
    int topele=st2.top();
    st2.pop();
    insert_at_bottom(st2 , ele);
    st2.push(topele);
}

void reverse(stack<int> &st1){
    if(st1.empty()){
        return;
    }
    int ele=st1.top();
    st1.pop();
    reverse(st1);
    insert_at_bottom(st1 , ele);
}
int main(){
    stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);

    reverse(st1);
    cout<<st1.top();
        return 0;

}