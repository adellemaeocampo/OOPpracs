#include "Person.h"

PersonList createPersonList(int n) {
    PersonList personlist; 
    personlist.numPeople = n;

    for(int i=0; i<n; i++) {
        personlist.people[i].name = "Jane Doe";
        personlist.people[i].age = 1; 
    }

    return personlist; 
}