#include<iostream>
using namespace std;
class animal{
public:
string spcies;
int age;
bool eating;
    void print_info(){
        cout<<"the name of spice";
        cout<<spcies<<endl;
        cout<<"the avg age of the anumal is ";
        cout<<age<<endl;
        cout<<"the eating habit ";
        cout<<eating<<endl;
    }
};
int main(){
cout<<"enter the number of spices";
int n;
cin>>n;
animal arr[n];
for(int i=0 ; i<n ; i++){
    cout<<"enter the name of the speice ";
    cin>>arr[i].spcies;
    cout<<"enter the avg age of the speice";
    cin>>arr[i].age;
    cout<<"veg or non_veg";
    cin>>arr[i].eating;
}

for(int i=0 ; i<n ; i++){
    arr[i].print_info();
}
    return 0;
}