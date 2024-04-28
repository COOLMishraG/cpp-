#include<iostream>
#include<vector>
using namespace std;
void swap(int *n , int *n1){
    int temp=*n;
    *n=*n1;
    *n1=temp;
}
void wave_sort(vector<int> &vec , int n){
    for (int i = 0 ; i<n-1 ; i+2){
        if(vec[i]>vec[i-1] && i>0){
            swap(&vec[i] , &vec[i-1]);
        }
        if(vec[i]>vec[i+1] && i<n-1){
            swap(&vec[i] , &vec[i+1]);
        }
        
    }
}
int main(){
    cout<<"enter the size of array";
    int n;      
    cin>>n;
 
    vector<int> vec;
    for(int i= 0; i<n ; i++){
        int element ;
        cin>>element;
        vec.push_back(element);
    }
wave_sort(vec , n);
for(int i=0 ; i<n ; i++){
    cout<<vec[i];
}
return 0;
}