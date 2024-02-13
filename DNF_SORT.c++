#include<iostream>
#include<vector>
using namespace std;
void swap(int *n , int *n1){
    int temp=*n;
    n=n1;
    *n1=temp;

}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> arr;

    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    int low=0;
    int mid=0;
    int high=arr.size()-1;
    while(mid<high){
        if(arr[mid]==0){
                swap(arr[low] , arr[mid]);
                low++;
                mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid]  ,arr[high]);
            high--;
        }
    }
for(int i=0 ; i<n ; i++){
    cout<<arr[i];
}
    return 0;
}