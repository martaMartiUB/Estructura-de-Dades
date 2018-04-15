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