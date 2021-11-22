#include<iostream>
#include<cstring>
using namespace std;
const int LEN=80; //length of expressions,in characters
const int MAX=40; //size of stacks

class Stack{
   private:
    char st[MAX];
    int top;
   public:
     Stack(){top=0;}
     void push(char var){st[++top]=var;}
     char pop(){return st[top--];}
     int gettop(){return top;}
};
class express{
   private:
   Stack s;
   char* pStr; //pointer to input String
   int len;
   public:
   express(char* ptr){
      pStr=ptr;
      len=strlen(pStr);
   }
   void parse();
   int solve();
};

void express::parse(){
   char ch;
   char lastval;
   char lastop;
//5*6+6/2
   for(int j=0;j<len;j++){
      ch=pStr[j];

      if(ch>='0' && ch<='9')  s.push(ch-'0');//save numerical value
      else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
         if(s.gettop()==1)s.push(ch);
         else{
            lastval=s.pop(); //get previous digit 6
            lastop=s.pop();  //get previous operator *
                           //ch=+,lastop=*,lastval=6
                           //ch=/,lastval=6,lastop=+
            if((ch=='*' || ch=='/') && (lastop=='+' || lastop=='-'))
            {
               s.push(lastop);
               s.push(lastval);
            }
            else{
               switch (lastop)
               {
               case '+':
                s.push(s.pop()+lastval);break;
               case '-':
                s.push(s.pop()-lastval);break;
               case '*':
                s.push(s.pop()*lastval);break;
               case '/':
                s.push(s.pop()/lastval);break;
               
               default:
                  cout<<"Unkonwn oper";exit(1);
               }
            }
            s.push(ch);
         }
      }
      else{
         cout<<"Unkown Input character";exit(1);
      }
   }
}

int express::solve(){
   char lastval;
   while(s.gettop()>1){
      lastval=s.pop(); //lastval=3
      switch (s.pop())//+ 
      {
      case '+':s.push(s.pop()+lastval);break;
      case '-':s.push(s.pop()-lastval);break;
      case '*':s.push(s.pop()*lastval);break;
      case '/':s.push(s.pop()/lastval);break;      
      default: cout<<"Unkonw operator";exit(1);
      }
   }
   return int(s.pop());
}
int main(){
   char ans;
   char string[LEN];

   cout<<"Enter an arithmeticexpression of the form 2+3*4/3-2";
   do{
      cout<<"Enter expression";
      cin>>string;
      express* eptr=new express(string);
      eptr->parse();
      cout<<"The numerical value is:"<<eptr->solve();
      delete eptr;
      cout<<"Do another (Enter y or n)?";
      cin>>ans;

   }while(ans=='y');
   return 0;
}