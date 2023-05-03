#include<simplecpp>
#include<math.h>

main_program{
initCanvas("karthikeya loves me",500,500);
int k=getClick(),p=getClick(),x1,x2,y1,y2;
x1=k/65536;x2=p/65536;
y1=k%65536;y2=p%65536;
Circle c(200,200,50);
Rectangle s(200,200,100,100);
Line l(x1,y1,x2,y2);
s.rotate(atan2(y2-y1,x2-x1));
wait(100);

}
