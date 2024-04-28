#include<iostream>
#include<vector>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val) {

        size++;
        int index =size;
        arr[index]=val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else return ;
        }
    }

    void print(){
        for (int i=1 ; i<=size ; i++){
            cout<< arr[i] << " ";
        }cout<<endl;
    }
};


int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(555);
    h.insert(506);
    h.insert(5);
    h.insert(505);
    h.print();

    return 0;
}