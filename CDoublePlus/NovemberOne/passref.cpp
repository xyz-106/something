#include<iostream>
using namespace std;
int main(){
   void test(double*);
   double var=10.0;
   cout<<"var ="<<var<<"inches"<<endl;

   test(&var);
   cout<<"var ="<<var<<"centimeters"<<endl;
   return 0;
}
void test(double* v){
   *v*=2.54;  //*v=*v*2.54  //a-=b, a=a-b
}