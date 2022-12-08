#include<iostream>
#include<stdio.h>
using namespace std ;
class publication {
    private :
    string title ;
    float price ;
     
     public :
     void add(){
        cout<<"Enter Publication information"<<endl ;
        cout<<"Enter tittle of book"<<endl ;
        cin.ignore() ;
        getline(cin ,title) ;
        cout<<"Enter the price of book"<<endl;
        cin>>price ;


     }
   void display(){
    cout<<"Title of book is "<<title<<endl ;
    cout<<"Price  of book is "<<price<<endl ;

   }
   
};
class book : public publication {
    private :
    int pagecnt ;
    public :
    void addbook(){
        try {
            add() ;
            cout<<"page count"<<endl ;
            cin>>pagecnt ;
        
        if(pagecnt < 0){
            throw pagecnt ;
        } 
        }
        catch(...){
            cout<<"invalid page count "<<endl ;
            pagecnt = 0 ;
        }
    }
    void dispalaybook (){
        display() ;
        cout<<"Count of pages in book is "<<pagecnt<<endl  ;
    }
};
class tape : public publication {
      private : 
      float playdur ;
      public :

      void addtape(){
        try {
            add() ;
            cout<<"Enter the duration in minute of tape"<<endl ;
            cin>>playdur ;
            if(playdur < 0 ){
                throw playdur ;
            } 
           
        }
         catch(...){
                cout<<"Please enter valid duration"<<endl ;
                playdur = 0 ;
            }
      }
      void displaytape(){
        display() ;
        cout<<"Duration of tape is"<<playdur<<endl ;
      }
};

int main(){
    book b[10] ;
    tape t [10] ;
   int ch ,bcnt = 0 , tcnt = 0 ;
   cout<<"enter 1 "<<endl ;
  
   do {
    cout<<"PUBLICATION DATABASE SYSTEM"<<endl ;
    cout<<"************MENU***********"<<endl ;
    cout<<"\n1.Add informtion of book"<<endl ;
    cout<<"\n2.Add informtion of tape"<<endl ;
    cout<<"\n3.Display informtion of book"<<endl ;
    cout<<"\n4.Display informtion of tape"<<endl ;
    cout<<"\n5.Exit"<<endl ;
    cin>>ch ;
    switch(ch){
        case 1 :
           b[bcnt].addbook() ;
            bcnt ++ ;
             break; 
        case 2 :
             t[tcnt].addtape() ;
             tcnt ++ ;
             break ;
        case 3 :
            for(int  i = 0 ; i< bcnt ; i++){
              b[i].dispalaybook() ;
             }
            break;
        case 4 :
                for(int  i = 0 ; i< tcnt ; i++){
                     t[i].displaytape() ;
                     }
                    break;
        case 5 :
            exit(0) ;

    }

   }while( ch !=5 ) ;
    return 0;
}
