#include<simplecpp>

main_program{
int n;
cin>>n;
int c[n],ar1[n],ar2[n],diff[n],maxsofar;
for(int i=0;i<=n-1;i++){cin>>c[i];}
for(int i=0;i<=n-1;i++){for(int j=0;j<=n-1;j++){if(c[i]==c[j]){ar1[i]=j;break;}}}
for(int i=0;i<=n-1;i++){for(int j=n-1;j>=0;j--){if(c[i]==c[j]){ar2[i]=j;break;}}}
for(int i=0;i<=n-1;i++){diff[i]=ar2[i]-ar1[i];}
maxsofar=diff[0];
for(int i=0;i<=n-1;i++){maxsofar=max(maxsofar,diff[i]);}
cout<<maxsofar<<endl;

}
