#include<iostream>
using namespace std;
#include<cmath>

 class MyClock {
 private:
	 int hours;
	int minutes;
	int seconds;
public:
MyClock(int a){
       hours=10;
       minutes=11;
       seconds=a;}
MyClock(int a, int b){
       hours=22;
       minutes=a;
       seconds=b;}
MyClock(int a, int b, int c){
       hours=a;
       minutes=b;
       seconds=c;}
void currentTime(){
if(hours>=0&&hours<12){if(hours==0){cout<<"12"<<":";}
                       if(hours>0&&hours<10){cout<<"0"<<hours<<":";}
                       if(hours>=10&&hours<12){cout<<hours<<":";}
                        }
else {if(hours==12){cout<<"12"<<":";}
      if(hours>12&&hours<22){cout<<"0"<<(hours-12)<<":";}
      if(hours>=22&&hours<24){cout<<(hours-12)<<":";} }

if(minutes<10){cout<<"0"<<minutes<<":";}
         else {cout<<minutes<<":";}
if(seconds<10){cout<<"0"<<seconds<<" ";}
         else {cout<<seconds<<" ";}
if(hours>=0&&hours<12){cout<<"AM"<<endl;}
else {cout<<"PM"<<endl;}
}
int operator<(MyClock &c)
{int hours1,hours2;
if(hours!=0&&hours<=12){hours1=hours;}
if(hours>12){hours1=hours-12;}
 if(hours==0){hours1=12;}
 if(c.hours<=12&&c.hours!=0){hours2=c.hours;}
 if(c.hours>12){hours2=c.hours-12;}
 if(c.hours==0){hours2=12;}
 if(hours1<hours2){return 1;}
 if(hours1>hours2){return 0;}
 if(hours1==hours2){if(minutes<c.minutes){return 1;}
                    if(minutes>c.minutes){return 0;}
                    if(minutes=c.minutes){if(seconds<c.seconds){return 1;}
                                          if(seconds>=c.seconds){return 0;}}}
}
~MyClock()
{
            currentTime();
}
};
