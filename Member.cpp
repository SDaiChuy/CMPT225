/*
 * Member.cpp
 * 
 * Class Description: Models a Fitness Studio Registration System.
 * Class Invariant: Each member has a unique cell phone number.
 *                  This cell phone number must have 12 digits.
 *                  This cell phone number must have the following format: XXX-XXX-XXXX.
 *                  This cell phone number cannot be modified. 
 *
 * Author: AL + SD
 * Last modified: Sept. 2022
 */


#include <iostream>
#include <string>
#include "Member.h"



//constructors

Member::Member(){
    name = "To_be_named";
    phone = "000-000-0000";
    email = "To_get";
    creditCard = "No_info";

}

//check to see if the phone number meets the precondiction

Member::Member(string aPhone){
    this->setPhone(aPhone);
}

Member::Member(string aName, string aPhone, string anEmail, string aCreditCard){
    name = aName;
    this->setPhone(aPhone);
    email = anEmail;
    creditCard = aCreditCard;
     

}

//getter functions
string Member::getName() const{
    return name;
}

string Member:: getPhone() const{
    return phone;
}

string Member:: getEmail() const{
    return email;
}

string Member:: getCreditCard() const{
    return creditCard;
}

void Member::setName(const string aName){
    name = aName;
    return;
}

void Member::setEmail(const string anEmail){
    email = anEmail;
    return;
}      

void Member::setCreditCard(const string aCreditCard){
    creditCard = aCreditCard;
    return;
}

void Member::setPhone(const string aPhone){
    if(aPhone.length() == SIZE_OF_PHONE_NUMBER && aPhone[3] == '-' && aPhone[7] == '-'){
        phone = aPhone;
    }
    else{
        phone = "000-000-0000";
    }
}

// Overloaded Operators
// Description: Comparison operator. Compares "this" Member object with "rhs" Member object.
//              Returns true if both Member objects have the same cell phone number.
bool Member::operator == (const Member & rhs) {
    
    return this->phone == rhs.getPhone();
}
	
// Description: Greater than operator. Compares "this" Member object with "rhs" Member object.
//              Returns true if the cell phone number of "this" Member object is > the 
//              cell phone number of "rhs" Member object.
bool Member::operator > (const Member & rhs) {

    return this->phone > rhs.getPhone();
} 

// Description: Less than operator. Compares "this" Member object with "rhs" Member object.
//              Returns true if the cell phone number of "this" Member object is < the 
//              cell phone number of "rhs" Member object.
bool Member::operator < (const Member & rhs) {
	
    return this->phone < rhs.getPhone();
} 

// For testing purposes!
// Description: Prints the content of "this".
// Example: Louis Pace, 604-853-1423, louis@nowhere.com, 1234 5678 9098 7654 
ostream & operator<<(ostream & os, const Member & p) {
	
    os << p.name << ", " << p.phone << ", " << p.email << ", " << p.creditCard << endl;  
	     
    return os;
} 

// end of Member.cpp