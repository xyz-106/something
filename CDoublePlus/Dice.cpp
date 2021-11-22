#include<iostream>
using namespace std;
int a,b;
int main(){
    cout<<"Welcome To Dice Rolling"<<endl;
    cout<<"number of faces is at least 4 faces and\n";
    cout<<"number of same-type dices is no more than 20"<<endl;
   START:cout<<"Plz Enter\"a\" (The number of faces):";
   cin>>a;
   cout<<"And enter how many dice you want to roll:";
   cin>>b;
   if(a<4 || b>20){goto START;}//Limiting user input
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