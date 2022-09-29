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

//return elementCount from the class system
unsigned int List:: getElementCount() const{
    return elementCount;
}

//Add to the end of the list
bool List:: insert(Member& newElement){
    bool result = false;
    if(elements == NULL){
        result = false;
    }

    else{
        // check to see if phone number is already in the array (same number)
        for(unsigned int i = 0; i < getElementCount(); i ++){
            if(elements[i] == newElement){
                result = false;
            }
        }
    }

    if(elements != NULL){
        int length = getElementCount();
        elements[length-1] = newElement;
        result = true;
        elementCount++;
    }

    return result;

}

// remove from the end of the list // check lecture 5
bool List::remove(Member& toBeRemove){
    bool result = false;

    if(elements == NULL){
        result = false;
    }
    for(unsigned int i = 0; i < getElementCount(); i++){
        if(elements[i] == toBeRemove){
            elementCount--;
            result =  true;
        }
    }
    return result;
}

//remove all elements of the list
void List::removeAll(){
    for(unsigned int i = 0; i < getElementCount(); i++){
        elementCount--;
    }
}

// search the list for target element in O(n) time comlexity 
//linear search 
Member* List::search(Member& target){
    for(unsigned int i = 0; i < getElementCount(); i++){
        if(elements[i] == target){
            return elements;
        }
    }
    return 0;
}

// print all elements within the list linearly 
void List::printList(){
    for(unsigned int i = 0; i < getElementCount(); i++){
        cout << elements[i];
        cout << "\n";
    }
}
