//it is the collection of classes. eg-iostream
#include<iostream>              
using namespace std;
namespace std1{
    int x=10;
}
//namespace-to delecare scope of a variable or function
namespace std2{
    int x=30;
}
//variable search
//local scope-global scope-namespace
int main(){
    int x=20;
cout<<x<<endl;
cout<<std1::x<<endl;
cout<<std2::x<<endl;
return 0;
}





