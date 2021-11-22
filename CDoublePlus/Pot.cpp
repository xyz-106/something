//Pot problem
#include<iostream>
#include<cmath>
using namespace std;
int N,R,Q,j=0;
double sum=0;
double* ptrs=&sum;
void calculate(int arr[]){
    for(int i=0;i<N;i++){
     if(arr[i]<10){*ptrs+=0;}
        else if(arr[i]>=10){
         Q=arr[i]/10;//all digit except last digit
         R=arr[i]%10;//last digit
        *ptrs+=pow(Q,R);//*ptrs=*ptrs+pow(Q,R)
        }
    }
    cout<<"The result is==>"<<int(*ptrs);//*ptrs
}
int main(){
  START:cout<<"Plz Enter the number of integers (at least 1 and at most 10):";
  cin>>N;
 int arr[N];
 if(N>10 || N<1){goto START;}
 else while(j<N){
  cout<<"Plz Enter the number:";
  cin>>arr[j];
  ++j;
 }cout<<endl;
calculate(arr);

     return 0;
 }