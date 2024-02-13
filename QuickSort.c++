#include<iostream>
#include<vector>
using namespace std;
int f(vector<int> &arr , int low , int high){
    int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot && i<=high){
                i++;
            }
             while(arr[j]>pivot && j>=low){
                j--;
            }
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp1=arr[low];
        arr[low]=arr[j];
        arr[j]=temp1;
        return j;

}
int Qs(vector<int> &arr , int low , int high){
    if(low<high){
        int partisian=f(arr , low , high);
        Qs(arr , low , partisian-1);
          Qs(arr , partisian+1, high);

    }
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
  vector<int> arr;
  for(int i=0 ; i<n ; i++){
    int element ;
    cin>>element;
    arr.push_back(element);
  }
  Qs(arr , 0 , n-1);
  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<endl;
  }
return 0;
}