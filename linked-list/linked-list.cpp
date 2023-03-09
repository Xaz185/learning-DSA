/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*Nom: linked-list.cpp                                                                                                  * 
*Auteur: Xavier Jenni                                                                                                  *
*Date: 06.02.23                                                                                                        *
*Description:   Initializing, creating and using the Data Structures type -> linked lists                              *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// includes & Pre-processor
#include <iostream>

using namespace std;

// Definition of an element of a linked-list
typedef struct sElement {
   int value;
   sElement* pNext;
}sElement;

// Definiiton of the linked-list with 1st Element
typedef struct sLinkedList {
  sElement* pFirstElement;
}sLinkedList;

/*
For the manipulation of the linked-list we need:
- initialization of the list;
- add an element;
- remove an element;
- plot the list;
- delete the entier linked-list.
*/

// Functions Prototypes
void init_linked_list(void);
void add_element(void);
void remove_element(void);
void plot_list(void);
void delete_linked_list(void);

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
int main(){

    cout << "Hello World!" << endl;

    return EXIT_SUCCESS;
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *