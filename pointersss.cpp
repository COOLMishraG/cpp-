#include<iostream>
using namespace std;

// int main(){
// int a = 10;
// int*aptr;
// aptr=&a;

// cout<<&a<<endl;
// cout<<aptr<<endl;

// cout<<*aptr<<endl;


//     return 0;
// }

//  int main(){
//     int a = 10;
//     int *aptr = &a;
//     cout<<aptr<<endl;

//     aptr++;
//     cout<<aptr<<endl;

//     return 0;
//  }


int main(){

    int arr[]={10,20,30};
    cout<<*arr<<endl;
    
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
}
    return 0;
}