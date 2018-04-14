#include "LinkedDeque.h"
#include "Node.h"

template <class Element>
LinkedDeque<Element>::LinkedDeque() {
}

template <class Element>
LinkedDeque<Element>::LinkedDeque(const LinkedDeque<Element>& deque) {
}

template <class Element>
void LinkedDeque<Element> ::insertFront(const Element & element) {
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

