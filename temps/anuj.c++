#include<iostream>
using namespace std;
// void swap(int *n , int *n1){
//     int temp=*n;
//     *n=*n1;
//     *n1=temp;
// }

int main(){
    int arr[7]={2 ,1 ,0 ,1 ,2 , 1 , 0};
    int left =0;
    int right=6;
    int mid=0;
    while(mid<right){
        if(arr[mid]==0){
             int temp=arr[mid];
             arr[mid]=arr[left];
             arr[left]=temp;
                    left++;
        }else if(arr[mid]==2){
                      int temp=arr[mid];
             arr[mid]=arr[right];
             arr[right]=temp;
                
            right--;
        }else {
            mid++;
        }



    }
    for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}