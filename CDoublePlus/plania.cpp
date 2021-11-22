#include<iostream>
#include<cmath>
using namespace std;

unsigned int A,N;
unsigned long int B;
unsigned long int* pb=&B;
void calPoint(int n){
    A=pow(2,N)+1;
    *pb=A*A;
 }
 void displayPoint(){
     cout<<"The total points==>"<<*pb;
 }
int main(){
  START:cout<<"Plz Enter \"N\"(at leat 1 and at most 15):";
  cin>>N;
  if(N<1 || N>15){goto START; }
  else calPoint(N);displayPoint();   
    return 0;
}
