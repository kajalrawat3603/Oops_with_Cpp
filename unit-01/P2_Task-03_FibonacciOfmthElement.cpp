//fabonacci series using recursion and find mth member.
//0 1 1 2 3 5
#include<iostream>
using namespace std;
int fab(int);
int main(){
int n,m,x;
cout<<"enter limit"<<endl;
cin>>n;
int a[n],i;
cin>>m;
for(i=0;i<n;i++)
{
x=fab(i);
//cout<<x<<endl;
//a[i]=x;
if(x==m){
    cout<<"found="<<i;
}
}
/*for(i=0;i<n;i++){
if(a[i]==m){
cout<<"found="<<i<<endl;}}*/
return n;
}
int fab(int n){
if (n==0||n==1){
return n;
}
else
return fab(n-1)+fab(n-2);
}

