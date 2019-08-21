#include <iostream>
#include "lista.h"
using namespace std;

Lista::Lista() {
    head = 0;
    tail = 0;
    curr = 0;
    temp = 0;
    lenght = Lenght();
}

//ADD END
//Use to add an element at the end of SLL
void Lista::AddEnd(int Data){
    nodePtr n = new node;
    n->next = nullptr;
    n->data = Data;
    if(head != 0){
        tail->next = n;
        tail = n;
    }
    else{
        head = tail = n;
    }
}

//ADD BEGIN
//Add an element at the very beginning of SLL
void Lista::AddBegin( int Data){
    nodePtr n = new node;
    n->next = nullptr;
    n->data = Data;
    lenght = Lenght();
    if(head != 0){
        n->next = head;
        head = n;
    }
    else{
        head = tail = n;
    }
}

//ADD NODE
//Add an element in a specific position of the SLL
void Lista::AddNode(int pos, int value){
   if(pos != 0 && pos != (Lenght()-1)){
       nodePtr n = new node;
       n->data = value;
       n->next = 0;
       int indice = 0;
       temp = head;
       while((pos-1) != indice){
           indice++;
           temp = temp->next;
       }
       n->next = temp->next;
       temp->next = n;
   }else{
       if(pos == 0){
           AddBegin(value);
       }else{
           AddEnd(value);
       }
   }
}

//DELETE BEGIN
//Deletes the first element in a SLL
void Lista::DeleteBegin(){
    nodePtr delPtr = 0;
    int large = Lenght();
    if(large != 1){
        head = head->next;
        delete delPtr;
    }else{
        head = tail = 0;
    }
}

//DELETE END
//Deletes the las element in a SLL
void Lista::DeletEnd(){
    nodePtr delPtr =0;
    int large = Lenght();
    if(large != 1){
        temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = 0;
        tail = temp;
    }else{
        head = tail =0;
    }
    temp = delPtr;
    delete delPtr;
}

//DELETE NODE
//Deletes the node in the indicated position
void Lista::DeleteNode(int pos){
    if(pos != 0 && pos != (Lenght()-1)){
        int indice =0;
        curr = head;
        nodePtr deleteNode =0;
        while(indice != (pos-1)){
            indice++;
            curr = curr->next;
        }
        deleteNode = curr->next;
        curr->next = curr->next->next;
        delete deleteNode;
    }else{
        if(pos == 0){
            DeleteBegin();
        }else{
            DeletEnd();
        }
    }

}

//PRINT
//Method use to print the elements of the list
void Lista::printList(){
    curr = head;
    while(curr != 0){
        cout << curr->data;
        curr = curr->next;
    }
    delete curr;
}

//LENGHT
//Method use to get the size of a list
int Lista::Lenght(){
    int result = 0;
    curr = head;
    while(curr != 0){
        result++;
        curr = curr->next;
    }
    delete curr;
    return result;
}

//GET
//Get the value by giving an index as a parameter in the list
int Lista::GetValue(int pos){
    temp = head;
    int cant = 0;
    if(pos <= Lenght()){
       while(temp != 0 ){
           if(pos == cant){
               cout << "VALUE: "<< temp->data<<endl;
               return temp->data;
               delete temp;
           }
           cant++;
           temp = temp->next;
       }
    }
   else{
        delete temp;
        return false;
    }
}


//SET VALUE
//Insert a value in a specific position
void Lista::setValue(int pos, int value){
    if(pos <= Lenght()){
        int indice = 0;
        temp = head;
        while(indice != (pos)){
            indice++;
            temp = temp->next;
        }
        temp->data = 0;
        temp->data = value;
    }else{
        cout << "La posicion no entra dentro del rango del largo" <<endl;
    }
}

//Dissclaimer
//The different codes from this page were taken and adapated from Geek for Geeks, Youtube and the repositores
//Of different Github users



