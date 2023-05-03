#include<simplecpp>

int armstrong (int n)

 {int i=1,j=1,k=1,sum=0,l=1;

 while(n!=0){j=i;while(i/10!=0){i=i/10;k++;}i=j;while(i!=0){int h;h=(i%10);repeat(k){l=l*h;}sum=sum+l;i=i/10;l=1;}
 i=j;
 if(sum==i)n=n-1;
 i++;
 sum=0;
 k=1;
 }
 return i-1;}


