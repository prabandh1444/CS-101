#include<simplecpp>

main_program{
double x,n; cin >> x>>n;
 double s=0,t=1,a;
 for(int k=0; k<=n-1; k++){
 s = s + t;
 t = - t * x * x/(2*k+1)/(2*k+2);
 }
 a=x*s;
 cout<<fixed;
 cout.precision(2);
 cout<<a;

}
