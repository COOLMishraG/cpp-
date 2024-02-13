#include<iostream>
using namespace std;


void swap( int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int factorial(int n){
    int t=1;
    for(int i=1 ; i<=n ; i++){
        t*=i;
    }
    return t;
}


int no=0;
int permutation(int arr[] , int x  , int size_of_array){
    if(no==factorial(size_of_array)){
        return 0;
    }
             no+=1;
           for(int i=0 ; i<size_of_array ; i++){
            cout<<arr[i];}
            cout<<endl;
    if(x==size_of_array-1){
      
        swap(arr[0] , arr[1]);
         permutation(arr , 1 , size_of_array);
    }
    else{
    swap(arr[x] , arr[x+1]);
      permutation(arr , x+1 , size_of_array);}
}


int main(){
    int size_of_array;
    cout<<"enter the size of tthe array";
    cin>>size_of_array;
    cout<<"enter the array";
    int arr[size_of_array];
    for(int i = 0 ; i<size_of_array ; i++){
        cin>>arr[i];
    }

    permutation(arr , 1 , size_of_array);

    return 0;
}