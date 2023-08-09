#include<iostream>
#include<string>
using namespace std;
void CompareString(string ,string );
void CompareString(string s1,string s2)
 {
    
    int x=s1.compare(s2);
    if(x==0){
      cout<<"strings are equal"<<endl;
    }
    else{
      cout<<"strings are not equal"<<endl;
    }
    /*if(x>0)
      cout<<"string 1 is large"<<endl;
    else if(x<0)
      cout<<"string2 is large"<<endl;
    else                    //x==0
      cout<<"string1 is equal to string2"<<endl;
*/
 }
 int main(){
  string s1,s2;
    cout<<"Enter two strings:";
    cin>>s1>>s2;
    CompareString(s1,s2);
    return 0;
 }