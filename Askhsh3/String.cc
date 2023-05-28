#include "String.h"

String::String(){                                                       
    cout<<"String just created!"<<endl<<endl;
}

String::~String(){                                                      
    cout<<"String to be destroyed!"<<endl<<endl;
}

int String::length(){ return str.length(); }                            //calculates lenght of string

void String::clear(){ str.clear(); }                                    //clears string

void String::concat(String& str1){ str+=str1.str; }                     //puts new string at the end of string

char String::at(int pos){                                               //finds char in position pos
    for(int i=0; i<length(); i++){
        if(i == pos)
            return str[i];
    } 
    cout<<"Position out of bounds!"<<endl;
}

void String::updateAt(char c, int pos){                                 //updates a char at a certain position
    for(int i=0; i<length(); i++){
        if(str[i] == c && i == pos)
            str[i]='k';
    }    
}

void String::print(){ cout<<str<<endl; }                                //prints String's string

void String::equal(String& str2) const{                                 //compares Strings' strings
    if(!str.compare(str2.str))
        cout<<"Strings are equal."<<endl<<endl;
    else
        cout<<"Strings are not equal."<<endl<<endl;
}

void String::identical(String& str2) const{                             //compares 2 Strings
    if(this == &str2)
        cout<<"Strings are identical."<<endl<<endl;
    else
        cout<<"Strings are not identical."<<endl<<endl;
}

String* String::clone(){                                                //clones a String
    String* copy = new String();
    
    copy->str=str;
    copy->set(this->get());

    return copy;
}