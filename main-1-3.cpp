#include <iostream> 
#include "Person.h"

using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main () {
    int n = 5; 

    PersonList Original = createPersonList(n);
    PersonList NewList = deepCopyPersonList(Original);


    for (int i=0; i<Original.numPeople; i++) {
        cout << "Person " << i+1 << ": " << Original.people[i].name << " Age: " << Original.people[i].age << endl;
    }

    cout << "Here is the new list" << endl;

    for (int i=0; i<NewList.numPeople; i++) {
        cout << "Person " << i+1 << ": " << NewList.people[i].name << " Age: " << NewList.people[i].age << endl;
    }

    delete[] Original.people;
    delete[] NewList.people; 

    return 0;
}