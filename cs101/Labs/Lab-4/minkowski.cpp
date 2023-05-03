#include<simplecpp>
#include<math.h>

main_program{
float n,p,u,v;
float z=0,y;
cin>>n>>p;
repeat(n){cin>>u>>v;
z=z+pow(abs(u-v),p);}
y=pow(z,1/p);
cout<<fixed;
cout.precision(2);
cout<<y;
}
