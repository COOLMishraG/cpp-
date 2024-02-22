#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int preefix(string s){
    stack<int> st;
    for(int i=s.length()-1 ; i>=0 ; i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else {
            int oper1=st.top();
            st.pop();
            int oper2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(oper1+oper2);
                break;
            case '-':
                st.push(oper1-oper2);
                break;
            case '*':
                st.push(oper1*oper2);
                break;
            case '/':
                st.push(oper1/oper2);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int main(){
    
    cout<<preefix("-+7*45+20");
    return 0;
}