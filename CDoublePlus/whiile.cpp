#include<iostream>
using namespace  std;
int main()
{ 
   int size,temp=1;
   cout<<"Enter your array size ";
   cin>>size;
    int arr[size]; //arr[5]
 
   for(int i=0;i<size;i++){
     cin>>arr[i]; //example:98 45 13 21 34                        
   }
   for(int i=0;i<size;i++){         
      for(int j=i+1;j<size;j++){ 
         if(arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }
   //cout<<"This is output ";
   for(int i=0;i<size;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
} 