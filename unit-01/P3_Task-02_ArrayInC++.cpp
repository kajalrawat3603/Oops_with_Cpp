#include<iostream>
using namespace std;
int multiplyTwoMatrix();
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