#include<iostream>
#include<ctime>

#include<stdio.h>
using namespace std;
class Date
{
    int month,day,year;
public:
    Date(time_t noww)
    {
     tm* tim=localtime(&noww);
         day=tim->tm_mday;
         month=tim->tm_mon+1;
         year=tim->tm_year;
         if(year>=100) year-=100;
    }    
    void display()
    {
      char yr[5];
      if(year<10) sprintf(yr,"0%d",year);
      else        sprintf(yr,"%d",year);
      cout<<month<<"/"<<day<<'/'<<yr<<endl;
    }
};
int main()
{
   //struct tm * ptm;

 // time ( &rawtime );

  //ptm = gmtime ( &rawtime );
  //gmtime=>  tm=UTC Time format 
time_t now;
time(&now);
//cout<<"Now "<<gmtime(&now)<<endl; 
//cout<<"Now "<<asctime(&now)<<endl;
Date dt(now);
//cout<<asctime(gmtime(&now))<<endl;
 dt.display();
 cout<<endl;
 return 0;
}