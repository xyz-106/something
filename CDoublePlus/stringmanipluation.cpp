#include<iostream>
#include<string>
using namespace std;

int main(){
   string str="DDD KKK live lll1 0000";
   int str2=str.find("live");
   cout<<"Index of live"<<str2;
   string st3=str.substr(4,8);
   cout<<st3;
   return 0;
}