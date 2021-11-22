#include<iostream>
using namespace std;
unsigned int N,j,sum;//global variables
void Result(int*);//prototype of the function

int main(){//main function
    Start:cout<<"Plz Enter the number of steel rods(1<N<=100):";//collecting number of rods
          cin>>N;
          int arr[N];
  if(N<1 || N>100){goto Start;}//filter
  else for(int i=0;i<N;i++){
    Holdup:cout<<"Plz enter the length(1~50)_cm:";//collecting lengths
           cin>>j;
  if(j<1 || j>50){cout<<"Out of limit(1~50)\n";goto Holdup;}//filter
   else {arr[i]=j;}}//assigning values
int* parr=arr;//pointer to array
Result(parr);//calling function
cout<<"The Result is==>"<<sum-(N-1)<<"cm"<<endl;//Printing the Result
return 0;
}
void Result(int* arr){//another funtion
 for(int i=0;i<N;i++){//main algorithm
    sum+=*(arr++);   
  }
}