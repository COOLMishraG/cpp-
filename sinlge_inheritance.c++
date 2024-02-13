#include<iostream>
using namespace std;
class a{
    public:
    string s;
int whoe;
a(){
    cout<<"inheritance";
}
a(string sa , int a){
    s=sa;
    whoe=a;
}
    void func(){
        cout<<"passewd";
    }
    void print_info(){
    cout<<"the string";
    cout<<s;
    cout<<"whoe is";
    cout<<whoe;}
};
class b: public a{
    public:
};
int main(){
    b c;
b ab;
   c.func();
   b anuj;
   ab.print_info();
   return  0; 
}