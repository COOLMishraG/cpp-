#include<iostream>
using namespace std;
// class adj{
//     public:
//     void func(){
//         cout<<"the function with no arfument"<<endl;
//     }
//         void func(int r){
//         cout<<"the function with int arfument"<<endl;
//     }
//         void func(char r){
//         cout<<"the function with char arfument"<<endl;
//     }
// };

//function overloading
// class complex{
//     public:
//     complex(){}
//     int real;
//     int imaginary;
//     complex(int n , int j){
//     real=n;
//     imaginary=j;
//     }
//         complex operator +(complex &a){
//             complex res;
//             res.real=real + a.real;
//             res.imaginary=imaginary + a.imaginary;
//             return res;
//         }

//         void print_info(complex &a){
//             cout<<a.real<<"+ i"<<a.imaginary;
//         }

// };
class student{
    public:
    int n;
    int b;
    student(int a , int l){
        n=a;
        b=l;
    }
    void func(int k){
        cout<<k<<endl;
    }
    void virtual func(int o ){
        cout<<"i am here"<<endl;
    }

};
int  main (){
          student c1(6 , 6);
            student c2(5 , 9);
          
            c1.func(7);
    return 0;
}

