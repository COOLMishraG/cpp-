#include<iostream>
using namespace std;
class employee{
  public:
string name;
int age;
int sex;           //1 for male and 0 for women
  employee(string s , int a , int b){
    cout<<"const"<<endl;
        name=s;
        age=a;
        sex=b;
  }                 //parameterised consturctor

  bool operator ==(employee  &a){
    if(name==a.name && age==a.age && sex==a.sex){
      return true;
    }
    else return false;                  //overloading the funtion
  }

  void print_info(){
    cout<<"the name of the empkoyee =";    
    cout<<name<<endl;
    cout<<"the age of the emplopyee=";
    cout<<age<<endl;
    cout<<"the sex of the employee =";
    cout<<sex<<endl;
  }
};


int main(){

employee a("anuj" , 20 ,1);
employee b("anuj" , 20 ,1);
employee c("ayush" , 23 , 1);


  if(b==a){
     a.print_info();
  }
  else {
    c.print_info();
  }
    return 0;
}