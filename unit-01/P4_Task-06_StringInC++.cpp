#include<iostream>
#include<string>
using namespace std;
void ReplaceCharacterSmall(string );
void ReplaceCharacterSmall(string n)
{
   
   for(int i=0;i<n.size();i++)
   {
      if(n[i]>='a'&& n[i]<='z')
      {
        if(n[i]=='z')
            n[i]='a';
        else{
          n[i]+=1;
        }
      }
   }
   cout<<"Replace Character:"<<n<<endl;
}
int main(){
    string s;
   cout<<"Enter the string:";
   cin>>s;
   ReplaceCharacterSmall(s);
   return 0;
}