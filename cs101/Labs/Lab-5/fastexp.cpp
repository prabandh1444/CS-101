#include<simplecpp>

main_program{
long unsigned int x,n,b=1,k ;
cin>>x>>n>>k;
while(n>0){if(n%2==1)
{b=(b*x)%k;}n=n/2;
x=(x*x)%k;}
cout<<b;
}

