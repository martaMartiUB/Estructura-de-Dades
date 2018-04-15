//1. Has implementat la LinkedDeque amb templates? Sigui quina sigui la teva resposta,
//justifica el motiu pel qual has pres aquesta decisió

//    Si, ja que utilitzant templates facilitem la reutilització del codi, 
//    en certs casos poden facilitar molt la feina i saber implementar-los és important. 
    
//2. Tenint en compte la teva implementació del TAD LinkedDeque, indica per a cadascuna
//de les operacions del TAD LinkedDeque quin és el seu cost computacional teòric.
//Justifica la resposta

//    bool isEmpty() const;  O(1) Ja que nomes mira si size és igual a 0.
//    void insertFront(const Element& element); O(1) ja que modificar punters te un cost O(1)
//    void insertRear(const Element& element);  O(1) ja que modificar punters te un cost O(1)
//    void deleteFront(); O(1) modificar punters te un cost O(1)
//    void deleteRear(); O(1) modificar punters te un cost O(1)
//    void print(); O(n) ja que s'ha de recorrer tots els elements de la Deque
//    const Element& getFront()const; O(1) retorna un element i sap on està
//    const Element& getRear()const; O(1) retorna un element i sap on està

//3. Creieu que la classe Node hauria estat millor implementar-la amb encadenaments
//simples? Justifica la teva resposta:

//    No, fent servir enllaços simples no ens deixaria poder accedir tant al seguent node com al previ, 
//    i no podriem fer iteracions del principi al final o al revés, d'aquesta manera podem 
//    accedir a un node en concret per la via més rapida, sigui pel principi o pel final.


#include <cstdlib>
#include <iostream>
#include <vector>

#include "LinkedDeque.h"
#include "Node.h"

using namespace std;
int menu(vector<string> v_options);


/*
La implementacio del deque es fa com a circular, ja que volem que el cost de tots els metodes sigui O(1)
Per fer-ho treballem amb móduls ja que c++ no tracta amb posicions negatives
*/
int main(int argc, char** argv) {
    int x, dim, val; 
   
    vector<string> v_options = {"1. Inserir element pel davant","2. Inserir element pel final","3. Eliminar element pel davant",
            "4. Eliminar element pel final","5. Imprimir contingut de l’ArrayDEQUE","6. Sortir ;"};
    
    
    LinkedDeque<int>* ldq = new LinkedDeque<int>();
    
    
    do{
        cout<< "Què vols fer?"<< endl;
        x = menu(v_options);
        
        switch(x){
            case 1: 
                cout<< "Element a inserir? "<< endl;
                cin>>val;
                ldq->insertFront(val);
                break;
            case 2:
                cout<< "Element a inserir? "<< endl;
                cin>>val;
                ldq->insertRear(val);
                break;
            case 3:
                ldq->deleteFront();
                break;
            case 4:
                ldq->deleteRear();
                break;
            case 5: 
                ldq->print();
                break;
            case 6:
                cout<< "Adéu!"<<endl;
                break;
            
        }
    }while(x!=6);

    return 0;
}

int menu(vector<string> v_options){
    int option;
    for(int i=0; i<v_options.size();i++){
        cout<< v_options[i]<< endl;
    }
    cin>>option;
    return option;
    
}
