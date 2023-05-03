#include<simplecpp>

main_program{
int m,n,k,i,j,z;
cin>>m>>n;
i=m;j=n;
while(m%n!=0){k=m%n;m=n;n=k;}
z=(i*j)/n;
cout<<z;
}
