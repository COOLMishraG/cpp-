/*C++ code to print with dramatic effect*/
#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
string word,final;
word="Hello World";
for(int i=0;i<word.size();i++){
if(word[i]>='a' && word[i]<='z'){
final.push_back('a');
cout<<final<<endl;
for(char x='b';x<=word[i];x++){
final[i]=x;
cout<<final<<endl;
Sleep(40);
}
}
else{
final.push_back(word[i]);
cout<<final<<endl;
Sleep(40);
}
}
return 0;
}