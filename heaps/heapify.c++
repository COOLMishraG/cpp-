#include<iostream>
#include<vector>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val) {

        size++;
        int index =size;
        arr[index]=val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else return ;
        }
    }

    void print(){
        for (int i=1 ; i<=size ; i++){
            cout<< arr[i] << " ";
        }cout<<endl;
    }
};
void heapify(int arr[] , int n , int i ){
    int largest=i;
    int left=2*i;
    int right=2*i + 1;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest] , arr[i]);
        heapify(arr , n , largest);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(555);
    h.insert(506);
    h.insert(5);
    h.insert(505);
    int arr[6]={-1 , 54 , 53 , 55 , 52 , 50};
    h.print();
    int n=5;
    for(int i=n/2 ; i>0 ; i--){
    heapify(arr , 5 , i );
    }
    for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}