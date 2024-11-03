#include "Employee.hpp"




Employee::Employee(string _code, string _name, string _jobTittle) {
    code = _code;
    name = _name;
    jobTittle = _jobTittle;

}

// Employee::~Employee() {

//  }


string Employee::getCode () {
    return this->code;

}


string Employee::getName () {
    return this->name;
    
}


string Employee::getJobTittle () {
    return this->jobTittle;
    
}