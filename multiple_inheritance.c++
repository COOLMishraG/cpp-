#include<iostream>
using namespace std;
class a{
    public:
    void Afunc(){
        cout<<"Afunc";
    }
};
class b{

    public:
    void Bfunc(){
        cout<<"Bfunc";
    }
};
class c:public a , public b{
    public:
};
int main(){
    c ca;
    ca.Afunc();
    ca.Bfunc();
    return 0;
}
