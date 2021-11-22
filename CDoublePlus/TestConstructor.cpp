#include<iostream>
using namespace std;
class Counter
{
  private:
    int count;
  public:
    //constructor
    Counter():count(3)
    {}
    void inc_count(){
       count++;
    }
    int get_count(){
       return count;
    }
};
int main(){
   Counter c1,c2;
   c1.inc_count();
   c2.inc_count();
   cout<<c1.get_count()<<endl;
   cout<<c2.get_count()<<endl;
   return 0;
}