#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "PlaneComponent.h"

class Employee : public Object{
public:
    Employee();
    ~Employee();
    virtual void workOn(PlaneComponent*){};
    virtual void report(int) const = 0;
    int equal(Employee&);
    int identical(Employee&) const;
    virtual Employee* clone() = 0;
    string toString(){ return Object::toString()+name.toString(); }     //returns Employee's parts in string
    string get_e(){ return name.get_s(); }                              //returns name of Employee
    void set_e(string s){ name.set_s(s); }                              //sets name of Employee

private:
    String name;

};

class SecurityEmployee : public Employee{ 
public:
    SecurityEmployee();
    ~SecurityEmployee();
    void workOn(class PassengerCompartment* PC) const{ cout<<"Working on Passenger Compartment."<<endl<<endl; }             //employee works
    void workOn(class EquipmentCompartment* EC) const{ cout<<"Working on Equipment Compartment."<<endl<<endl; }             //employee works
    void workOn(class CargoBay* CB) const{ cout<<"Working on Cargo Bay."<<endl<<endl; }                                     //employee works
    void report(int i) const{ if(i) cout<<"Secure Area! OK!"<<endl<<endl; }       //reports if the area is ok after employee has worked in it
    SecurityEmployee* clone();

};

class MaintenanceEmployee : public Employee{
public:
    MaintenanceEmployee();
    ~MaintenanceEmployee();
    void workOn(EquipmentCompartment* EC) const{ cout<<"Working on Equipment Compartment."<<endl<<endl; }                          //employee works
    void workOn(CargoBay* CB) const{ cout<<"Working on Cargo Bay."<<endl<<endl; }                                                  //employee works
    void report(int i) const{ if(i) cout<<"Maintaining is done! OK!"<<endl<<endl; }     //reports if the area is ok after employee has worked in it
    MaintenanceEmployee* clone();

};

class CleaningEmployee : public Employee{
public:
    CleaningEmployee();
    ~CleaningEmployee();
    void workOn(PassengerCompartment* PC) const{ cout<<"Working on Passenger Compartment."<<endl<<endl; }                    //employee works
    void workOn(CargoBay* CB) const{ cout<<"Working on Cargo Bay."<<endl<<endl; }                                            //employee works        
    void report(int i) const{ if(i) cout<<"Cleaning is done! OK!"<<endl<<endl; }  //reports if the area is ok after employee has worked in it
    CleaningEmployee* clone();

};

#endif