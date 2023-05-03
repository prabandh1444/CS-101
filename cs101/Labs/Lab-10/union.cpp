#include<simplecpp>

main_program{
int n1,n2;
cin>>n1>>n2;
char a[n1],b[n2],c[(n1+n2)];
for(int i=0;i<n1;i++){cin>>a[i];}
for(int i=0;i<n2;i++){cin>>b[i];}
int l=0;
for(int i=0;i<n1;i++){for(int j=0;j<n2;j++){if(a[i]==b[j])l++;}}
int i=0,j=0;
for(int k=0;k<(n1+n2-l);k++)
{if(i<n1&&j<n2)
{if(a[i]<b[j]) {c[k]=a[i];i++;}
if(a[i]>b[j]) {c[k]=b[j];j++;}
if(a[i]==b[j]) {c[k]=b[j];j++;i++;}
}
else if(i<n1){c[k]=a[i];i++;}
else if(j<n2){c[k]=b[j];j++;}
}
for(int i=0;i<(n1+n2-l);i++){cout<<c[i]<<" ";}

}
