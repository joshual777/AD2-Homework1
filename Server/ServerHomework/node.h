#ifndef NODE_H
#define NODE_H


//Class node (clase nodo) to work in the single linked list and the binary search tree
class Node
{
public:
    Node(int v);
    Node();
    ~Node();

    int getvalue();
    void setValue(int value);
    void print();
    Node* getleft();
    Node* getright();
    Node* gethead();
    void setRight(Node* nodo);
    void setLeft(Node* nodo);
    void sethead(Node* nodo);
private:
    int data;
    Node* left;
    Node* right;
    Node* head;
};


#endif // NODE_H

//Dissclaimer
//The different codes from this page were taken and adapated from Geek for Geeks, Youtube and the repositores
//Of different Github users
