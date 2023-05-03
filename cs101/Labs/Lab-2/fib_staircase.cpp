#include<simplecpp>

main_program{
int i=1,j=1,k=1,n;
cin>>n;
repeat(2){cout<<"*"<<endl;}
repeat(n-2){i=j;
j=k;
k=j+i;
repeat(k){cout<<"*";}
cout<<endl;
}



}
