#include<iostream>
using namespace std;
const int MAX=5;
int main(){
   void centimize(double*);
   double varrary[MAX]={10.0,43.1,92.2,12.2,2.0};
   centimize(varrary); 
   for(int j=0;j<MAX;j++){
      cout<<*varrary<<"\t"<<j<<"j"<<*(varrary+j)<<"centimeters"<<endl;
   }
   return 0;
}
void centimize(double* ptrd){
   for(int j=0;j<MAX;j++){
      //*ptrd++*=10;  //*ptrd  
      *ptrd=*ptrd*10;
      *ptrd++;
     // ptrd[j]= ptrd[j] *10;
   }
}