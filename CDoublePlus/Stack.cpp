#include<iostream>
using namespace std;
class Stack{
  public:
   int arr[10];
   int *pointer=arr;
   int index=0;
  public:

    void push(int var){
       *(pointer++)=var;
     cout<<"Address"<<pointer<<endl;
        
      //arr[index]=var;
      //index++;   arr[index++]  11
                   //arr[--index]   10   
    }
    int pop(){
   cout<<"Address"<<pointer<<"\t";
   pointer--;
     return * pointer;  
   // index--;
    //return arr[index];
    }
};
int main(){
   Stack s1;
   s1.push(11);s1.push(22);s1.push(33);s1.push(44);
   s1.push(55);s1.push(66);s1.push(77);s1.push(88);
   s1.push(99);s1.push(100); //9
   cout<<"This is index"<<s1.index<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;  cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;  cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
      cout<<s1.pop()<<endl;
    
   return 0;
}