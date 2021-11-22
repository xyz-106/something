#include<iostream>
using namespace std;
class person{
 private:
   char name[100];
 public:
   void setName(){
      cout<<"Enter name: ";
      cin>>name;
   }
   void getName(){
      cout<<"Name is "<<name;
   }
};
int main(){
   person* mainArr[100];
   char exitornot='y'; int n=0;
   while(exitornot=='y'){
   mainArr[n]=new person;
   mainArr[n]->setName();
   n++;
   cout<<"Enter Exit or not ";
   cin>>exitornot;
   };
  for(int j=0;j<n;j++){
   mainArr[j]->getName();
  }   
  delete[] mainArr;
   return 0;
}