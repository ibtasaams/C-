/*
In this example, we design an algorithm that calculates the monthly paycheck of a 
salesperson at a local department store.
Every salesperson has a base salary. The salesperson also receives a bonus at the end 
of each month, based on the following criteria: If the salesperson has been with the 
store for five years or less, the bonus is $10 for each year that he or she has worked 
there. If the salesperson has been with the store for more than five years, the bonus 
is $20 for each year that he or she has worked there. The salesperson can earn an 
additional bonus as follows: If the total sales made by the salesperson for the month 
are at least $5,000 but less than $10,000, he or she receives a 3% commission on the 
sale. If the total sales made by the salesperson for the month are at least $10,000, he 
or she receives a 6% commission on the sale.
*/
#include <iostream>
using namespace std;

int main()
{
    float baseSalary, bonus, salesPrice, commission, paycheck;
    int workingYears;

    cout << "Enter the base salary: ";
    cin >> baseSalary;

    cout << "Enter the total sales for the month: ";
    cin >> salesPrice;

    cout << "Enter the number of years worked: ";
    cin >> workingYears;

    // Calculate bonus based on years of service
    if (workingYears >= 0 && workingYears <= 5)
    {
        bonus = workingYears * 10;
    }
    else if (workingYears > 5)
    {
        bonus = workingYears * 20;
    }
    else
    {
        bonus = 0;
    }

    // Calculate commission based on sales
    if (salesPrice >= 5000 && salesPrice < 10000)
    {
        commission = salesPrice * 0.03;
    }
    else if (salesPrice >= 10000)
    {
        commission = salesPrice * 0.06;
    }
    else
    {
        commission = 0;
    }

    // Total paycheck
    paycheck = baseSalary + bonus + commission;

    cout << "The total paycheck is $" << paycheck << endl;

    return 0;
}
