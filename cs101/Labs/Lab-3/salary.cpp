#include<simplecpp>

main_program{
long double basic_salary,gross_salary;
cin>>basic_salary;
if(basic_salary<=10000)gross_salary=basic_salary*2.0;
else if(basic_salary<=20000)gross_salary=basic_salary*2.15;
else gross_salary=basic_salary*2.25;
cout<<gross_salary<<endl;

}
