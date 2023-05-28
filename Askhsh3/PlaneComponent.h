#ifndef PLANECOMPONENT_H
#define PLANECOMPONENT_H

#include "String.h"

class PlaneComponent : public Object{
public:
    PlaneComponent();
    ~PlaneComponent();
    virtual void ready_check() = 0;
    virtual void process(class Employee*){}
    int equal(PlaneComponent&);
    int identical(PlaneComponent&) const;
    virtual PlaneComponent* clone() = 0;
    string toString(){ return Object::toString()+description.toString(); }  //returns PlaneComponents' parts in string
    string get_p(){ return description.get_s(); }                           //returns description   
    void set_p(string s){ description.set_s(s); }                           //sets description 

private:
    String description;
    
};

#endif