#ifndef LINKEDDEQUE_H
#define LINKEDDEQUE_H

#include "Node.hpp"

template <class Element>
class LinkedDeque {
 public:
 LinkedDeque();
 ~LinkedDeque();

LinkedDeque(const LinkedDeque<Element>& deque);

bool isEmpty()const;
void insertFront(const Element & element);
void insertRear(const Element & element);
void deleteFront();
void deleteRear();
void print();
const Element& getFront()const;
const Element& getRear()const;

private:
Node<Element> *_front;
Node<Element> *_rear;
int num_elements;
};


template <class Element>
LinkedDeque<Element>::LinkedDeque() {
}

template <class Element>
LinkedDeque<Element>::LinkedDeque(const LinkedDeque<Element>& deque) {
}

template <class Element>
boole LinkedDeque::isEmpty() {
	if (num_elements == 0) {
		return true;
	}
	return false;
}

template <class Element>
LinkedDeque::print() {
	for (int i = 0; i < num_elements; i++) {
		
	}
}

template <class Element>
void LinkedDeque<Element>::insertFront(const Element & element) {
	//Creem l'objecte node de forma dinamica:
	Node* tmp = new Node();
	tmp->data = element;
	tmp->next = nullptr;
	tmp->prev = nullptr;

	if (isEmpty()) {
		//Per afegir el primer element (en cas que sigui buida):
		front = rear = tmp;
	}
	else {
		//En cas que la deque no estigui buida (existeix almenys un element):
		tmp->next = front;
		front->prev = tmp;
		front = tmp;
	}
	num_elements++;
}

template <class Element>
void LinkedDeque::insertRear(const Element & element){
    Node* nou= new Node<Element>(element);
    Node* tmp;
    
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
void LinkedDeque<Element>::deleteFront() {
	//Primer tractem l'excepcio en cas que la deque estigui buida
	if (isEmpty()) {
		throw new DequeEmptyException();
	}
	else {
		//Eliminem el node corresponen al front:
		Node* tmp = front;
		if (front->next != nullptr)
		{
			front = front->next;
			front->prev = nullptr;
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
LinkedDeque<Element>::~LinkedDeque() {
}



#endif /* LINKEDDEQUE_H */

