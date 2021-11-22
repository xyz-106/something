#include<iostream>
using namespace std;
class student{
   //class data
   public:
     int somedata;
   //memeber function
   public:
     void setdata(int inputdata){
        somedata=inputdata;
     }
     void getdata(){  
        cout<<"Data is"<<somedata<<endl;
     }
     
};
int main(){
   student s1,s2; 
   s1.setdata(345);
   s1.getdata();

   s2.setdata(333);
   s2.getdata();
   return 0;
}