#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 9");

    string seguir = "";
    double masa_Cilindro, radio_Cilindro, longitud_Cilindro;
    const double Densidad_Aluminio = 2.7, pi = M_PI;
    do {

        cout << "\n\n\tPrograma que calcula la longitud de un cilindro de aluminio!";
        cout << "\n\t------------------------------------------------------------";

        cout << "\n\n\tCaptura y validaci�n de datos";
        cout << "\n\t-----------------------------";
        cout << "\n\n\tDigite la masa del cilindro en gramos:\t";
        cin >> masa_Cilindro;
        while (!(cin >> masa_Cilindro)) {
            cout << "\n\n\tError: Digite la masa del cilindro en gramos:\t";
            cin.clear();
            cin.ignore(123, '\n');

        }

        cout << "\n\n\tDigite el radio del cilindro en cm:\t";
        cin >> radio_Cilindro;

        cout << "\n\n\tCalculando longitud del cilindro...";
        longitud_Cilindro = masa_Cilindro / (Densidad_Aluminio * ( pi * pow(radio_Cilindro, 2)));
        Sleep(700);

        cout << "\n\n\t\tImprimir datos y resultadors";
        cout << "\n\t-----------------------------------";
        cout << "\n\n\tMasa del cilindro en gramos:\t" << masa_Cilindro;
        cout << "\n\tRadio del cilindro en cm:\t" << radio_Cilindro;
        cout << "\n\tDensidad del aluminio g/cm^3:\t" << Densidad_Aluminio;
        cout << "\n\tLongitud del cilindro en cm:\t" << longitud_Cilindro;
        cout << "\n\t-----------------------------------";



        cout << "\n\n\tDesea procesar otro cilindro? : S/s o N/n\t";
        cin >> seguir;
        while (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n") {
            cout << "\n\n\tError: Haz digitado un dato no valido!";
            Sleep(700);
            system("cls");
            cout << "\n\n\tDesea procesar otro cilindro? : S/s o N/n\t";
            cin >> seguir;
        }
    } while (seguir == "S" || seguir == "s");
}
