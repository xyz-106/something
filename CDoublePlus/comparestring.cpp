#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
class String
{
   private:
   enum{SZ=80};
   char str[SZ];
   public:
   String(){strcpy(str,"");}
   String(char s[]){strcpy(str,s);}
   void display() const{cout<<str;}
   void getstr(){cin.get(str,SZ);}
   bool operator ==(String ss)const{
      return (strcmp(str,ss.str)==0)?true:false;
}};
   
int main(){
   String s1="\nMerry Christmas!";
   String s2="Happy new year!";
   String s3;
   cout<<"Enter s1 or s2";
   s3.getstr();
   if(s3==s1){
      cout<<"OK";
   }
   else if(s3==s2){
      cout<<"GG";
   }
   else{
      cout<<"You didn't follow instructions\n";
   }
  
   return 0;
}