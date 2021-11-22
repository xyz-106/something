#include<iostream>
using namespace std;
class ArrayClass{
   private:
    int arr[100];
   public:
     void insertData(int index,int numbers){
        arr[index]=numbers;
     }
     int getData(int size){
        return arr[size];
     }
};
int main(){
   ArrayClass arcls;
   for(int j=0;j<100;j++){
      arcls.insertData(j,j*2);//0,0 1 2 2 4 //3 6
   }
   for(int j=0;j<100;j++){
      cout<<"Element "<<j<<"is"<<arcls.getData(j)<<endl;
   }
}