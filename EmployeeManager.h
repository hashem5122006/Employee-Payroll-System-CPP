#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <string>
#include <vector>

using namespace std;

#define count1 100

struct employer {
    string admin_id;
    string admin_name;
    string admin_pass;
};

struct employees {
    string emp_id = "";
    string emp_pass;
    int emp_age;
    string emp_phone;
    double BasicSalary;
    double Bonus = 0;
    double Tax;
    double Taxrate;
    double NetSalary;
    string emp_name;
    string emp_Position;
    float performancescore;
    double overtimehours;
    double overtimerate;
    double sumovertime;
    double deduction;
};

void login();
void option();
void enter();
void loadFromFile();
void saveToFile();
int soperation();
void data1();
void updateEmployee(int num);

#endif
