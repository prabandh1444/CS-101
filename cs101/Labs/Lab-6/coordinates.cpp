#include<simplecpp>

void print_coordinates(int n){int i=0,x=0,y=0;
repeat(n)
 {char m;
 cin>>m;
 if(m==76)i++;
 if(m==70){if(i%4==0)x=x+1;if(i%4==1)y=y+1;if(i%4==2)x=x-1;if(i%4==3)y=y-1;}}
 cout<<x<<" "<<y;
 return;}
