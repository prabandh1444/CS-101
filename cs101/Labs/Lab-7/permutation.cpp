#include<simplecpp>

void permutation(int &a, int &b, int &c, int n)
{int x,y,z;
x=a;y=b;z=c;
if(n==2){b=z;c=y;}
if(n==3){a=y;b=x;}
if(n==4){a=y;b=z;c=x;}
if(n==5){a=z;b=x;c=y;}
if(n==6){a=z;c=x;}
return;}
