#include<iostream>
using namespace std;
class projct{
    public:
    string  name;
    int time ;
    int budget;
    projct(string s , int a , int b){
        name=s;
        time=a;
        budget=b;
        cout<<"parametrised constructor"<<endl;   //parameterised constructor
    }
projct (){
cout<<"defalut conatructor";                    //default conatructor
}
    void print_info(){
        cout<<"the name of the project=";
        cout<<name<<endl;
        cout<<"the time to complete the prject=";
        cout<<time<<endl;
        cout<<"the budget of the project is=";
        cout<<budget<<endl;
    }

    projct(projct &a){
   name=a.name;
   time=a.time;
   budget=a.budget;
   cout<<"copy constructor";                        //copy constructor
    }
};
int main(){
        projct it("ai", 4 , 6);
        //it.print_info();
        projct ei();
        projct kkt(it);
        kkt.print_info();

    return 0;
}