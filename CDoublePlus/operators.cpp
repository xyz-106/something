#include<iostream>
#include<string>
using namespace std;

class phoneDivision{
  
  private:
  string tele_num;
  string owner;
  public:
    void setNumber(string ss){
       tele_num=ss;
    }
    string getNumber(){
       return tele_num;
    }
    void setOwner(string phoneOwner){
       owner=phoneOwner;
    }
    string getOwner(){
       return owner;
    }
};
int main(){
   phoneDivision phdivision;
   string num;
   cout<<"Enter Number ";
   cin>>num;   //097889
   int cut=num.find("09");
   string s1=num.substr(cut,3);
  
   if(s1=="097"){
      phdivision.setNumber("Telenor");
   }
   else if(s1=="099"){
      phdivision.setNumber("Ooreedoo");

   }
   else{
      phdivision.setNumber("MPT");
   }
    phdivision.setOwner("Hein Htet");
   cout<<"Owner is "<<phdivision.getOwner();
   cout<<phdivision.getNumber();
   return 0;
}