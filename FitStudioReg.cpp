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

// methods for user inputs.
void add(List* arr){
    string user_name;
    string user_phone;
    string user_creditCard;
    string user_email;

    cout << "Enter your phone number: ";
    cin >> user_phone;

    Member phoneNumber = Member(user_phone);

    if(arr->search(phoneNumber) == NULL){
        cout << "Enter your name: ";
        cin >> user_name;

        cout << "Enter your credit card information: ";
        cin >> user_creditCard;

        cout << "Enter your email: ";
        cin >> user_email;

        Member temp = Member(user_name, user_phone, user_email, user_creditCard);

        arr->insert(temp);

    }
    
    else{
        cout << "That number already exist in the system" << endl; 
    }
}

//void remove(List* arr)
void search(List* arr){
    string user_phone;

    cout << "Enter the phone number you are searching for: ";
    cin >> user_phone;

    Member temp_phone = Member(user_phone);
    

}

//void modify(List* arr);

void print(List* arr){

    arr->printList();
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
        cout << "x -> to exit\n" << endl;

        
        cout << "Your choice: ";
        cin >> input;
        cout << endl;
        input = tolower(input);
		switch(input) {
            case 'a': add(Members); break;
            //case 'r': remove(Members); break;
            case 's': search(Members); break;
            //case 'm': modify(Members); break;
            case 'p': print(Members); break;
            case 'x': cout << "\n----Bye!\n" << endl; done = true; break;
            default: cout << "Not sure what you mean! Please, try again!" << endl;
        }
        
    }


    return 0;
}
