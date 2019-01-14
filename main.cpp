#include <iostream>
#include "List.h"

using namespace std;

int main() {
    List* list = new List();

    list->add(1);
    list->add(3);
    list->add(5);
    list->add(7);

    list->print();

    cout << endl << list->get(2) << endl;
    return 0;
}