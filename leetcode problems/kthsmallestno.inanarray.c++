#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[6]={1 , 3 , 6 , 4 ,9 ,8};
    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    priority_queue<int> pq;
    for(int i=0 ; i<k ; i++){
        pq.push(arr[i]);
    }
    for(int i=k; i<6; i++){ // Should iterate until i < 6 (the size of the array)
        if(arr[i]<pq.top()){
            pq.pop(); // Remove the largest element currently in the priority queue
            pq.push(arr[i]); // Insert the smaller element
        }
    }
    cout<<pq.top()<<" is the answer";
    return 0;
}
