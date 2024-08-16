#include "Person.h"

PersonList createPersonList(int n) {
    PersonList personlist; 
    personlist.numPeople = n;

    personlist.people = new Person[n];

    for(int i=0; i<n; i++) {
        personlist.people[i].name = "Jane Doe";
        personlist.people[i].age = 1; 
    }

    return personlist; 
}

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