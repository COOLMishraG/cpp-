#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int> n = {1 , 3 , 2 , 4 , 9};
    vector<int> ans;
 
    stack<int> st;
    for(int i=0 ; i<n.size() ; i++){
        if(st.empty()){
            ans.push_back(-1);
            st.push(n[i]);
            continue;
        }
        while(!st.empty() &&st.top()>=n[i]){
            st.pop();
        }
        
        ans.push_back(st.top());
        st.push(n[i]);

    }
    for(int i=0 ; i<n.size() ; i++){
        cout<<n[i]<<"  ";
    }
    cout<<endl;
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}