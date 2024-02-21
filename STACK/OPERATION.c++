#include<iostream>
#include<stack>
using namespace std;
void reverse(string s){
    stack<string> st;
    
    for(int i=0 ; i<s.length() ; i++){
        string word="";
        while(s[i]!=' '){
            word+=s[i];
            i++;            // remember
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string s="hello i am anuj mishra";
    reverse(s);
    return 0;
}
