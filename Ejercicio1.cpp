#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime> 
#include <stdio.h>
#include <vector>

using namespace std;

struct Trabajadores {
  string nombre;
  float salario_x_h;
  int horas_trabajadas;
  float salario_semana;
  int horas_extras;
  float igss;
};


void calculo_grabar()
{
    Trabajadores x;

    cout << "Ingrese el nombre del trabajador: " << "\n";
    cin >> x.nombre;
    cout << "Ingrese el salario por hora del trabajador: " << "\n";
    cin >> x.salario_x_h;
    cout << "Ingrese el total de horas trabajas del trabajador: " << "\n";
    cin >> x.horas_trabajadas;

    // declaro las variables para el calculo
    float extra_total, igss, total;
    int tiempoextra;

    if (x.horas_trabajadas > 40) {
      tiempoextra=x.horas_trabajadas-40;
      cout << tiempoextra;

      extra_total=(tiempoextra*1.5)*x.salario_x_h;
      cout << extra_total;
      total=((x.horas_trabajadas-tiempoextra)*x.salario_x_h)+extra_total;
      cout << total;

    } else {
      total=(x.horas_trabajadas*x.salario_x_h);
    }
    x.salario_semana=total;
    x.horas_extras=tiempoextra;
    x.igss=total*(4.83/100);

    // grabamos en el archivo.
    ofstream miarchivo("planilla.txt", std::ios_base::app);
    miarchivo << x.nombre << endl;
    miarchivo << x.salario_x_h << endl;
    miarchivo << x.horas_trabajadas << endl;
    miarchivo << x.salario_semana << endl;
    miarchivo << x.horas_extras << endl;
    miarchivo << x.igss << endl;

    //Cerramos la escritura del archivo.
    miarchivo.close();
}

int main() {
  int contador;
  char tecla;
  string empty;
  bool bandera=false;
  Trabajadores en_memoria[25];

  
  do
    {
        system("clear");
        cin.clear();
        cout << "Calculo de Salario" << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .- Ingresar Trabajador" <<endl;
        cout << "\t2 .- Leer registros y grabar en memoria" <<endl;
        cout << "\t3 .- Mostrar total de planilla" << endl;
        cout << "\t4 .- Salir" << endl << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
    		{
			case '1':
				system("clear");
        calculo_grabar();
        contador=contador+1;
        break;
 
			case '2':
        system("clear");
        //declaramos la variable para leer archivo
        ifstream miarchivo;
        //abrimos archivo 
        miarchivo.open("planilla.txt",ios::in);
        for (int i = 0; i < contador; i++) 
          en_memoria.
        
 

        break;
      
      case '3':
        system("clear");
        break;

      case '4':
				bandera=true;
				//exit(1);
				break;
 
			default:
				system("clear");
				cout << "Opcion no valida.\a\n";
				getchar();
        getline(cin, empty);
				break;
		}
    }while(bandera!=true);
  
  return 0;
}
