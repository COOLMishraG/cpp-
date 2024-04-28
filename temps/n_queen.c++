#include<iostream>
using namespace std;
bool isSafe(int** arr , int x , int y , int n){
    for(int i=0 ;  i<x ; i++){
        if(arr[i][y]==1){
            return false;
        }}
            for(int i=0 ; i<y ; i++){
        if(arr[x][i]==1){
            return false;
        } }
        while(x>=0 && y>=0){
            if(arr[x][y]==1){
                return false;
            }
            x--;
            y--;
        }
                while(x>=0 && y<n){
            if(arr[x][y]==1){
                return false;
            }
            x--;
            y++;
        }
        return true;}
bool nQueen(int** arr , int x , int n){
    if(x>=n){
        return true;
    }
    for(int i=0 ; i<n ; i++){
        if(isSafe(arr , x , i , n)){
            arr[x][i]=1;
        
        if(nQueen(arr , x+1 , n)){
            return true;
        }
        arr[x][i]=0;
        }
    }
    
    return false;
}
int main(){
    int n ;
    cin>>n;
    int** matrix=new int*[n];
for(int i =0 ; i<n ; i++){
    matrix[i]=new int[n];
}
for(int i = 0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        matrix[i][j]=0;
    }
}
if(nQueen(matrix , 0 , n)){
for(int i = 0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}}
return 0;
}
