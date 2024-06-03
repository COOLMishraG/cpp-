#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
#define ff first
#define ss second 
int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    map<int , int> m1;
    vector<int> :: iterator it;
    for(it = a.begin() ; it!=a.end() ; it++){
        m1[*it]++;
    }
    for(auto i:m1){
        cout<<i.ff<<i.ss<<endl;
    }
    return 0;
}
