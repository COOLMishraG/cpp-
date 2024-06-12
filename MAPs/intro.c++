#include<iostream>
#include<unordered_map>
using namespace std;
void Print_Map(unordered_map<string , int> m1){
    unordered_map<string , int> :: iterator it=m1.begin();
    while(it!=m1.end()){
        cout<<it->first << "->" << it->second;
        cout<<endl;
        it++;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    unordered_map<string , int> m1;
    for(int i=0 ; i<n ; i++){
        string temp;
        cin>>temp;
        int temp1;
        cin>>temp1;
        pair<string , int> p1=make_pair(temp , temp1);
        m1.insert(p1);
    }
    Print_Map(m1);
    return 0;
}
