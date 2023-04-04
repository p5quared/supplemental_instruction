//
// Created by Peter Vaiciulis on 3/31/23.
//

#include <iostream>
#include <string>

struct date
{
    int day, month, year;
};



struct emp_info
{
    date birthday;
    date hire_date;
    std::string id_number;
    double salary;
};

date  some_day;
emp_info  some_employee;
emp_info  all_employees [100];

/*
Use the declarations above to do the following:

1) assign June 14, 1995 to some_day.
2) print the hire_date and the salary of some_employee.
3) print the ids and the birthdays of ALL the employees stored in the
array all_employees.
*/

int main(){
    for(int i=0; i<100; i++){
        std::cout << all_employees[i].id_number << " " << all_employees[i].birthday.day << "/" << all_employees[i].birthday.month << "/" << all_employees[i].birthday.year << std::endl;
    }
}
