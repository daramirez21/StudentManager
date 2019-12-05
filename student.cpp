#include "student.h"
#include <string>
#include <iostream>

using namespace std;
    
    string name; 

    void student::setName(string name1, string name2)
    {   
    first = name1;
    last = name2;
    }   

    string student::fullName()
    {
    string name = first;
    name.append(" ");
    name.append(last);
    return name;
    }   

