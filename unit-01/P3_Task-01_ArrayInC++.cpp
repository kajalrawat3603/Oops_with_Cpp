#include<iostream>
using namespace std;
void delete1(int[],int ,int);
void delete2(int[],int ,int );
void delete3(int[],int ,int);
int main(){
    int n,x,i;
    cout<<("enter size=");
    cin>>n;
    int a[n];
    for( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<("\nenter element to delete=");
    cin>>x;
    delete1(a,x,n);
    delete2(a,x,n);
    delete3(a,x,n);
    return 0;
}
void delete1(int arr[],int k,int n)
{ 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {  
            while(i<n)
            {
               arr[i]=arr[i+1]; 
               i++;
            }
            break;

        }
    }
     for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void delete2(int arr[],int k,int n)
{  
    int j=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==k)
       {
        continue;
       }
       else
       {
        arr[j++]=arr[i];
       }
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void delete3(int arr[],int k,int n)
{
    int j=0;
    int arr2[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {  
            continue;
        }
        else
        {
           arr2[j++]=arr[i];
        }
    }
     for(int i=0;i<n-1;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<"\n";
}

/*
#include<iostream>
using namespace std;
void multiplicaionoftwomatrix(){
    int r1,r2,c1,c2,i,j,k;
    cout<<"enter limits";
    cin>>r1;
    cin>>c1;
    cin>>r2;
    cin>>c2;
    int arr[r1][c2],arr2[r2][c2];
    for (int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter elements of matrix1";
            cin>>arr[i][j];
        }}
    for (int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter elements of matrix2";
            cin>>arr2[i][j];

        }}
    if(c1==r2){
        cout<<"Multiplication possible";
        int res[r1][c2];
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                res[i][j]=0;
                for(k=0;k<c2;k++){
                    res[i][j]+=arr[i][k]*arr2[k][j];
                }
                
            }
        }
        for (int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<res[i][j];
            }
            cout<<endl;
    
        }
    }
    else{
        cout<<"Multiplication not possible";
    }
}
void pair1()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (ar[i] + ar[j] == k)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}
 void majoroc()
{
    int n, mx = 0, oc = 0, in = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    mx++;
    int coun[mx] = {0};
    for (int i = 0; i < n; i++)
    {
        coun[ar[i]]++;
    }

    for (int i = 0; i < mx; i++)
    {
        if (coun[i] > oc)
        {
            oc = coun[i];
            in = i;
        }
    }
    cout << in << " occured: " << oc << endl;
}
void maxsumadj()
{
    int n, mx = 0, maxsu = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    int coun[mx + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        coun[ar[i]]++;
    }

    if (coun[mx] > 1)
    {
        maxsu = mx * 2;
    }
    else
    {
        maxsu = mx;
        for (int i = mx - 1; i >= 0; i--)
        {
            if (coun[i] > 0)
            {
                maxsu += i;
                break;
            }
        }
    }
    cout << maxsu << endl;
}
void dupl()
{
    int n, mx = 0, ct = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    mx++;
    int coun[mx] = {0};
    for (int i = 0; i < n; i++)
    {
        if (coun[ar[i]] > 0)
        {
            ct++;
        }
        coun[ar[i]]++;
    }
    cout << "No. of Duplicates: " << ct << endl;
    for (int i = 0; i < mx; i++)
    {
        if (coun[i] > 1)
        {
            cout << i << " ";
        }
    }
}
int main(){
    multiplicaionoftwomatrix();
    maxsumadj();
    dupl();
    majoroc();
    pair1();
    return 0;
}*/