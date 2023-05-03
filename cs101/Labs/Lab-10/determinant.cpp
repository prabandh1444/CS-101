#include<simplecpp>
int det(int n,int a[][5])
{int dete=0,sign=1;
if(n==1) return a[0][0];
for(int i=0;i<n;i++){int c[n-1][5];
for(int j=1;j<n;j++){for(int k=0;k<n;k++){if(k<i)c[j-1][k]=a[j][k];
if(k>i)c[j-1][k-1]=a[j][k];}}
dete=dete+(a[0][i]*sign*det(n-1,c));
sign=-sign;
}
return dete;
}
main_program{
int m;
cin>>m;
int a[m][5];
for(int i=0;i<m;i++){for(int j=0;j<m;j++){cin>>a[i][j];}
}
cout<<det(m,a);
}

