#include<iostream>
using namespace std;
class test{
   public:
    int a;
    string b;
   public:
     void setText(int s){
        a=s;
     }
     int getText(){
        
        return a;
     }
};
int main(){
  test t1;int s;
 
  t1.setText(1);
  s=t1.getText();
   cout<<"Test"<<t1.a<<endl;
  cout<<"Display"<<s;
   return 0;
}