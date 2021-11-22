#include<iostream>
using namespace std;
class Distance{
  private:
    int feet;
    float inches;
  public:
    void getdist()
    {
       cout<<"enter feet:";cin>>feet;
       cout<<"Enter inches:";cin>>inches;
    }
    void showdist(){
       cout<<feet<<"-"<<inches<<'\"';
    }
};
int main(){
  /* Distance dist;
   dist.getdist();
   dist.showdist();

   Distance* distptr=new Distance; //Distance class new keywords ကိုသုံးပီး obj တခုကိုpointထောက်
   distptr->getdist();
   distptr->showdist();
   delete distptr;*/
   
   Distance& distptr=*(new Distance);
   distptr.getdist();
   distptr.showdist();
   
   return 0;
}