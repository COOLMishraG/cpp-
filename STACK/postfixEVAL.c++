#include<iostream>
#include<stack>
using namespace std;


int postfix(string s){
    stack<int> st;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>='1' && s[i]<='9'){
            st.push(s[i]-'0');
        }else {
            int ope1=st.top();
            st.pop();
            int ope2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(ope1+ope2);
                break;
            case '-':
                st.push(ope2-ope1);
                break;
            case '*':
                st.push(ope1*ope2);
                break;
            case '/':
                st.push(ope2/ope1);
                break;
            default:
                break;
            }
        }
    }
return st.top();
}

int main(){
    cout<<postfix("46+2/5*7+");
    return 0;
}