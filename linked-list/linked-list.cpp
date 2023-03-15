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
sLinkedList* init_linked_list();
void add_element(sLinkedList* list, int newNbr);
void remove_element(void);
void plot_list(void);
void delete_linked_list(void);

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
int main(){

    cout << "Hello World!" << endl;

    return EXIT_SUCCESS;
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
sLinkedList* init_linked_list(){

  // allocate memory for one element of the list
  sLinkedList* list =(sLinkedList*)malloc(sizeof(*list));
  sElement* element =(sElement*)malloc(sizeof(*element));

  // check the right allocation of memory
  if(list == NULL || element == NULL){
    exit(EXIT_FAILURE);
  }

  // initialisation of differents lists' element
  element->value = 0;
  element->pNext = NULL;  // point always to NULL if last element of the linked list
  list->pFirstElement = element;  // point to the newest element of the linked list

  return list;
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
