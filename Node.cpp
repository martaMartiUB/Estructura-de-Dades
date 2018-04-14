

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