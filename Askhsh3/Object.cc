#include "Object.h"

Object::Object(){                                                   
    static int i=0;
    id=i++;                 //creates ID
   cout<<"Object just created!"<<endl<<endl;
}

Object::~Object(){                                                  
    cout<<"Object to be destroyed!"<<endl<<endl;
}

void Object::equal(Object& OB) const{                               //compares 2 Objects
    if(this->id == OB.id)
        cout<<"Objects are equal."<<endl<<endl;
    else
        cout<<"Objects are not equal."<<endl<<endl;
}

void Object::identical(Object& OB) const{                           //compares 2 Objects
    if(this == &OB)
        cout<<"Objects are identical."<<endl<<endl;
    else
        cout<<"Objects are not identical."<<endl<<endl;
}