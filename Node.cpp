/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: bayli
 * 
 * Created on 27 de marzo de 2018, 19:50
 */

#include "Node.h"

template <class Element> Node<Element>::Node() {                              //Cosntructor per defecte
    element = nullptr;                                                              
}
template <class Element> Node<Element>::Node(const Element &elem){                  //Constructor per parametres
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
Node<Element>* Node<Element>::getNext(){
    return next;
}
template <class Element> 
Node<Element>* Node<Element>::getPrevious(){
    return previous;
}
template <class Element> 
Node<Element>* Node<Element>::getElement(){
    return *element;
}

//SETTERS
template <class Element> 
Node<Element>::setNext(Node<Element>*ptr){
    next = ptr;
}
template <class Element> 
Node<Element>::setPreviious(Node<Element>*ptr){
    previous = ptr;
}