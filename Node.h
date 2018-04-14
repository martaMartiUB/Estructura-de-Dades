/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: bayli
 *
 * Created on 27 de marzo de 2018, 19:50
 */

#ifndef NODE_H
#define NODE_H
template <class Element> 
class Node {
public:
    Node();
    Node(const Element &elem);
    Node(const Node& orig);
    virtual ~Node();
    Node<Element>* getNext();
    Node<Element>* getPrevious();
    const Element& getElement();
    void setNext(Node<Element>*);
    void setPreviious(Node<Element>*);
    
private:
    Node<Element>* next;
    Node<Element>* previous;
    Element *element;
};

#endif /* NODE_H */
