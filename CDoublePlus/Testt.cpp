#include<iostream>
#include<conio.h>
using namespace std;
enum isword{NO,YES};
int main(){
  isword word=NO;
  char ch='a';
  int wordcount=0;
  cout<<"Enter a phrase";
  do{
     ch=getche();
     if(ch==' ' || ch=='\r')
     {
        if(word==YES){
           wordcount++;
           word=NO;
        }
     }
     else{
        if(word==NO)
       word=YES;
     }
  }while(ch!='\r');
  cout<<"Word Count is"<<wordcount<<"\n";
   return 0;
}