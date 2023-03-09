/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*Nom: linked-list.cpp                                                                                                  * 
*Auteur: Xavier Jenni                                                                                                  *
*Date: 06.02.23                                                                                                        *
*Description:   Initializing, creating and using the Data Structures type -> linked lists                              *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

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


int main(){

    cout << "Hello World!" << endl;

    return EXIT_SUCCESS;
}