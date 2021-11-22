#include<iostream>
#include<cstring>
using namespace std;
int main(){
   void dispstr(char*);
   char str[]="Idle people have the least leisure.";
   string str2="Hello";
   cout<<str2.length();
   dispstr(str);
   return 0;
}
void dispstr(char* ps){
  /* while(*ps){
      cout<<*ps++;
      cout<<endl;
   }*/
   for(int i=0;i<strlen(ps);i++){
      cout<<ps[i];
      cout<<endl;
   }
}