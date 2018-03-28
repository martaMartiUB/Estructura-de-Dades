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
template <class T> class Node {
public:
    Node();
    Node(const T &elem);
    Node(const Node& orig);
    virtual ~Node();
    Node<T>* getNext;
    Node<T>* getPrevious;
    const T& getElement;
    void setNext(Node<T>*);
    void setPreviious(Node<T>*);
    
private:
    Node<T>* next;
    Node<T>* previous;
    T *element;
};

#endif /* NODE_H */

