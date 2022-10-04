/*
 * ListTestDriver.cpp
 *
 * Description: Test Driver for data collection List class.
 * 
 * Author: alavergn
 * Created on: Sept. 2022
 * 
 */

#include <iostream>
#include <string>
#include "Member.h"
#include "List.h"

using std::endl;
using std::cout;

int main() {

    // Test case 1:	
    // Create a List of size CAPACITY (5) using default constructor.
    cout << endl << "Create a default List -> testing constructor List()." << endl;
    cout << "Expected Result: empty List." << endl;
    List * member = new List();


    // Test case 2: 
    //     1) test data -> List empty, elementCount is 0, inserting theMember at position 0.
    //     2) expected resul -> insert is unsuccessful.
    // Insert Member element (Member 1) at position 0 in empty List.
    cout << endl << "Insert Member element (Member 1) at position 3 in empty List." << endl;
    cout << "Expected Result: insert is unsuccessful." << endl;
    Member theMember1("604-123-1234");
    if ( member->insert(theMember1) ) cout << "Actual Result: insert is successful." << endl;
    else cout << "Actual Result: insert is unsuccessful." << endl;


    // Test case 3: 
    //     1) test data -> List now with elementCount = 1, inserting theMember at position 1.
    //     2) expected resul -> insert is successful.
    // Insert Member element (Member 2) at position 1 in List with elementCount = 1.
    cout << endl << "Insert Member element (Member 2) at position 1 in List with elementCount = 1." << endl;
    cout << "Expected Result: insert is successful." << endl;
    Member theMember2("778-123-1234");
    if ( member->insert(theMember2) ) cout << "Actual Result: insert is successful." << endl;
    else cout << "Actual Result: insert is unsuccessful." << endl;
    
    // Test case 4: 
    //     1) test data -> List with elementCount = 2, inserting theMember at position 2.
    //     2) expected resul -> insert is successful.
    // Insert Member element (Member 3) at position 2 in List with elementCount = 2.
    cout << endl << "Insert Member element (Member 3) at position 3 in List with elementCount = 3." << endl;
    cout << "Expected Result: insert is successful." << endl;
    Member theMember3("604-565-5678");
    if ( member->insert(theMember3 ) ) cout << "Actual Result: insert is successful." << endl;
    else cout << "Actual Result: insert is unsuccessful." << endl;

    // Test case 5: 
    //     1) test data -> List with elementCount = 3, inserting theMember at position 3.
    //     2) expected resul -> insert is successful.
    // Insert Member element (Member 4) at position 3 in List with elementCount = 3.
    cout << endl << "Insert Member element (Member 4) at position 4 in List with elementCount = 4." << endl;
    cout << "Expected Result: insert is successful and List with elementCount = 4." << endl;
    Member theMember4("778-321-1256");
    if ( member->insert(theMember4 ) ) cout << "Actual Result: insert is successful." << endl;
    else cout << "Actual Result: insert is unsuccessful." << endl;

    
    // Test case 6: 
    //     1) test data -> Full List (elementCount = CAPCITY (5)), inserting theMember at position 4.
    //     2) expected resul -> insert is unsuccessful.
    // Insert Member element (Member 5) at position 4 in full List (elementCount = CAPCITY (5)).
    cout << endl << "Insert Member element (Member 5)." << endl;
    cout << "Expected Result: insert is successful." << endl;
    Member theMember5("778-251-8313");
    if ( member->insert(theMember5) ) cout << "Actual Result: insert is successful." << endl;
    else cout << "Actual Result: insert is unsuccessful." << endl;

    // Test case 7:
    // Printing out the list
    cout << "Printing out the current members." << endl;
    member->printList();
    cout << endl;

    // Test case 8:
    // Removing Member 2 ("778-123-1234")
    cout << endl << "Removing Member element (Member 2)" << endl;
    cout << "Expected Result: remove is successful." << endl;
    if(member->search(theMember2) != NULL){
        if(member->remove(theMember2) != NULL) cout << "Actual Result: Remove is successful." << endl;
        else cout << "Actual Result: Remove is unsuccessful." << endl;
    }
    cout << endl;
    
    // Test case 9:
    // searching for Member 4 ("778-321-1256")
    cout << endl << "Searching Member element (Member 4)." << endl;
    cout << "Expected Result: search is sucessful." << endl;
    if(member->search(theMember4) != NULL) cout << "Actual Result: Search is sucessful." << endl;
    else cout << "Actual Result: Search is unsucessful." << endl;

    // Test case 10
    // searching for a non member ("604-999-9999")
    Member nonMember = Member("604-999-9999");
    cout << endl << "Searching for non member." << endl;
    cout << "Expected Result: Search is unsuccessful." << endl;
    if(member->search(nonMember) == NULL) cout << "Actual Result: Search is unsucessful." << endl;
    else cout << "Actual Result: Searc is successful." << endl;

    return 0;
}