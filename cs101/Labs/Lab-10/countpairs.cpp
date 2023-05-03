#include<simplecpp>

main_program{
int n,l,r;
cin>>n>>l>>r;
int a[n];
for(int i=0;i<n;i++){cin>>a[i];}
int k=0,m=0;
for(int i=0;i<n;i++){for(int j=0;j<n;j++){if(a[i]+a[j]>=l&&a[i]+a[j]<=r)k++;}}
for(int i=0;i<n;i++){if(2*a[i]>=l&&2*a[i]<=r)m++;}
cout<<(k-m)/2;
}
