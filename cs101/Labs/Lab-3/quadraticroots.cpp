#include<simplecpp>

main_program{
int a,b,c;
cin>>a>>b>>c;
if(b*b-4*a*c>0)cout<<"real and distinct" <<endl;
if(b*b-4*a*c==0)cout<<"real and same" <<endl;
if(b*b-4*a*c<0)cout<<"complex" <<endl;

}
