#include<iostream>
using namespace std;
int main(){
   int line;int arr[3]={};int temp=0;
   cout<<"Enter the line ";
   cin>>line;
   string ans[line];
   for(int i=0;i<line;i++){
      for(int j=0;j<3;j++){
          cin>>arr[j];
      }
      if(arr[0]>arr[1]){
         temp=arr[0];
         arr[0]=arr[1];
         arr[1]=temp;
      }
      if(arr[0]+arr[1]==arr[2] ||
        arr[0]-arr[1]==-(arr[2])||
        arr[0]*arr[1]==arr[2] ||
        arr[0]/arr[1]==arr[2]     
      ){
        ans[i]="Possible";
      }
      else{
         ans[i]="Impossible";
      }
   }
  for(int x=0;x<line;x++){
     cout<<ans[x]<<endl;
  }
}