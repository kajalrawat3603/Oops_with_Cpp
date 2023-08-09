#include<iostream>
using namespace std;
void stringmutableOrNot()
 {
   string a="Hello";
   cout<<&a<<endl;
   a[0]='j';
   cout<<&a<<endl;
  cout<<a<<endl;
 }
 int main(){
    stringmutableOrNot();
    return 0;
 }