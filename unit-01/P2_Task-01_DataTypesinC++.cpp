#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a=100;
    float b=1.0;
    long c=1111111111;
    short d=1;
    double e=1.00000000;
    char f='a';
    wchar_t g='A';
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<g<<endl;
    cout<<"Size of Each Datatype"<<endl;
    cout<<"char-"<<sizeof(char)<<endl;
    cout<<"int-"<<sizeof(int)<<endl;
    cout<<"longint-"<<sizeof(long)<<endl;
    cout<<"float-"<<sizeof(float)<<endl;
    cout<<"double-"<<sizeof(double)<<endl;
    cout<<"wide char-"<<sizeof(wchar_t)<<endl;
    cout<<"short-"<<sizeof(short)<<endl;
    cout<<"\n";
    cout<<"Max and Min value of Int and Long"<<endl;
    cout<<"INT_MAX- "<<INT_MAX<<endl;
    cout<<"INT_MIN- "<<INT_MIN<<endl;
    cout<<"LONG_MAX- "<<LONG_MAX<<endl; 
    cout<<"LONG_MIN- "<<LONG_MIN<<endl;
    cout<<"\n";
    return 0;
}