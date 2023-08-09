#include<iostream>
#include<climits>
using namespace std;
void pairsum1()
{
    int n=2;
    int arr[2]={3,3}; 
    int sum=6;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]==sum)
         {
            cout<<arr[i]<<","<<arr[j]<<endl;
         }
        }
    }
}

void pairsum2()
{
    int arr[10]={1,2,3,4,5,6,7,7,9,10};
    int m=INT_MIN;
    int sum=9,i;
    for(i=0;i<10;i++)
    {
         m=max(m,arr[i]);
    }
    int crr[m]={0};
    for(i=0;i<10;i++)
    {
        crr[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
    if(crr[sum-arr[i]]>=1 && arr[i]!=sum-arr[i])
    {
        cout<<arr[i]<<","<<sum-arr[i]<<endl;
    }
    crr[arr[i]]--;
    }
}
int main(){
    pairsum1();
    pairsum2();
    return 0;
}








