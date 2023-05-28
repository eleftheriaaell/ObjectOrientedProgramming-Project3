#include "Plane.h"
#include "clone_encrypt_and_print.h"

int main(){
    cout<<"--------------------------------------"<<endl;
    cout<<"PLANE:"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;
   
    Plane Plane00;

    cout<<"--------------------------------------"<<endl;
    cout<<"SECURITY EMPLOYEE:"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;
    
    SecurityEmployee SE;

    cout<<"--------------------------------------"<<endl;
    cout<<"MAINTENANCE EMPLOYEE:"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;
    
    MaintenanceEmployee ME;

    cout<<"--------------------------------------"<<endl;
    cout<<"CLEANING EMPLOYEE:"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;

    CleaningEmployee CE;
    
    cout<<"--------------------------------------"<<endl<<endl;

    int flag=Plane00.process(&SE, &ME, &CE);
    
    cout<<"--------------------------------------"<<endl<<endl;

    SE.report(flag);
    ME.report(flag);
    CE.report(flag);

    cout<<"--------------------------------------"<<endl<<endl;

    Plane00.ready_check(flag);

    cout<<"--------------------------------------"<<endl;    
    cout<<"CLONE ABOUT TO BE MADE"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;
    
    clone_encrypt_and_print(Plane00);

}