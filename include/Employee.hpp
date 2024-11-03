#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {

    private:
        string code;
        string name;
        string jobTittle;

    public:
        Employee(string _code, string _name, string _jobTittle);
        // ~Employee();
        string getCode();
        string getName();
        string getJobTittle();

};






#endif 
