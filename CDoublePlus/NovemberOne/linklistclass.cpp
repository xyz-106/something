#include<iostream>
using namespace std;
struct link
{
   int data;
   link* next;   //pointer to next link
};
class linklist{
   private:
     link* first;
   public:
     linklist(){first=NULL;}  //linklist():first(NULL){}
     void additem(int d);
     void display();
};
void linklist::additem(int d)
{
   link* newlink=new link;
   newlink->data=d;
   newlink->next=first; 
   first=newlink; 
}
void linklist::display(){
   link* current=first;
   while(current!=NULL){
      cout<<current->data<<endl;
      current=current->next;
   }
}

int main(){
   linklist li;
   li.additem(23);
   li.additem(22);
   li.display();
   return 0;
}