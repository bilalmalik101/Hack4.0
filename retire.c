#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    // declaring variables
     float initial_amount, monthly_contribution_amount, annual_return, annual_inflation, balance;
     float interest, adjust_inflation_return_rate, total_interest_earned=0;
     int monthly,year;
     //prompt to user
     printf("Enter the initial amount:");
     scanf("%f",&initial_amount);
     printf("Enter the monthly contributed Money:");
     scanf("%f",&monthly_contribution_amount);
     printf("Enter the return rate(scale 0,1):");
     scanf("%f",&annual_return); 
     printf("Enter the inflation rate(scale 0,1):");
     scanf("%f",&annual_inflation); 
     monthly=year*12;
     adjust_inflation_return_rate=((1+annual_return)/(1+annual_inflation))-1;
     for(int i =1; i<=monthly; i++){
    
     }


}