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



template <class Element> Node<Element>::Node() {                              //Cosntructor per defecte
	element = nullptr;
}
template <class Element> Node<Element>::Node(const Element &elem) {                  //Constructor per parametres
	element* = &elem;
}
template <class Element> Node<Element>::Node(const Node& orig) {              //Constructor per copia
	element = orig.getElement;
}

//Destructor
template <class Element>
Node<Element>::~Node() {

}

//GETTERS
template <class Element>
Node<Element>* Node<Element>::getNext() {
	return next;
}
template <class Element>
Node<Element>* Node<Element>::getPrevious() {
	return previous;
}
template <class Element>
Node<Element>* Node<Element>::getElement() {
	return *element;
}

//SETTERS
template <class Element>
Node<Element>::setNext(Node<Element>*ptr) {
	next = ptr;
}
template <class Element>
Node<Element>::setPreviious(Node<Element>*ptr) {
	previous = ptr;
}

#endif /* NODE_H */

