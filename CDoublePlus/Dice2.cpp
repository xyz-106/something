#include<iostream>
using namespace std;
int a,b;
int main(){
    cout<<"Welcome To Dice Rolling"<<endl;
    cout<<"number of faces is at least 4 faces and\n";
    cout<<"no more than 20 faces"<<endl;
   START:cout<<"Plz Enter\"a\" (The number of faces of first dice):";
   cin>>a;
   cout<<"And enter faces of the second dice:";
   cin>>b;
   if(a,b<4 || a,b>20){goto START;}//Limiting user input
   else if(a>b){
   for(int i=(b+1);i<=(a+1);i++){
 cout<<i<<" ";
   }}else if(a<b){
    for(int i=(a+1);i<=(b+1);i++){
    cout<<i<<" ";
    }
   }else if(a==b){cout<<++a<<endl;}
return 0;
}