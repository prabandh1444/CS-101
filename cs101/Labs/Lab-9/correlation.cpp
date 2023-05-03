#include<simplecpp>

main_program{
int n;
cin>>n;
double s1[n],s2[n],sum1=0,sum2=0,ssum1=0,ssum2=0,pro=0,den1,den2,num,den,corr;
for(int i=0;i<=n-1;i++){cin>>s1[i];}
for(int i=0;i<=n-1;i++){cin>>s2[i];}
for(int i=0;i<=n-1;i++){sum1=sum1+s1[i];}
for(int i=0;i<=n-1;i++){sum2=sum2+s2[i];}
for(int i=0;i<=n-1;i++){ssum1=ssum1+(s1[i]*s1[i]);}
for(int i=0;i<=n-1;i++){ssum2=ssum2+(s2[i]*s2[i]);}
for(int i=0;i<=n-1;i++){pro=pro+(s1[i]*s2[i]);}
num=(n*pro)-(sum1*sum2);
den1=sqrt((n*ssum1)-(sum1*sum1));
den2=sqrt((n*ssum2)-(sum2*sum2));
den=den1*den2;
if(den==0){cout<<"-1"<<endl;}
else {corr=num/den;cout<<fixed;cout.precision(2);cout<<corr<<endl;}
}
