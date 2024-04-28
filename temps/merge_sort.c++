//jai shri radha krishn

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr , int low , int mid , int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
        while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low ; i<=high ; i++){
        arr[i]=temp[i-low];
    }
}
//here we are deviding and then the upper code is for merging
int devide(vector<int> &arr , int low , int high){
    int mid=(low+high)/2;
    if(low>=high) return 0;
    devide(arr , low , mid);
    devide(arr , mid+1, high);
    merge(arr , low , mid , high);

}

int main(){
    cout<<"enter the size of array";
    int n;
    cin>>n;
       vector<int> arr;
       for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        arr.push_back(element);
       }
       devide(arr , 0 , n-1);
            for(int i=0 ; i<n; i++){
        cout<<arr[i];
    }
      
    return 0;
}