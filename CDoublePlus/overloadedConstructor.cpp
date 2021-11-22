#include<iostream>
using namespace std;
class Distance
{
   private:
    int feet;
    float inches;
   public:
     Distance():feet(0),inches(0.0){} //consturctor no args
     Distance(int ft,float in){
     this->feet=ft;
     this->inches=in;
     } //construtor(two args)
     //get length from user
     void getdist()
     {
        cout<<"\nEnter feet: ";cin>>feet;
        cout<<"Enter inches:";cin>>inches;
     }
     void showdist() const
     {
        cout<<feet<<"\'"<<inches<<"\"";
     }
     Distance add_dist(const Distance) const;  //delclartion
};
Distance Distance::add_dist(const Distance d2)const{
   Distance temp;
   temp.inches=inches+d2.inches;
   if(temp.inches>=12.0){
      temp.inches-=12.0;
      temp.feet=1;
   }
   temp.feet+=feet+d2.feet;
   return temp;
}
int main(){
   Distance dist1;
   dist1.getdist();
   Distance dist2(11,5.5);
   Distance dist3;
   dist3=dist1.add_dist(dist2); //dist3=dist1+dist2
   cout<<"\n dist1 =";dist1.showdist();
   cout<<"\n dist2 =";dist2.showdist();
   cout<<"\n dist3 =";dist3.showdist();
   cout<<endl;
   return 0;
}