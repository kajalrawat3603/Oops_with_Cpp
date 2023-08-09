#include<iostream>
#include<string>
using namespace std;
int palindrome(string);
int palindrome(string n)
 {
  
   int j=n.size()-1;
   cout<<j<<endl;
   for(int i=0;i<n.size()/2;i++,j--)
   {
      if(n[i]!=n[j])
      {
        cout<<"Not Palindrome"<<endl;
        return 0;
      }
   }
   cout<<"Palindrome"<<endl;
   return 1;
 }
 int main(){
    string s1;
   cout<<"Enter the string:";
   cin>>s1;
   //getline(cin,s1);
   palindrome(s1);
   return 0;
 }