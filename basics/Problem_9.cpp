#include <iostream>
using namespace std;
int main()
{
    int semester_fee = 25000;
    int semester_chs = 15;
    int math_class_per_week = 3;
    int no_of_weeks = 15;
    int math_chs = 4;
    /// We have to compute the cost of each hour of maths class
    /// First compute cost of one ch
    int cost_one_ch = semester_fee / semester_chs;
    /// Now compute the math credit hours class price
    int math_chs_cost = math_chs * cost_one_ch;
    ////Now calculate the total no of math classes in semester
    int no_of_math_classes = (math_class_per_week * no_of_weeks);
    ////Now calculate the cost of one math class
    int one_hour_cost = math_chs_cost / no_of_math_classes;
    cout << "The cost of one math class is: $" << one_hour_cost << endl;
    return 0;
}