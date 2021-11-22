#include<iostream>
using namespace std;
int main(){
   int line;int temp=0;
   cout<<"Enter the line ";
   cin>>line;
  int arr[line][3];
  string ans[line];
  for(int row=0;row<line;row++){
     for(int col=0;col<3;col++){
        cin>>arr[row][col];  
     }
     if(arr[row][0]>arr[row][1])
     {
         temp=arr[row][0];
         arr[row][0]=arr[row][1];
         arr[row][1]=temp;
     }  
     if(arr[row][0]+arr[row][1]==arr[row][2]||
        arr[row][0]-arr[row][1]==-(arr[row][2])||
        arr[row][0]*arr[row][1]==arr[row][2] ||
        arr[row][0]/arr[row][1]==arr[row][2]
     )
     {
        ans[row]="Possible";
     }
     else{
        ans[row]="Impossible";
     }
  }

   for(int x=0;x<line;x++){
     cout<<ans[x]<<endl;
  }
  return 0;   
}