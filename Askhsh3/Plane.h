#ifndef PLANE_H
#define PLANE_H

#include "Compartments.h"

class Plane : public Object{
public:
    Plane();
    Plane(int);
    ~Plane();
    void ready_check(int i){ if(i) cout<<"Plane ready to take off!"<<endl<<endl; };     //checks if Plane is ready
    int process(SecurityEmployee*, MaintenanceEmployee*, CleaningEmployee*);
    int equal(Plane&);
    int identical(Plane&) const;
    Plane* clone();
    string toString();

private:
    String description;
    String title;
    int p_counter;
    CargoBay* CB;
    EquipmentCompartment* EC[3];
    PassengerCompartment** PC;
    int cnt;

};

#endif