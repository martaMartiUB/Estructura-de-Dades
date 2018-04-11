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

template <class T> Node<T>::Node() {                              //Cosntructor per defecte
    element = nullptr;                                                              
}
template <class T> Node<T>::Node(const T &elem){                  //Constructor per parametres
    element* = &elem;
}
template <class T> Node<T>::Node(const Node& orig) {              //Constructor per copia
    element = orig.getElement;
}

//Destructor
template <class T> 
Node<T>::~Node() {

}

//GETTERS
template <class T> 
Node<T>* Node<T>::getNext(){
    return next;
}
template <class T> 
Node<T>* Node<T>::getPrevious(){
    return previous;
}
template <class T> 
Node<T>* Node<T>::getElement(){
    return *element;
}

//SETTERS
template <class T> 
Node<T>::setNext(Node<T>*ptr){
    next = ptr;
}
template <class T> 
Node<T>::setPreviious(Node<T>*ptr){
    previous = ptr;
}