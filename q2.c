/* Design a Banking System: Recursive Loan Repayment Estimator where banks calculate monthly
repayments using: payment(n) = payment(n-1) – monthlyInstallment + interest(payment(n-1)) by
creating a recursive repayment simulation. Use a structure Loan storing customerName,
loanAmount, interestRate, months.The recursion should continue until loanAmount ≤ 0.*/
#include<stdio.h>
struct loan
{
    char customerName[100];
    int loanAmount;
    float interestRate;
    int months;
}l1;
float interest( int loan,float interest1)
{
    return loan*interest1;
}
int payment(int loan,float interest1,int month,int installments)//100,2,4,25
{
    float p,new;
    if(loan<=0||month<=0) return loan;
    else
    {   
        float newLoan = loan - installments + interest(loan,interest1);
    printf("Loan this month: %.2f\n", newLoan);
    return payment(loan-installments,interest1,month-1,installments);
    }
}
int main()
{
    printf("\n Enter Customer's name:");
    fgets(l1.customerName,100,stdin);
    printf("\n Enter Loan Amount:");
    scanf("%d",&l1.loanAmount);
     printf("\n Enter interest rate:");
    scanf("%f",&l1.interestRate);
    l1.interestRate=l1.interestRate/100;
     printf("\n Enter number of months:");
    scanf("%d",&l1.months);
    int  monthlyInstallment=l1.loanAmount/l1.months;
    payment(l1.loanAmount,l1.interestRate,l1.months,monthlyInstallment);
    interest(l1.loanAmount,l1.interestRate);

}