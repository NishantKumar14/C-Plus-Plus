#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <iterator>
#include <algorithm>


struct Employee {
    int id;
    std::string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    std::cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: " << emp.salary << std::endl;
}

using namespace std;

int main() {
    vector<Employee> employees = {
        {101, "Hitesh", 100000}, 
        {102, "Ramesh", 200000},
        {103, "David", 50000},
        {104, "Mark", 600000},
        {105, "Ram", 1000000},
    };

    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee e2){
        return e1.salary > e2.salary;
    });

    cout << "Employesss sorted by salary -> Hightest to lowest \n";
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employees.begin(), 
        employees.end(), 
        back_inserter(highEarners), 
        [](const Employee& e){
        return e.salary > 500000;
    });

    cout << "Employesss who are high earners \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    double averageSalary = totalSalary / employees.size();

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

    return 0;
}