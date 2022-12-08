#include<iostream>
#include<fstream> 
using namespace std ;
class complex{
    public : 
    float real ,img ;
    complex (){
        real =0 ;
        img = 0 ;
    }
    complex  operator + (complex) ;
    complex  operator * (complex) ;
    friend ostream & operator <<(ostream & ,complex &) ;
    friend istream & operator >> (istream & ,complex &) ;

    } ;
istream & operator >> (istream &is  ,complex & obj){
    is>>obj.real ;
    is>>obj.img ;
    return is ;
}
ostream & operator<<(ostream & outt,complex & obj) {
    outt<<" "<<obj.real ;
    outt<<"+ "<<obj.img<<"i"<<endl;
    return outt ;
}
complex complex:: operator + (complex obj){
    complex temp ;
    temp .real = real + obj.real ;
    temp .img = img + obj .img ;
    return temp ;
} 
 complex complex :: operator *(complex obj){
    complex temp ;
    temp .real = real*obj.real -img * obj.img ;
    temp .img = real *obj.img + img * obj.real ;
    return temp ;
 }
int main(){
    complex a ,b,c,d ;
   cin >> a ;
   cin >> b ;
    c = a + b ;
    d = a * b ;
    cout<<c ;
    cout<<d ;

    return 0;
}
