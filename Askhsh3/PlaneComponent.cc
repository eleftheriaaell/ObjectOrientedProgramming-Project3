#include "PlaneComponent.h"

PlaneComponent::PlaneComponent(){                                           
    cout<<"Plane Component just created!"<<endl<<endl;
}

PlaneComponent::~PlaneComponent(){                                          
    cout<<"Plane Component to be destroyed!"<<endl<<endl;
}

int PlaneComponent::equal(PlaneComponent& P){                               
    if(P.get() == get())
        cout<<"Plane Components are the same."<<endl;
    else 
        cout<<"Plane Components are not the same."<<endl;
}                                                                   //compares 2 PlaneComponents

int PlaneComponent::identical(PlaneComponent& P) const{                     
    if(this == &P)
        cout<<"Plane Components are identical."<<endl;
    else
        cout<<"Plane Components are not identical."<<endl;
}                                                                   //compares 2 PlaneComponents