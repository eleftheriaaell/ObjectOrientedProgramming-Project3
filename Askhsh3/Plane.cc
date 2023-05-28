#include "Plane.h"

Plane::Plane(){                                                   
    title.set_s("AirBus_00");
    p_counter=rand()%250+1;
    cnt=rand()%5+1;                                         //randomly initializes the counters
    
    this->CB = new CargoBay();                              //allocates memory for CB

    for(int i=0; i<3; i++){
        this->EC[i] = new EquipmentCompartment();           //allocates memory for EC
    }  
    
    this->PC = new PassengerCompartment*[cnt];
    for(int i=0; i<cnt; i++){
        this->PC[i] = new PassengerCompartment();           //allocates memory for PC
    }

    description.set_s(this->toString());                    //fills up description
    
    cout<<"Plane just created!"<<endl<<endl;
}

Plane::Plane(int){}                                             //constructor used for clone

Plane::~Plane(){                                               
    cout<<"Plane to be destroyed!"<<endl<<endl;
    delete CB;
    
    for(int i=0; i<3; i++)
        delete EC[i];

    for(int i=0; i<cnt; i++)
        delete PC[i];
    delete[] PC;

}

int Plane::process(SecurityEmployee* SE, MaintenanceEmployee* ME, CleaningEmployee* CE){   
    for(int i=0; i<cnt; i++){
        PC[i]->process(SE);
        PC[i]->process(CE);
        PC[i]->ready_check();
    }
    
    for(int i=0; i<3; i++){
        EC[i]->process(SE);
        EC[i]->process(ME);
        EC[i]->ready_check();
    }
    
    CB->process(SE);
    CB->process(ME);
    CB->process(CE);
    CB->ready_check();

    return 1;
}                            //calls process and ready_Check for each compartment

int Plane::equal(Plane& P){                                             
    if(P.get() == get())
        cout<<"Planes are the same."<<endl;
    else 
        cout<<"Planes are not the same."<<endl;
}                              //compares 2 Planes

int Plane::identical(Plane& P) const{                                   
    if(this == &P)
        cout<<"Planes are identical."<<endl;
    else
        cout<<"Planes are not identical."<<endl;
}                               //compares 2 Planes

Plane* Plane::clone(){                                                  
    Plane* copy = new Plane(0);             //initializes new plane
    
    copy->description=description;
    copy->title=title;
    copy->p_counter=p_counter;              

    copy->CB=CB->clone();
    
    for(int i=0; i<3; i++)
        copy->EC[i]=EC[i]->clone();
    
    copy->PC = new PassengerCompartment*[cnt];
    for(int i=0; i<cnt; i++)
        copy->PC[i]=PC[i]->clone();                 
    
    copy->cnt=cnt;                         //fills parts of plane         
    copy->set(this->get());                //gives the plane an ID 

    return copy;
}

string Plane::toString(){                                           
    return "ID: "+Object::toString()
    +" Title: "+title.get_s()+
    ", Compartments: 1 Cargo Bay, 3 Equipment Compartments, "+
    to_String(cnt)+" Passenger Compartments, Passengers: "+
    to_String(p_counter)+"\n";
}                               //returns Plane's parts in string