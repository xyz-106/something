#include<iostream>
using namespace std;
int main(){
   for(int row=0;row<4;row++){
      if(row>0){
         for(int space=1;space<=row;space++)//1<=1
         {
            cout<<" ";
         }
      }
      for(int stars=1;stars<=7-(2*row);stars++){ //row=0 ;star=1; star<=5,*
                                                 //star=2;2<=5,**
                                                // 5,*****
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;
}