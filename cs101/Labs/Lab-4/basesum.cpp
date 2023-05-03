#include<simplecpp>
#include<math.h>

main_program{
int b1,n1,b2,n2;
cin>>b1>>n1>>b2>>n2;
int N1=0,N2=0,i=0,j=0,z;
while(n1!=0){N1=N1+(n1%10)*pow(b1,i);i++;n1=n1/10;}
while(n2!=0){N2=N2+(n2%10)*pow(b2,j);j++;n2=n2/10;}
z=N1+N2;
cout<<z;
}
