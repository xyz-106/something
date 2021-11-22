#include<iostream>
using namespace std;
int main(){
   int intvar; 
   float floatvar;
   int* ptrint;
   float* ptrflo;
   void* ptrvoid;  //ptrvoid can point to any data type
   ptrint=&intvar;
   ptrflo=&floatvar;
   //ptrint=&floatvar;
   ptrvoid=&intvar;
   ptrvoid=&floatvar;

   return 0;
}