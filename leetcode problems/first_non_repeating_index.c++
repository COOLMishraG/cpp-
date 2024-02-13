#include<iostream>
#include<string.h>
int main(){
    int arr;
    

        for(int i=0 ; i<size(s) ; i++){
            int k=0;
            for(int j=0 ; j<size(s); j++){
                if(s[j]==s[i]){
                    k++;
                }
            }
            if(k==1){
                return i;
            }
        
        return (-1);
    }
}