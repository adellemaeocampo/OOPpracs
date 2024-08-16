#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newpersonlist;
    newpersonlist.numPeople = pl.numPeople; 

    newpersonlist.people = new Person[pl.numPeople];

    for (int i=0; i<pl.numPeople; i++) {
        newpersonlist.people[i].name = pl.people[i].name;
        newpersonlist.people[i].age = pl.people[i].age;
    }

    return newpersonlist; 
}