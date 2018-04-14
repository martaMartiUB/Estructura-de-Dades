#include <iostream>
#include <vector>
using namespace std;

#include "LinkedDeque.hpp"


	int menu() {
		int option;
		vector <string> arr_options = { "Llegir un fitxer amb les entrades de la cua d’impressió", "Eliminar una impressió pel davant", "Eliminar una impressió pel final",
			"Eliminar element pel final", "Inserir n entrades d’impressió des de teclat (0 per finalizar)", "Imprimir la cua d’impressió", "Sortir" };

		for (size_t i = 0; i < arr_options.size(); i++) {
			cout << i + 1 << ". " << arr_options[i] << endl;
		}
		cin >> option;
		if (option > 0 && option <= 6) {
			return option;
		}
		else {
			cout << "Opcio incorrecta!" << endl;
			return -1;
		}
	}



	int main() {
		int option;
		do {
			cout << "hola que vols fer?" << endl;
			option = menu();
			switch (option) {
			case (1):
			{
				//

				break;
			}
			case (2):
			{
				//

				break;
			}
			case (3):
			{
				//
				break;
			}
			case (4):
			{
				//
				break;
			}
			case (5):
			{
				//
				break;
			}
			case (6):
			{

			}
			case (7):
			{
				cout << "Fins despres!" << endl;
				option = 0;
				break;
			}
			default:
			{
				break;
			}
			}
		} while (option != 0);

		return 0;
	}


