#include<iostream>
#include<cstring>
using namespace std ;
class db{
    public :
    int rollNo ;
    char name [100] ,dob[50] ,address[50] ,bg[10] ,lience[20] ;
   static int stdno ;
   static void count(){
    cout<<"numbers of object are"<<stdno ;
   }
   void fin(){
    cout<<"this is inline function"<<endl ;
   }
   db(){
    rollNo = 1 ;
    strcpy(name ,"Anurag")  ;
    strcpy(dob ,"15AUG")  ;
    strcpy(address ,"Amt")  ;
    strcpy(bg ,"O +ve")  ;
    strcpy(lience ,"123")  ;

   ++stdno ;

   }
   db(db * obj){
    strcpy(name ,obj ->name)  ;
    strcpy(dob ,obj ->dob)  ;
    strcpy(address ,obj ->address)  ;
    strcpy(bg ,obj ->bg)  ;
    strcpy(lience ,obj ->lience)  ;
    ++stdno ;
   }
  void getdata(){
    cout<<"\n\n enter name ,dob,address,bg,lience"<<endl ;
    cin>>name>>dob>>address>>bg>>lience ;
  }
  friend void display(db d) ;
  ~db(){
    cout<<this -> name <<" object is destroyed" ;
  }
} ;
void display(db d){
    cout<<d.name <<endl ;
    cout<<d.dob <<endl ;
    cout<<d.address <<endl ;
    cout<<d.bg <<endl ;
    cout<<d.lience <<endl ;
    


} int db :: stdno ;
int main(){
 
 db d1 ,d2  ;
 cout<<"displaying constructor data" <<endl ;
 display(d1) ;
d2.getdata() ;
display(d2) ;
    return 0;
}
