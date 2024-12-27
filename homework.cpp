#include <iostream>
using namespace std;

int main(){
   
   int salary;
   cout<<"enter your salary  ";
   cin>>salary;

   if(salary>=150000){
    int da = (salary*5)/5;
    int incentive = salary/10;
    int total =da+incentive+salary;
    cout<<total;

   }else if(salary<=150000||salary>=250000){
    int da = (salary*3)/10;
    int incentive = salary/10;
    int total =da+incentive+salary;
    cout<<total;

   }else if(salary<=250000||salary>=500000){
     int da = (salary*2)/5;
    int incentive = salary/10;
    int total =da+incentive+salary;
    cout<<total;



   }

}