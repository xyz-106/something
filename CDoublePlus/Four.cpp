#include<iostream>
using namespace std;
struct Distance{
   int feet;
   float inches;
};
//function Declaration
Distance add(Distance,Distance);
void display(Distance output){
   cout<<output.feet<<"\'-"<<output.inches<<"\"";
}
int main(){
   Distance d1,d22,d3;
   cout<<"Enter feet:";cin>>d1.feet;
   cout<<"Enter inches: ";cin>>d1.inches;
    cout<<"Enter feet:";cin>>d22.feet;
   cout<<"Enter inches: ";cin>>d22.inches;
   d3=add(d1,d22);
   display(d3);
   return 0;
}
Distance add(Distance dd1,Distance dd2){
   Distance dd3;
   dd3.feet=0;
   dd3.inches=dd1.inches+dd2.inches;
   if(dd3.inches>=12.0){
      dd3.inches=dd3.inches-12.0;
      dd3.feet++;
   }
   dd3.feet=dd3.feet+dd1.feet+dd2.feet;
  
   return dd3;
}