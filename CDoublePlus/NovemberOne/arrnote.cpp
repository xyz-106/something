#include<iostream>
using namespace std;
int main(){
   int array[5]={31,53,2,2,2};
   for(int j=0;j<5;j++){
      cout<<*(array+j)<<endl; //cout<<array[j]
   }
   return 0;
}