#include<iostream>
using namespace std;

int  lessCohesive(int a, int b){
    int i=0;
    if(i==0){
        return a+b;
    }
    else{
        return a+b+5;
    }
    //Function make your code less cohesive
}
/// @brief 
inline void inlineFunction(){
    cout<<"This is a inline function."<<endl;
}

void CallByValuesAndAddress(int a, int* pa){
    //call by value here is integer a
    a=a+2;
    //call by reference here is pointer pa
    *pa = *pa +1;
}

//Recursive FUnction
void recusiveFunction(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    recusiveFunction(n+1);
}

int main(){
    int a=lessCohesive(3,3);
    int *pa=&a;
    cout<<a<<endl;
    CallByValuesAndAddress(a, pa);
    cout<<a<<endl;
    cout<<*pa<<endl;
    inlineFunction();
    recusiveFunction(0);
    return 0;
}