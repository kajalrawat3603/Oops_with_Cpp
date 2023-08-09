#include<iostream>
using namespace std;
int prime_for_all_n(int);
int prime_for_half_n(int);
int sqrt(int);
int prime_for_sqrt_n(int);
int odd_even(int);
int main(){
    int i,j;
    cout<<"enter no.";
    cin>>i;
    j=prime_for_all_n(i);
    if(j==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    //prime_for_half_n(i);
    //prime_for_sqrt_n(i);
    //odd_even(i);
    return 0;
}
int prime_for_all_n(int n){
    int c=2,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            c++;
        }   
    }
    return c;
}
int prime_for_half_n(int n){
    int c=0,i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}
int sqrt(int n){
    int i=1;
    int r=1;
    while(r<=n){
        i++;
        r=i*i;
    }
    //cout<<"sqrt="<<i-1<<endl;
    return i-1;
}
int prime_for_sqrt_n(int n){
    int i,c=0;
    int r=sqrt(n);
    for(i=0;i<=r;i++){
        if(n%i==0){
            c++;}
    }
    if(c==0){
            cout<<"prime"<<endl;
        }
        else{
            cout<<"notprime"<<endl;
        }
return 0;
}
int odd_even(int n){
    int i,c=0;
    if(n%2==0){
        c++;
    }
    if(n%3==0){
        c++;
    }
    if(n%5==0){
        c++;
    }
    if(c==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"notprime"<<endl;
    }
return 0;
}