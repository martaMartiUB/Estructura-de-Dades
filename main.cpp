/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Marta
 *
 * Created on 22 de febrero de 2018, 12:14
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    string name;
    int option;
    string arr_options[] = {"Sortir", "Benvinguda"};
    
    cout << "com et dius?"<< endl;
    cin >> name;
    
    do{
        cout<< "hola, " << name << ", que vols fer?"<<endl;
        for (int i = 0; i< sizeof(arr_options)/sizeof(*arr_options);i++){
            cout << i+1 <<". " << arr_options[i] << endl;
        }
        getchar();
        cin >> option;
        if(option == 1 || option == 2){
            if(option == 2){
            cout << "Benvingut/a a Estructura de Dades " << name << endl;
            }
            else if (option == 1){
                cout << "Adeu " << name <<endl;
                option = 0;
            }
        }
        
    }while(option != 0);
    
    
    return 0;
    
}

