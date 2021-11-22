#include<iostream>
using namespace std;
int main(){
   int num,remainder,sum=0,temp;
   cout<<"Enter the number \t";
   cin>>num;
   temp=num; //temp=12345
 while(num>0){     //12345
   remainder=num%10;  //5 4 3 2 1
   sum=(sum*10)+remainder; //sum=5 ,sum=54, sum=543, sum=5432, sum=54321
   num=num/10;}  //1234 123 12 1
   if(temp==sum){
      cout<<"Palidrome";
   }
   else{
      cout<<"Not Palidrome";
   }
   return 0;
}