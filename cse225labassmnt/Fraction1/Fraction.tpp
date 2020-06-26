#include "Fraction.h"
Fraction::Fraction(int n,int d){
                   num=n;
                   den=d;
                   }
int Fraction::getNum(){
return num;
}
void Fraction::setNum(int n){
    num=n;
}
int Fraction::getDen(){
return den;

}
void Fraction::setDen(int d){
                 den=d;
                      }

void Fraction::print(){
cout<<num<<"/"<<den<<endl;
}
Fraction Fraction::operator*(Fraction f){

    int numerator  = num * f.num;
    int denominator= den *f.den;
    Fraction result(numerator,denominator);
    return result;
}

















