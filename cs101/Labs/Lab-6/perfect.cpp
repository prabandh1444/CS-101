#include<simplecpp>

int perfect(int n){
int i=1,sum=0;
while(i<n) {if(n%i==0)sum=sum+i;i++;}
if (sum==n)return 1;
else return 0;}
