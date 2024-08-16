#include <iostream>
#include "Person.h"

using namespace std; 

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n =5; 

    PersonList Original = createPersonList(n);
    PersonList Shallow = shallowCopyPersonList(Original); 

    for (int i=0; i<Original.numPeople; i++) {
        cout << "Person " << i+1 << ": " << Original.people[i].name << " Age: " << Original.people[i].age << endl;
    }

    cout << "Here is the new list" << endl;

    for (int i=0; i<Shallow.numPeople; i++) {
        cout << "Person " << i+1 << ": " << Shallow.people[i].name << " Age: " << Shallow.people[i].age << endl;
    }

    delete[] Original.people;

    return 0;
}