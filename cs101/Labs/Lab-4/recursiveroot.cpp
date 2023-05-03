#include<simplecpp>

main_program{
int n;
float y=sqrt(2);
cin>>n;
repeat(n-1){
y=sqrt(y+2);}
cout<<fixed;
cout.precision(2);
cout<<y;


}
