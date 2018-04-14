#ifndef LINKEDDEQUE_H
#define LINKEDDEQUE_H

#include "Node.h"
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

#endif /* LINKEDDEQUE_H */

