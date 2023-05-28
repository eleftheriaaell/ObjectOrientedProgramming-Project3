#ifndef COMPARTMENTS_H
#define COMPARTMENTS_H

#include "Employee.h"

class PassengerCompartment : public PlaneComponent{
public:
    PassengerCompartment();
    ~PassengerCompartment();
    void ready_check();
    void process(SecurityEmployee* E){                  //works on Compartment
        E->workOn(this);
        if (PC != NULL)
            PC->process(E);
    } 
    void process(CleaningEmployee* E){                  //works on Compartment
        E->workOn(this);
        if (PC != NULL)
            PC->process(E);
    } 
    PassengerCompartment* clone();

private:
    PassengerCompartment* PC;    

};

class PrivateCompartment : public PlaneComponent{
public:
    PrivateCompartment();
    ~PrivateCompartment();    
    virtual void ready_check(){}
    virtual void process(Employee*){}
    virtual PrivateCompartment* clone() = 0;

};

class EquipmentCompartment : public PrivateCompartment{
public:
    EquipmentCompartment();
    ~EquipmentCompartment();    
    void ready_check();
    void process(SecurityEmployee* E){ E->workOn(this); }               //works on Compartment       
    void process(MaintenanceEmployee* E){ E->workOn(this); }            //works on Compartment
    EquipmentCompartment* clone();

};

class CargoBay : public PrivateCompartment{
public:
    CargoBay();
    ~CargoBay();    
    void ready_check();
    void process(SecurityEmployee* E){                                  //works on Compartment
        E->workOn(this); 
        if(EC != NULL)
            EC->process(E);
    }
    void process(MaintenanceEmployee* E){                               //works on Compartment
        E->workOn(this); 
        if(EC != NULL)
            EC->process(E);
    } 
    void process(CleaningEmployee* E){ E->workOn(this); }               //works on Compartment
    CargoBay* clone();

private:
    EquipmentCompartment* EC;

};

#endif