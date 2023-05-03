#include<simplecpp>

bool lab_marks(int& total_marks)
{int i=0,j=0,k=0;
repeat(7){
int n;
cin>>n;
if(n==2){i++;}
if(n==1){j++;}
if(n==0){k++;}
}
if(i>5){total_marks=10;}
if(j>=5-i&&i<=5){total_marks=2*i+(5-i);}
if(j<5-i&&i<=5) total_marks=2*i+j;
int m;
cin>>m;
if(m==1){return true;}
else return false;}
bool quiz_marks(int& total_marks)
{int i=0,j=0,k=0;
repeat(6){
int n;
cin>>n;
if(n==2){i++;}
if(n==1){j++;}
if(n==0){k++;}
}
if(i>5){total_marks=total_marks+10;}
if(j>=5-i&&i<=5){total_marks=total_marks+2*i+(5-i);}
if(j<5-i&&i<=5) total_marks=total_marks+2*i+j;
int m;
cin>>m;
if(m==1){return true;}
else return false;}
 int midsem_marks()
 {int n;
 cin>>n;
 return n;}
 int endsem_marks()
 {int n;
 cin>>n;
 return n;}
 bool project_marks(int& total_marks)
 {int n;
 cin>>n;
 if(total_marks>80){total_marks=total_marks+(n);}
 int m;
 cin>>m;
 if(m==1){return true;}
else return false;}
int calculate_grade(int total_marks, bool plag_in_quiz, bool plag_in_lab,bool plag_in_project)
{int n;
if(total_marks/10>=3){n=(total_marks/10)+1;}
else n=0;
if(plag_in_quiz==true){n--;}
if(plag_in_lab==true){n--;}
if(plag_in_project==true){n--;}
if(n-4<0){n=0;}
return n;
}




