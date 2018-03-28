import java.util.*;

public class Persona{
	public static void main(String[] args){
		Persona dos =  new Persona();
		Scanner myScanner = new Scanner(System.in);
		System.out.println("Nom?");
		dos.nom = myScanner.nextLine();
		System.out.println("***Hola" + dos.nom + "***");
		
		System.out.println("Any de naixement?");
		dos.naixement = myScanner.nextInt();
		System.out.println("Mes?");
		dos.mes = myScanner.nextInt();
		System.out.println("Dia?");
		dos.dia = myScanner.nextInt();
		System.out.println("La teva data de naixement es:" + dos.dia + "/" + dos.mes + "/" + dos.naixement);
		
		System.out.println("Tens " + calcularEdat() + " anys");
		System.out.println("El teu signe es: " + calcularHoroscop());
		System.out.println("L'any que vas naixer es: " + calcularParitat());		
	}

	//Atributs:

	static String nom;
	static int naixement = 1997;
	static int mes,dia;

	/*
	* Tests metode calcularEdat ()
	* Entrada   | Sortida
	* -----------------------------
	* Any: 1993 | 24
	* -----------------------------
	* Any: 1990 | 27
	* -----------------------------
	*/
	static int calcularEdat(){
		int edat;
		edat = 2017 - naixement;
		return edat;
	}

	/*
	* Tests metode calcularParitat ()
	* Entrada   | Sortida
	* -----------------------------
	* Any: 1993 | "senar"
	* -----------------------------
	* Any: 1990 | "parell"
	* -----------------------------
	*/
	static String calcularParitat(){
		String parellSenar ="";
		if (naixement % 2 == 0){
			return parellSenar = "L'any es parell";
		}
		else{
			return parellSenar = "L'any es senar";
		}	
	}
	
	/*
	* Tests metode calcularHoroscop ()
	* Entrada        | Sortida
	* -----------------------------
	* Mes: 2 Dia: 16 | "Acuario"
	* -----------------------------
	* Mes: 12 Dia: 23| "Capricornio"
	* -----------------------------
	*/
	static String calcularHoroscop(){
		if((dia >= 21 && mes == 3)|| (dia <=20 && mes == 4)){
			return "Aries";
		}
		else if ((dia >= 21 && mes == 4)|| (dia <=21 && mes == 5)){
			return "Tauro";
		}
		else if ((dia >= 21 && mes == 5)|| (dia <=21 && mes == 6)){
			return "Geminis";
		}
		else if ((dia >= 22 && mes == 6)|| (dia <=22 && mes == 7)){
			return "Cancer";
		}
		else if ((dia >= 23 && mes == 7)|| (dia <=22 && mes == 8)){
			return "Leo";
		}
		else if ((dia >= 23 && mes == 8)|| (dia <=22 && mes == 9)){
			return "Virgo";
		}
		else if ((dia >= 23 && mes == 9)|| (dia <=22 && mes == 10)){
			return "Libra";
		}
		else if ((dia >= 23 && mes == 10)|| (dia <=22 && mes == 11)){
			return "Escorpio";
		}
		else if ((dia >= 23 && mes == 11)|| (dia <=21 && mes == 12)){
			return "Sagitario";
		}
		else if ((dia >= 22 && mes == 12)|| (dia <=20 && mes == 1)){
			return "Capricornio";
		}
		else if ((dia >= 21 && mes == 1)|| (dia <=19 && mes == 2)){
			return "Acuario";
		}
		else if ((dia >= 20 && mes == 2)|| (dia <=20 && mes == 3)){
			return "Piscis";
		}
		else{
			return "Error";	
		}	
	}
  }

