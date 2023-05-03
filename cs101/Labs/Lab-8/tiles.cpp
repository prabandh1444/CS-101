#include<simplecpp>

int min_tiles(int w, int h)
{if(w<h){int x;x=w;w=h;h=x;}
int x;
 x=h;
 int a=1,b,k;
 while(x>0){x=x/2;a=a*2;}
 a=a/2;
 k=log2(a);
for(int i=0;i<=k;i++)
 { if(h==w&&h==int(pow(2,i)+1e-9)) return 1;
 }
 if(h>a&&w>a){return min_tiles(a,a)+min_tiles(w,h-a)+ min_tiles(w-a,a);}
 if(h==a&&w>a) return min_tiles(a,a)+ min_tiles(w-a,a);
}
