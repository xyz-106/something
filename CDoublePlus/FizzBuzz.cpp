#include<iostream>
using namespace std;
int x,y,N;//variable declaration
int a=1,j=0;//initialize some variables

int main(){
 cout<<"WELCOME TO FIZZBUZZ GAME!"<<endl;
 cout<<"plz Enter first divisor:";
 cin>>x;
 cout<<"Enter second divisor:";
 cin>>y;
 cout<<"Enter how many numbers you want to calculate:";
 cin>>N;//Size of Array(1 to N)
int arr[N];//Array Declaration
for(int i=0;i<N;i++){//array assigning with for-loop
  arr[i]=(a+i); //1 2 3 4 5 6
}

while(j<N){//main calculatiion 
 if(arr[j]%x==0 && arr[j]%y==0){cout<<"FizzBuzz"<<" ";}
 else if(arr[j]%x==0){cout<<"Fizz"<<" ";}
 else if(arr[j]%y==0){cout<<"Buzz"<<" ";}
 else cout<<arr[j]<<" ";
 ++j;
}
return 0;
}