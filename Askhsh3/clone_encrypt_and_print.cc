#include "clone_encrypt_and_print.h"

void clone_encrypt_and_print(Object& ob){                       //function that clones encrypts and prints a plane
    Object* ob_clone=ob.clone();

    cout<<"--------------------------------------"<<endl<<endl;

    ob_clone->equal(ob);
    ob_clone->identical(ob);
    
    cout<<"--------------------------------------"<<endl<<endl;

    string one=ob.toString();
    string two=ob_clone->toString();
    
    String one1, two2;
    one1.set_s(one);
    two2.set_s(two);

    two2.updateAt(two2.at(4), 4);

    cout<<"--------------------------------------"<<endl<<endl;

    one1.print();
    two2.print();

    cout<<"--------------------------------------"<<endl<<endl;

    two2.concat(one1);    
    cout<<"Length of string: "<<two2.length()<<endl<<endl;
   
    two2.clear();
    cout<<"Length of string: "<<two2.length()<<endl<<endl; 

    cout<<"--------------------------------------"<<endl<<endl;

    delete ob_clone;
}