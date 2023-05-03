#include<simplecpp>

int W(int n){
if(n<=2){return 1;}
else return W(n-1)+W(n-2)+W(n-3);
}
