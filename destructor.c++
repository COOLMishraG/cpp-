#include<iostream>
using namespace std;
class student{
    public:
string name ;
int age;
bool gender;
student(string s , int a , int b){
    name=s;
    age=a;
    gender=b;}

void print_info(){
    cout<<"the name of the student is";
    cout<<name<<endl;
    cout<<"the age of the student is";
    cout<<age<<endl;
    cout<<"the gender of the student is";
    cout<<gender<<endl;
}


~student(){
    cout<<"destructor"<<endl;
}
};
int main(){

student anuj("anuj" , 23 , 1);
student ayush("ayush" , 27 , 1);
student kkas("judhats" , 1234 , 0);

anuj.print_info();
ayush.print_info();
kkas.print_info();
    return 0;
}