#include<iostream>
using namespace std;
int main(){
int a=2;
int b=1;
//arithemetic operator[+,-,/,*]
cout<<a+b<<endl;
//remender operator[%]
cout<<a%b<<endl;
//arithmetic assignment operator[+=,-=]
int c=10;
c+=a; //c=c+a
cout<<c<<endl;
//increment and decrement operator[++,--]
cout<<++a<<endl;
cout<<--a<<endl;
cout<<a++<<endl;
cout<<a--<<endl;
//logical operators[and(&&),or(||),not(!)
if(a>1||b<2){
    cout<<"or"<<endl;
}
if(a>1 && b<2){
    cout<<"and"<<endl;
}
if(a!=2){
    cout<<"not"<<endl;
}
//bitwise operator[&,|]
cout<<(a&b)<<endl;
cout<<(a>1|b<2)<<endl;
//conditional operator[:]
int m=(a>b)?a:b;
int n=(a<b)?a:b;
cout<<m<<endl<<n<<endl;

//relational operator[>,<,>=,<=]->true,false
cout<<(a>b);
return 0;
}
