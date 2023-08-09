//adding integer to a string
#include<iostream>
#include<string>
using namespace std;
int palindrom(string);
int main(){
    string str="abc";
    int a=1;
    string str1=str+a;          //error
    cout<<str1<<endl;
    return 0;
}
/*

//string is palindrome or not
int main(){
    string str="abba";
    int i=palindrom(str);
    if(i==0){
        cout<<"string is palindrom"<<endl;
    }
    else{
        cout<<"string is not palindrom"<<endl;
    }
    return 0;
}
int palindrom(string s){
    string a;
    int i=0;
    int l=4;
    while(l>=0){
        a[i]=s[l];
        l=l-1;
        i=i+1;
    }
    if(a==s){
        return 0;
    }
    else{
        return 1;
    }
}
*/