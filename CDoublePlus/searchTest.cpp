#include<iostream>
using namespace std;

int sort(int arr[],int num){
int temp;
for(int i=0;i<num;i++){
   for(int j=i+1;j<num;j++){
      if(arr[i]>arr[j]){
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
      }
   }
}
return arr[num];
}
void searchfunc(int arr[],int num,int value){
   int First=0,Last=0,mid=0,Flag=0;
   Last=num-1;
   while(First<=Last && (Flag!=1)){
         mid=First+Last/2;
         if(arr[mid]==value){
            Flag=1;
         }
         else if(arr[mid]>value){
            Last=mid-1;
         }
         else if(arr[mid]<value){
            First=mid+1;
         }

   }
   if(Flag==0){
      cout<<"Not Found";
   }
   else {
      cout<<"Found";
   }
}
int main(){
   int search_num,size;
   cout<<"Enter the Search Number";
   cin>>search_num;
   cout<<"Enter room?";
   cin>>size;
   int arr[size];
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
   arr[size]=sort(arr,size);
   //search Binary [sorting]
   searchfunc(arr,size,search_num);
   return 0;
}