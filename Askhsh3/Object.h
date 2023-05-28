#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <cstdlib>
#include "to_string.h"


class Object{
public:
    Object();
    virtual ~Object();
    virtual void equal(Object& OB) const;
    virtual void identical(Object& OB) const;
    virtual Object* clone() = 0;
    virtual string toString(){ return to_String(id); }  //returns Object's parts in string
    int get(){ return id;  }                            //returns id
    void set(int i){ id=i; }                            //sets id

private:
    int id;
    
};

#endif