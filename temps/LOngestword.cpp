#include<iostream>
#include<cstring>
using namespace std;

int findthelongestword(const char*sentence){
    int maxLength = 0;
    int currentLength = 0;
    while(*sentence){
        if(*sentence != ' '){
        currentLength++;
    }else {
           if(currentLength > maxLength){
             maxLength = currentLength;
        }
        currentLength = 0;
    }
    sentence++;
    }
    if(currentLength>maxLength){
        maxLength=currentLength;
    }
    return maxLength;
}
int main(){
    char sentence[]="This is a smle sentence with some long words.";
    int longestLength = findthelongestword(sentence);
    cout<<"Length of the longest word: "<< longestLength << endl;
    return 0;
}
