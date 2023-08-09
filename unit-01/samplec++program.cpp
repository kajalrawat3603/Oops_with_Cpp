#include<iostream>
using namespace std;
/*int multiplyTwoMatrix();
int multiplyTwoMatrix()
{
   int r1,r2,c1,c2,i;
   cout<<"Enter r1&c1:";
   cin>>r1;
   cin>>c1;
   cout<<"Enter r2&c2:";
   cin>>r2;
   cin>>c2;
   
   if(c1!=r2)
   {
    cout<<"Not possible"<<endl;
    return 0;
   }
    else{
        int a[r1][c1],b[r2][c2];
        int i,k,j,s;
        cout<<"Enter the array1:"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter the array2:"<<endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }
    cout<<"Resultant Matrix"<<endl;
    for(i=0;i<r1;i++)
    { 
        for(j=0;j<c2;j++)
        {  s=0;
            for(k=0;k<r2;k++)
            {
                s+=a[i][k]*b[k][j];
            }
            cout<<s<<" ";
        }
        cout<<"\n";
    } 
    }
   return 1; 
}
int main(){
    multiplyTwoMatrix();
}


//q1-b-ii
class Distance{
    private:
    int m,cm;
    public:
    void input(int m,int cm){
        this->m=m;
        this->cm=cm;
    }
    Distance add(Distance d1,Distance d2){
        Distance d3;
        d3.m=d1.m+d2.m;
        d3.cm=d1.cm+d2.cm;
        return (d3);
    }
    void display(){
        cout<<"m="<<m<<endl;
        cout<<"cm="<<cm<<endl;
    }
};
int main(){
    Distance d1,d2,d3;
    d1.input(10,10);
    d2.input(20,20);
    d3=d3.add(d1,d2);
    d3.display();
    return 0;
}

//q2-a
class Temp{
    public:
    static int a;
    Temp(){
        a++;
    }
    
};
int Temp::a=0;
int main(){
    int n;
    cout<<"enter no. of objects="<<endl;
    cin>>n;
    Temp o[n];
    int i;
    while(i<n){
        Temp o[i];
        i++;
    }
    cout<<"total object created="<<Temp::a<<endl;
    return 0;
}



//q2-b-i
class Age{
    private:
    int a1,a2;
    public:
    friend void compareAge(Age f1,Age f2);
    void setA1(int x){
        a1=x;
    }
    void setA2(int y){
        a2=y;
    }
};
void compareAge(Age f1,Age f2){
    if(f1.a1>f2.a2){
        cout<<"1 friend has more age than 2 friend"<<endl;
    }
    else if(f1.a1<f2.a2){
        cout<<"2nd freind has more age than 1st"<<endl;
    }
    else if(f1.a1==f2.a2){
        cout<<"both have equal ages"<<endl;
    }
}
int main(){
    Age f1,f2;
    int a,b;
    cout<<"age 1="<<endl;;
    cin>>a;
    cout<<"age 2="<<endl;
    cin>>b;
    f1.setA1(a);
    f2.setA2(b);
    compareAge(f1,f2);
    return 0;
}

int palindrom(string s,int a){
    //int i=s.size()-1;
    int j=a;
    for(i=0;i<=a/2;i++,j--){
        if(s[i]==s[j])
        {
            c=0;
        }
        else{
            c=1;
            break;
        }
    }
    return c;
}
void replace(string s,int a){

}
int main(){
    string s;
    getline(cin,s);
    int i=0,j=s.size();
    for(i=0;i<j;i++){

        if(s[i]!=' ')
        {
            a++;
        }
        palindrom(s[i],a);
        else{
            int y=palindrom(s[i],a);
            if(y==0){
                replace(s[i],a);
            }
            countinue;
        }
        a=0;
    }
}

//static variable
void a(){
    int a[7]={1,2,3,4,5,6,7};
    int s=sizeof(a);
    cout<<s<<endl;
    for (int i=0;i<s;i++){
        cout<<a[i]<<endl;
    }

}
int main(){
    a();
    return 0;
}

int main(){
    int x=9,n;
    int &y=x;
    cout<<y<<endl;
    cin>>n;
    int *a=new int(n);
    for(x=0;x<n;x++){
        cin>>a[x];
    }
    int *p=a;
    for(x=0;x<n;x++){
        cout<<*(p+x)<<endl;
    }
}

namespace std1{
    void show(){
        int x=10;
        cout<<x<<endl;
    }
}
namespace std2{
    void show(){
        int y=3;
        cout<<y<<endl;
    }
}
int main(){
    std1::show();
    std2::show();
    return 0;
}*/

class A{
    int a;
    public:
    A(){
        a=10;
        cout<<a;
    }
    A(int a){
        this->a=a;
        cout<<a;

    }
    A(A &obj){
     this->a=obj.a;
     cout<<a;
    }
};
int main(){
    A o;  //default
    A obj(8);  //parameterize
    A o1(obj);  //copy constructor

}

int main(){
//void pairsum1()

    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
    int sum=6;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]==sum)
         {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
         }
        }
    }
}