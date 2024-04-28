#include<iostream>
using namespace std;
bool isSafe(int** arr , int x , int y , int n){
    if(x<n && y<n && arr[x][y]==1){
return true;
    }
    return false;
}
     
bool nxt_move(int** arr , int x , int y , int n ,int** sol_mat){
    if(  x==n-1 && y==n-1 ){
         sol_mat[x][y]=1;
         return true;
    }if(isSafe(arr , x , y , n)){
        sol_mat[x][y]=1;
    if(nxt_move(arr,x+1 ,y , n , sol_mat )){
        sol_mat[x][y]=1;
        return true;
    }
       if(nxt_move(arr,x ,y+1 , n , sol_mat )){
        sol_mat[x][y]=1;
        return true;
    }
     sol_mat[x][y]=0;
    return false;}
    return false;
}



int main(){
    int n;
    cin>>n;
int** matrix=new int*[n];
for(int i =0 ; i<n ; i++){
    matrix[i]=new int[n];
}

cout<<"enter the maze";
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
         cin>>matrix[i][j];
}
}

int** sol_mat=new int* [n];
for(int i =0 ; i<n ; i++){
    sol_mat[i]=new int[n];
}
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
         sol_mat[i][j]=0
         ;
}
}
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
         cout<<matrix[i][j]<<" ";
}cout<<endl;}
if(nxt_move(matrix , 0 , 0 , n , sol_mat))
{
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
         cout<<sol_mat[i][j]<<" ";
}cout<<endl;
}}
return 0;}