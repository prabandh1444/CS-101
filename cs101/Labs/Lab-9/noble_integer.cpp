#include<simplecpp>

main_program{
int n,x=0;
cin>>n;
int q[n];
for(int i=0;i<=n-1;i++){cin>>q[i];}
for(int i=0;i<=n-1;i++){int k=0; for(int j=0;j<=n-1;j++){if(q[i]-q[j]<0)k++;}if(k==q[i]){cout<<"1";}if(k==q[i])break; x++;}
if(x==n){cout<<"0";}
}
