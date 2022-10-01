#include <iostream>
#include "List.h"

int main()
{
// CONSTRUCTOR TESTING

    List arr = List();
    //cout << arr.getElementCount() << endl;
    Member Gab = Member("604-600-9592");
    Member Eric = Member();
    Member empty = Member();
    arr.insert(Gab);
    arr.insert(Eric);
    arr.remove(Gab);
    arr.search(Gab);
    arr.printList();


    return 0;
}