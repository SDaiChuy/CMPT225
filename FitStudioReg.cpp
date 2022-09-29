/*
 * FitStudioReg.cpp - Assignment 1
 *
 * Class Description: Fitness Studio Registration System
 *
 * Author: AL
 * Last modified: Sept. 2022
 */

#include <iostream>
#include <string>
#include <cctype>
#include "Member.h"
#include "List.h"

using std::cout;

List::List(){

}

Member::Member(){

}

// methods for user inputs.
void add(List* arr){
    string user_name;
    string user_phone;
    string user_creditCard;
    string user_email;

    cout << "Enter a phone number: ";
    cin >> user_phone;

    cout << "Enter a name; ";
    cin >> user_name;

    cout << "Enter your credit card information: ";
    cin >> user_creditCard;

    cout << "Enter your email: ";
    cin >> user_email;

    Member temp = Member(user_name, user_phone, user_email, user_creditCard);

    arr->insert(temp);
}
/*
void remove(List* arr);
void search(List* arr);
void modify(List* arr);
*/
void print(List* arr){
    string user_name = Member.getName();
    string user_phone = Member.getPhone();
    string user_creditCard = Member.getCreditCard();
    string user_email = Member.getEmail();

    cout << user_name;
    cout << user_phone;
    cout << user_creditCard;
    cout << user_email;
}

int main() {

    // Variables declaration
    List* Members = new List();
    bool done = false;
    char input = 0;


    // Keep going until the user exits
    while (not done) {
        // Print menu to stdout
        cout << endl << "----Welcome to the Fitness Studio Registration System!" << endl;
        cout << endl << "Enter ..." << endl << endl;
        cout << "a -> to add a new member" << endl;
        cout << "r -> to remove a member" << endl;
        cout << "s -> to search for a member" << endl;
        cout << "m -> to modify the record of a member" << endl;
        cout << "p -> to print all members" << endl;
        //cout << "x -> to exit\n" << endl;

        
        cout << "Your choice: ";
        cin >> input;
        cout << endl;
        input = tolower(input);
		switch(input) {
            case 'a': add(Members); break;
            //case 'r': remove(Members); break;
            //case 's': search(Members); break;
            //case 'm': modify(Members); break;
            case 'p': print(Members); break;
            case 'x': cout << "\n----Bye!\n" << endl; done = true; break;
            default: cout << "Not sure what you mean! Please, try again!" << endl;
        }
        
    }


    return 0;
}