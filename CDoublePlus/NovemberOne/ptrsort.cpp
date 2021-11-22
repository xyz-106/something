#include<iostream>
using namespace std;

int main(){
   void bsort(int*,int);
   int N=10;
   int arr[N]={37,11,23,42,100,12,4,2,10,22};
   bsort(arr,N);
   return 0;
}
void bsort(int* ptr,int n){
   void order(int*,int*);
   int j,k;
   for(j=0;j<n-1;j++){
      for(k=j+1;k<n;k++){
         order(ptr+j,ptr+k);  
      }
   }
}
void order(int* numb1,int* numb2){
   if(*numb1>*numb2){
      int temp=*numb1;
      *numb1=*numb2;
      *numb2=temp;
   }
}