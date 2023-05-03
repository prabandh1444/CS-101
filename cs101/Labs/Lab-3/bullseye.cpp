#include<simplecpp>

main_program{
initCanvas("bullseye",1000,1000);
Circle c5(500,500,180);
c5.setFill(true);
Circle c4(500,500,140);
c4.setColor(COLOR("yellow"));
c4.setFill(true);
Circle c3(500,500,100);
c3.setFill(true);
Circle c2(500,500,60);
c2.setColor(COLOR("yellow"));
c2.setFill(true);
Circle c1(500,500,20);
c1.setColor(COLOR("red"));
c1.setFill(true);
wait(100);
}
