#include<simplecpp>

int count_ways(int n){
if(n==1){return 1;}
if(n==2){return 2;}
if(n==3){return 4;}
if(n==4){return 8;}
if(n==5){return 16;}
if(n==6){return 32;}
else return count_ways(n-1)+count_ways(n-2)+count_ways(n-3)+count_ways(n-4)+count_ways(n-5)+count_ways(n-6);
}

