#include<iostream>
using namespace std;
class Counter{
   private:
    int count=2;
   public: 
    int get_count(){
       return count;
    } //member data return 
   void operator ++(){ //operator keywords 
       count=count-2; //unary operator overloading
    }
};
int main(){
   Counter c1,c2;
   cout<<"c1 is"<<c1.get_count()<<endl; 
   cout<<"c2 is"<<c2.get_count()<<endl;

   ++c1;
   ++c2;

   cout<<"c1 is"<<c1.get_count()<<endl;
   cout<<"c2 is"<<c2.get_count()<<endl;
   return 0;
}