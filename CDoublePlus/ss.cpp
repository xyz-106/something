#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char ch='y';
    int marks;
    while (ch!='n')
    { cout<<"Etner your marks";
      cin>>marks;
      if(marks>90){
        cout<<"Grade A ";
      }
      else if(marks>80 && marks<=90)
      {
        cout<<"Grade B";
      }
      else if(marks>50 && marks<=80){
        cout<<"Grade C";
      }
      else if(marks>=40 && marks<=50){
        cout<<"Gade D";
      }
      else{
        cout<<"Grade E";
      }
      cout<<"Enter to exit loop ";
      cin>>ch;
    }
    
   
    return 0;
}