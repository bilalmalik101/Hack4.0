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
     printf("Enter the Retirement age:");
     scanf("%d",&year);
     //year convert to month
     monthly=year*12;
     printf("|Month|\t|interast    |\t|Amount   |\n");
     //find inflation and return rate
     adjust_inflation_return_rate=((1+annual_return)/(1+annual_inflation))-1;
     //using for loop to find thr interest and total amount
     for(int i =1; i<=monthly; i++){
      interest=(initial_amount * adjust_inflation_return_rate)/12;
      initial_amount+=monthly_contribution_amount + interest;
      total_interest_earned+=interest;
      printf("%d\t%f\t%f\n",monthly,interest,initial_amount);

     }
     //output
     printf("Total earned interest = %f\n",total_interest_earned);
     printf("Total nest = %f \n",initial_amount);
    
}