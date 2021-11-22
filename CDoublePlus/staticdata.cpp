#include<iostream>
using namespace std;
class test{
   private:
    //int count=0;//non-static
    static int count; //declaration only
   public:
   /*
    test(){count++;}
   */
    int setCount(int one){
       count=one;
    }
     int getcount(){
        return count;
     }
};
int test::count=0;
int main()
{
   test t1,t2;

   
   t1.setCount(1);
   t2.setCount(2);
   cout<<"count 1 is"<<t1.getcount()<<endl;
   cout<<"count 2 is"<<t2.getcount()<<endl;
   //cout<<"count 3 is"<<t3.getcount()<<endl;
   return 0;
}