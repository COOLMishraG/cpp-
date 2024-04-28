#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    s1.insert(3);
    for(auto i: s1){
        cout<<i<< endl;
    }
    cout<<"done";
    // for(auto i=s1.begin() ; i!=s1.end() ; i++){
    //     cout<<*i<<" ";
    //     cout<<endl;
    // }
    // cout<<"done again";
    s1.erase(2);
    for(auto j : s1)
        cout <<j<< " ";
    return 0;
}