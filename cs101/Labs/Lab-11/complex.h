#include<iostream>
using namespace std;
#include<cmath>
struct Complex{
double real,imag;
void print(){
if(imag>=0)
cout<<real<<" "<<"+"<<" "<<imag<<"i"<<endl;
if(imag<0)
cout<<real<<" "<<"-"<<" "<<-imag<<"i"<<endl;}
double modulus(){
return sqrt(real*real+imag*imag);}
double argument(){
if(imag>0&&real>0)
return atan2(imag,real);
if(imag<0&&real<0)
return -4*atan2(1,1)+atan2(imag,real);
if(imag>0&&real<0)
return 4*atan2(1,1)+atan2(imag,real);
if(imag<0&&real>0)
return atan2(imag,real);
}
double abs_angle_between(Complex c){
double x,y;
x=(real)*(c.real)+(imag)*(c.imag);
y=sqrt((c.real*c.real)+(c.imag*c.imag))*(sqrt(real*real+imag*imag));
return acos(x/y);
}
Complex conjugate(){
Complex k;
k.real=real;k.imag=-imag;
return k;}
Complex add(Complex c){
Complex k;
k.real=real+c.real;k.imag=imag+c.imag;
return k;}
Complex multiply(Complex c){
Complex k;
k.real=(c.real*real-imag*c.imag);
k.imag=(c.real*imag+c.imag*real);
return k;}
};
