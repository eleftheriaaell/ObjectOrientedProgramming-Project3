#ifndef STRING_H
#define STRING_H

#include "Object.h"

class String : public Object{
public:
    String();
    ~String();
    void set_s(string s){ str=s; }                                          //sets str
    string get_s(){ return str; }                                           //returns str
    int length();
    void clear();
    void concat(String& str1);
    char at(int pos);
    void updateAt(char c, int pos);
    void print();
    void equal(String& str2) const;
    void identical(String& str2) const;
    String* clone();
    string toString(){ return "ID: "+Object::toString()+" "+str+"\n"; }     //returns Strings part in string

private:
    string str;

};

#endif