#include "Employee.h"

Employee::Employee(){                                           
    cout<<"Employee just created!"<<endl<<endl;
}

Employee::~Employee(){                                          
    cout<<"Employee to be destroyed!"<<endl<<endl;
}

int Employee::equal(Employee& E){                               //compares 2 Employees
    if(E.get() == get())
        cout<<"Employees are the same."<<endl;
    else 
        cout<<"Employees are not the same."<<endl;

}

int Employee::identical(Employee& E) const{                     //compares 2 Employees
    if(this == &E)
        cout<<"Employees are identical."<<endl;
    else
        cout<<"Employees are not identical."<<endl;
}

SecurityEmployee::SecurityEmployee(){                           
    this->set_e("Avicii");                                      //sets name to Employee
    cout<<"Security Employee just created!"<<endl<<endl;
}
    
SecurityEmployee::~SecurityEmployee(){                          
    cout<<"Security Employee to be destroyed!"<<endl<<endl;
}

SecurityEmployee* SecurityEmployee::clone(){                    
    SecurityEmployee* copy = new SecurityEmployee;          //initializes new Security Employee

    copy->set_e(this->get_e());                 //sets name to clone
    copy->set(this->get());                     //sets ID to clone

    return copy;
}

MaintenanceEmployee::MaintenanceEmployee(){                     
    this->set_e("Alesso");                           //sets name to Employee
    cout<<"Maintenance Employee just created!"<<endl<<endl;
}

MaintenanceEmployee::~MaintenanceEmployee(){                    
    cout<<"Maintenance Employee to be destroyed!"<<endl<<endl;
}

MaintenanceEmployee* MaintenanceEmployee::clone(){              
    MaintenanceEmployee* copy = new MaintenanceEmployee;            //initializes new Maintenance Employee

    copy->set_e(this->get_e());             //sets name to clone
    copy->set(this->get());                 //sets ID to clone

    return copy;
}

CleaningEmployee::CleaningEmployee(){                           
    this->set_e("Kygo");                        //sets name to Employee
    cout<<"Cleaning Employee just created!"<<endl<<endl;
}

CleaningEmployee::~CleaningEmployee(){                          
    cout<<"Cleaning Employee to be destroyed!"<<endl<<endl;
}

CleaningEmployee* CleaningEmployee::clone(){                    
    CleaningEmployee* copy = new CleaningEmployee;          //initializes new Cleaning Employee

    copy->set_e(this->get_e());             //sets name to clone
    copy->set(this->get());                 //sets ID to clone

    return copy;
}