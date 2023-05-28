#include "Compartments.h"

PassengerCompartment::PassengerCompartment(){                           
    this->set_p(Object::toString());                              //sets ID 
    this->PC = NULL;
    cout<<"Passenger Compartment just created!"<<endl<<endl;
}

PassengerCompartment::~PassengerCompartment(){                          
    cout<<"Passenger Compartment to be destroyed!"<<endl<<endl;
    delete PC;
}

void PassengerCompartment::ready_check(){                               //checks if Compartment is ready
    cout<<"ID: "<<this->get_p()<<endl;
    cout<<"Passenger Compartment OK!"<<endl<<endl;

    if(PC != NULL)
        PC->ready_check();
}

PassengerCompartment* PassengerCompartment::clone(){                    
    PassengerCompartment* copy = new PassengerCompartment();            //initializes new Passenger Compartment

    copy->set_p(this->get_p());                     //sets description to clone
    copy->set(this->get());                         //sets ID to clone

    return copy;
}

PrivateCompartment::PrivateCompartment(){                               
    cout<<"Private Compartment just created!"<<endl<<endl;
}

PrivateCompartment::~PrivateCompartment(){                              
    cout<<"Private Compartment to be destroyed!"<<endl<<endl;
}

EquipmentCompartment::EquipmentCompartment(){                           
    this->set_p(Object::toString());            //sets ID
    cout<<"Equipment Compartment just created!"<<endl<<endl;
}

EquipmentCompartment::~EquipmentCompartment(){                         
    cout<<"Equipment Compartment to be destroyed!"<<endl<<endl;
}

void EquipmentCompartment::ready_check(){                               //checks if Compartment is ready
    cout<<"ID: "<<this->get_p()<<endl;
    cout<<"Equipment Compartment OK!"<<endl<<endl;
}

EquipmentCompartment* EquipmentCompartment::clone(){                    
    EquipmentCompartment* copy = new EquipmentCompartment();            //initializes new Equipment Compartment

    copy->set_p(this->get_p());         //sets description to clone
    copy->set(this->get());             //sets ID to clone

    return copy;
}

CargoBay::CargoBay(){                                                   
    this->set_p(Object::toString());            //sets ID
    this->EC = new EquipmentCompartment();
    cout<<"Cargo Bay just created!"<<endl<<endl;
}

CargoBay::~CargoBay(){                                                  
    cout<<"Cargo Bay to be destroyed!"<<endl<<endl;
    delete EC;
}

void CargoBay::ready_check(){                                           //checks if Bay is ready
    cout<<"ID: "<<this->get_p()<<endl;
    cout<<"Cargo Bay Compartment OK!"<<endl<<endl;

    if(EC != NULL)
        EC->ready_check();
}

CargoBay* CargoBay::clone(){                                            
    CargoBay* copy = new CargoBay();                //initializes new Cargo Bay

    copy->set_p(this->get_p());                     //sets description to clone
    copy->set(this->get());                         //sets ID to clone

    return copy;
}