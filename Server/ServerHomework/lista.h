#ifndef LISTA_H
#define LISTA_H


//List class (clase lista) which contains the main methods to work into the list

class Lista
{

public:
    Lista();
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    nodePtr tail;
    int lenght;
public:
    void AddNode(int Data, int pos);
    void DeleteNode(int pos);
    void printList();
    void AddEnd(int Data);
    void AddBegin(int Data);
    void DeletEnd();
    void DeleteBegin();
    int GetValue(int pos);
    void setValue(int pos, int value);
    int Lenght();
};


#endif // LISTA_H

//Dissclaimer
//The different codes from this page were taken and adapated from Geek for Geeks, Youtube and the repositores
//Of different Github users
