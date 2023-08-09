#include<iostream>
using namespace std;
void majorityElement();
void majorityElement()
{
    int m,i,j,max=INT8_MIN,f=0,e=0;
    cout<<"Enter size:";
    cin>>m;
    int a[m];
    cout<<"Enter the array:";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>max)
           max=a[i];
    }
   int count[max+1];
   for(i=0;i<=max;i++)
   { 
       count[i]=0;
   }
   for(i=0;i<m;i++)
   {
        count[a[i]]++;
   }
   for(i=0;i<=max;i++)
   {
       if(count[i]>=f)
       {
          f=count[i];
          e=i;
       }
   }
   cout<<" The majority element is "<<e<<" and occuring "<<f<<" times"<<endl;
}
int main(){
    majorityElement();
    return 0;
}