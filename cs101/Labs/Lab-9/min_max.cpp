#include<simplecpp>
int rigidvalue(int n,int *a,int z)
{
int b=0,c=0;
a[z]=a[z-1];
for(int i=1;i<=n-2;i++){if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]>a[i-1]&&a[i]>a[i+1]))b++;}
a[z]=a[z+1];
for(int i=1;i<=n-2;i++){if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]>a[i-1]&&a[i]>a[i+1]))c++;}
return min(b,c);
}
main_program{
int n,k;
cin>>n;
int a[n];
for(int i=0;i<=n-1;i++){cin>>a[i];}
k=rigidvalue(n,a,1);
for(int i=1;i<=n-2;i++)k=min(k,rigidvalue(n,a,i));
cout<<k;
}
