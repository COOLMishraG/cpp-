#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> getNetSmaller(const vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            if(st.empty()){
                st.push(nums[i]);
                ans.push_back(nums[i]);
                continue;
            }
            while(!st.empty() && st.top()>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                st.push(-1);
            }
            ans.push_back(st.top());
            st.push(nums[i]);
        }
      for(int i=0 ; i<nums.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return ans;
}

int main() {
    vector<int> nums = {3, 1, 7, 4, 5, 9, 2};
    vector<int> temp=getNetSmaller(nums);
    vector<int> result;
    for(int i=0 ; i<nums.size() ; i++){
        cout<<temp[i];
    }
    for(int i=0 ; i<temp.size() ; i++){
        int k=temp[temp.size()-1-i];
        result.push_back(k);
    }
   
     for(int i=0 ; i<nums.size() ; i++){
        cout<<result[i]<<" ";
    } 
    
    
    return 0;
}