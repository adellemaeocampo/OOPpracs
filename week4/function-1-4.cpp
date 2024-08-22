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


PersonList shallowCopyPersonList(PersonList pl) {
    PersonList shallowpersonlist; 
    shallowpersonlist.numPeople = pl.numPeople;
    shallowpersonlist.people = pl.people; 

    return shallowpersonlist; 
}

