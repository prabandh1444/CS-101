#include<simplecpp>

bool point_on_plane(double *p1_x, double *p1_y, double *p1_z, double *p2_x, double *p2_y, double *p2_z, double *p3_x, double *p3_y, double *p3_z, double *q_x, double *q_y, double *q_z, double *dist)
{
double a,b,c;
  a=(*p1_y)*(*p2_z-*p3_z)+(*p2_y)*(*p3_z-*p1_z)+(*p3_y)*(*p1_z-*p2_z);
  b=(*p1_z)*(*p2_x-*p3_x)+(*p2_z)*(*p3_x-*p1_x)+(*p3_z)*(*p1_x-*p2_x);
  c=(*p1_x)*(*p2_y-*p3_y)+(*p2_x)*(*p3_y-*p1_y)+(*p3_x)*(*p1_y-*p2_y);
  *dist =abs(a*(*q_x-*p1_x)+b*(*q_y-*p1_y)+c*(*q_z-*p1_z))/(sqrt(a*a+b*b+c*c));
if(a*(*q_x-*p1_x)+b*(*q_y-*p1_y)+c*(*q_z-*p1_z)==0){return true;}
else return false;}

