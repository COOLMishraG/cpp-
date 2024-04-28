#include<iostream>
#include<vector>
using namespace std;
int main(){
    //declaring a prer valued vector

    vector<int> a2 (3,50);          // the values iin tthis vector are 50 50 50
    cout<<"enter the size of the vector";
    int n;
        cin>>n;
    vector<int> anuj;
    //input
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        anuj.push_back(element);
    }

    //printing out the vector or going through the whole vector

    // by itration
    vector<int>::iterator jt;
    for(jt=anuj.begin() ; jt!=anuj.end() ; jt++){
            cout<<*jt<<endl;
    }

    //using simple for loop
    for(int i=0 ; i<n ; i++){
        cout<<anuj[i];
    }
    //using auto

    for(auto element:anuj){
        cout<<element<<endl;            //here element is not a itreator
    }
    return 0;

    //swapping the two given vector
    swap(anuj , a2);
}
