#include<iostream>
using namespace std;

void add(int,int);
void add(float);
void add(string);
int main(){
  int x,y; 
  float z;
  string a;
  cout<<"Enter x";cin>>x;
  cout<<"Enter y";cin>>y;
  cout<<"Enter z";cin>>z;
  cout<<"Enter a";cin>>a;
  add(z);
  add(a);
  add(x,y);
   return 0;
}
void add(int a,int b){
   cout<<"Add"<<a+b<<endl;
}
void add(float testfloat){
   cout<<"Float Test "<<testfloat<<endl;
}
void add(string teststring){
   cout<<"Test String"<<teststring<<endl;
}