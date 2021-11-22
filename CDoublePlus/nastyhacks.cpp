#include<iostream>
using namespace std;
int main(){
    int n;
    long int r,e,s;
    unsigned long int c;
AGAIN:cout<<"Plz enter number of cases you want to predict(at least 1case,upmost 100cases):";
cin>>n;
if(n<1 || n>100){goto AGAIN;}
else for(int i=0;i<n;i++)
{
   cout<<"\nEnter the profit of \'Not Advertise\':";
   cin>>r;
   cout<<"\nEnter the profit of \'Advertise\':";
   cin>>e;
   cout<<"\nEnter the cost of Advertising:";
   cin>>c;
   s=e-c;
   if(r==s){cout<<"\'Not Matter.\'"<<endl;}
   else if(r>s){cout<<"\'Not Advertise!\'"<<endl;}
   else if(r<s){cout<<"\'OK Advertise\'"<<endl;}
}
    return 0;
}