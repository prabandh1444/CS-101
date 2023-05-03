#include<simplecpp>

main_program{
int n,i=2;
cin>>n;
repeat(n){cout<<"*";}cout<<endl;
repeat(n-2){repeat(n-i){cout<<" ";}cout<<"*";repeat(i-1){cout<<" ";}cout<<endl;
i++;}
repeat(n){cout<<"*";}cout<<endl;
}
