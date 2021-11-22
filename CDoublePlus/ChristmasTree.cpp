#include<iostream>
using namespace std;
unsigned int Maxrow,j;

int main(){
      Start:cout<<"plz enter number of rows:";
      cin>>Maxrow;
      if(Maxrow<70){
   for(j=1;j<=Maxrow;j++){
     for(int i=0;i<(Maxrow-j);i++){
           cout<<" ";
          }
     for(int i=0;i<(2*j)-1;i++){
          cout<<"*";
         } cout<<endl;}}
         else{goto Start;}
         return 0;
}

