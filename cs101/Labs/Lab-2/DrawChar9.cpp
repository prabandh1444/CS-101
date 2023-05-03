#include<simplecpp>

main_program{
int nlength;
cout << "length of side";
cin >> nlength;
turtleSim();
forward(nlength);left(90);forward(2*nlength);
repeat(3){left(90);forward(nlength);}
wait(5);

}
