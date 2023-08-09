#include<iostream>
using namespace std;
void medianOfTwoArray(int [],int [],int ,int );
void medianOfTwoArray(int a[],int b[],int n,int m)
{ int c[n+m],p=0,q=0,i;
  for(i=0;i<m+n;i++)
  {
     if(a[p]>b[q])
     {
        c[i]=b[q];
        q++;
     }
     else{
      c[i]=a[p];
      p++;
     }
  }
  cout<<"Median is:";
   if((m+n)%2==0)
   {  float avg=(float)(c[(m+n)/2]+c[(m+n-1)/2])/2;
      cout<<avg;
   }
   else
   {
     cout<<c[(m+n)/2];
   }
}
int main(){
    int n,i,m;
  cout<<"Enter size of array1:";
  cin>>n;
  int a[n];
  cout<<"Enter array1:";
  for(i=0;i<n;i++)
        cin>>a[i];
  cout<<"Enter size of array2:";
  cin>>m;
  int b[m];
  cout<<"Enter array2:";
  for(i=0;i<m;i++)
        cin>>b[i];
    medianOfTwoArray(a,b,n,m);
    return 0;
}