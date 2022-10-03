/*
 * List.cpp
 * 
 * Class Description: List data collection ADT.
 * Class Invariant: Data collection with the following characteristics:
 *                   - Each element is unique (no duplicates).
 *                   - ***There is another class invariant: Add it here!***
 *
 * Author: AL + SD
 * Last modified: Sept. 2022
 */


#include <iostream>
#include "List.h"
//Constructor
List::List(){

}

//Destructor
List::~List(){
    this->clear();
}


//return elementCount from the class system
unsigned int List:: getElementCount() const{
    return elementCount;
}

//Add to the end of the list
bool List:: insert(Member& newElement){ 
    // create a bool to see if element count is less than capacity
    bool ableToInsert = (elementCount < CAPACITY);
    if(ableToInsert){  
        if(elementCount == 0){
            // make a new member is element count is 0
            elements = new Member[CAPACITY];
            // check to see if member is made
            if(elements == NULL){
                ableToInsert = false;
                return ableToInsert;
            }
        }
        // add element into array
        elements[elementCount] = newElement;
        // increment the element count 1
        elementCount++;  
    }

    return ableToInsert;

} 

void List::clear(){
    delete [] elements;
    elements = NULL;
    elementCount = 0;
    return;
}

// remove from the end of the list // check lecture 5
bool List::remove(Member& toBeRemove){
    bool ableToRemove = (elementCount < CAPACITY);

    int position = 0;
    if(ableToRemove){
            // find the index that the number is located in and sort the value
            for(unsigned int i = 0; i < elementCount; i++ ){
                if(elements[i] == toBeRemove){
                    position = i;
                    cout << "i: " << i << endl;
                }
            }
        // for the case that the position is 0
        if(position == 0){
            for(unsigned int from_index = position, to_index = from_index + 1; from_index < elementCount; from_index++, to_index++){
                elements[from_index] = elements[to_index];        
            }
        }
        //case where the position is > 0
        else{
            for(unsigned int from_index = position, to_index = from_index - 1; from_index < elementCount; from_index++, to_index++){
                elements[from_index] = elements[to_index];
            }           
        }
        // decrement the element count
        elementCount--;

        //when there are no elements
        if(elementCount == 0){
            clear();
        }
    }
    return ableToRemove;
}


//remove all elements of the list
void List::removeAll(){
    this->clear();
    return;
}

// search the list for target element in O(n) time comlexity 
//linear search 
Member* List::search(Member& target){
    //testing purpose
    //cout << "element count: \n" << getElementCount();

    //iterate throught the array to find the matching target
    for(unsigned int i = 0; i < getElementCount(); i++){
        if(elements[i] == target){
            cout << "Member has been found!"  << endl;
            return &elements[i];
        }
    }  
    cout << "Member was not found." << endl;
    return NULL;
}

// print all elements within the list linearly 
void List::printList(){
    for(unsigned int i = 0; i < getElementCount(); i++){
        cout << elements[i];
        cout << "\n";
    }
}
