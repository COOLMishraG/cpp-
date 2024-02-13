//jai shree ram


#include<iostream>
#include<vector>
using namespace std;
bool sort(pair<int , int> p ,  pair<int , int> p1){
    if(p.first>p1.first){
        return 1;
    }
    else return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    
    vector<pair<int , int>> pair_vector;
    for(int i=0 ;i<n ; i++ ){
pair_vector.push_back(make_pair(arr[i] , i));

    }
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++ )
{
    if(sort(pair_vector[i] , pair_vector[i+1])){
        pair<int , int> temo=pair_vector[i];
        pair_vector[i]=pair_vector[i+1];
        pair_vector[i+1]=temo;
        
    }
}}
for(int i=0 ; i<n ; i++){
    pair_vector[i].first=i;
}
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==pair_vector[j].second){
                arr[i]=pair_vector[j].first;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
return 0;
}