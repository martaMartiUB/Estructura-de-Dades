/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedDeque.h
 * Author: bayli
 *
 * Created on 27 de marzo de 2018, 18:38
 */

#ifndef LINKEDDEQUE_H
#define LINKEDDEQUE_H
// POSEU aqui els vostres includes
#include "Node.h"
#include <iostream>
#include <initializer_list>
using namespace std;

template <class Element>
class LinkedDeque {
public:
    LinkedDeque();                                  //Cosntructor per defecte
    LinkedDeque(const LinkedDeque<Element>& deque); //Constructor per còpia
    ~LinkedDeque();                                 //Destructor
    bool isEmpty()const;
    void insertFront(const Element & element);
    void insertRear(const Element & element);
    void deleteFront();
    void deleteRear();
    void print();
    const Element& getFront()const;
    const Element& getRear()const;
     
private:
    Node<Element> *front = nullptr;
    Node<Element> *rear = nullptr;
    int num_elements = 0;
};
template <class Element>
LinkedDeque<Element>::LinkedDeque() {
    front = nullptr;
    num_elements = 0;
    
}
template <class Element>
LinkedDeque<Element>::LinkedDeque(const LinkedDeque<Element>& deque) {
//    front = new Node<Element>();
//    rear = new Node<Element>();
//    front->setNext(rear);
//    front->setPreviious(nullptr);
//    rear->setNext(nullptr);
//    rear->setPreviious(front);
    
}

template <class Element>
LinkedDeque<Element>::~LinkedDeque() {
}

//-------------------------------------------------------------
template <class Element>
bool LinkedDeque<Element>::isEmpty()const{
    if(num_elements == 0){
        return true;
    }else{
        return false;
    }   
}

template <class Element>
void LinkedDeque<Element>::insertFront(const Element & element){
    Node<Element> *nou= new Node<Element>(element);
    Node<Element> *tmp;
    
    tmp = front->getNext();
    
    nou->setNext(tmp);
    nou->setPreviious(front);
    
    tmp->setPreviious(nou);
    front->setPreviious(nou);
    
    if(rear->getPrevious() == front){
        front->setPreviious(nou);
    }
    num_elements++;
}
template <class Element>
void LinkedDeque<Element>::insertRear(const Element & element){
    Node<Element> *nou= new Node<Element>(element);
    Node<Element> *tmp;
    
    tmp = rear->getPrevious();
    
    nou->setNext(rear);
    nou->setPreviious(tmp);
    
    tmp->setNext(nou);
    rear->setPreviious(nou);
    
    if(front->getNext() == rear){
        front->setNext(nou);
    }
    num_elements++;
}
template <class Element>
void LinkedDeque<Element>::deleteFront(){
    //Primer tractem l'excepcio en cas que la deque estigui buida
	if (isEmpty()) {
            cout<<"No hi ha elements a eliminar."<<endl;
	}
	else {
		//Eliminem el node corresponen al front:
		Node<Element> *tmp = front;
		if (front->getNext() != nullptr)
		{
			front = front->getNext();
			front->setPreviious(nullptr);
		}
		else
		{
			front = nullptr;
		}
		num_elements--;
		delete tmp;
	}
}
template <class Element>
void LinkedDeque<Element>::deleteRear(){
 //Primer tractem l'excepcio en cas que la deque estigui buida
	if (isEmpty()) {
		cout<<"No hi ha elements a eliminar."<<endl;
	}
	else {
		//Eliminem el node corresponen al rear:
		Node<Element> *tmp = rear;
		if (rear->getPrevious() != nullptr)
		{
			rear = rear->getPrevious();
			rear->setNext(nullptr);
		}
		else
		{
			rear = nullptr;
		}
		num_elements--;
		delete tmp;
	}
}
template <class Element>
void LinkedDeque<Element>::print(){
     Node<Element> *tmp;
    tmp = front->getNext();
    
    while(tmp!= rear){
        cout<< tmp->getElement()<<endl;
        tmp= tmp->getNext();
        
    }
}
//template <class Element>
//Node<Element>* LinkedDeque<Element>::getFront()const{
//    return front;
//}
//template <class Element>
//LinkedDeque<Element>& LinkedDeque<Element>::getRear()const{
//    return rear;
//}
#endif /* LINKEDDEQUE_H */



