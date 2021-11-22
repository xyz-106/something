#include<iostream>
using namespace std;
int fact(int);
int main(){
   int n,result;
   cout<<"Enter integer";
   cin>>n;//5
   result=fact(n);//result=fact(5);
   cout<<"Factorial result"<<result;
   return 0;
}
int fact(int num){
   if(num>1){ 
      return num*fact(num-1); //5*fact(4)
                              //5*4*fact(3)
                              //20*3*fact(2)
                              //60*2*fact(1)
                              //120
   }
   else{
      return 1;
   }
}