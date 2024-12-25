#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <windows.h>
#include <locale.h>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("title, Project 7");
    string seguir = "S";
    double angulo, velocidad, anguloradial;
    double seno, resultadoAlcance, pi=M_PI, resultadoAltura, seno2, alturaRedondeada, factor;
    do {
        cout << "\n\n\tPrograma que calcula el alcance y altura m�xima de un proyectil!";
        cout << "\n\t------------------------------------------------------------------";


            cout << "\n\n\tDigite el �ngulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\t";
            cin >> angulo >> velocidad;

            while(cin.fail()){
                cin.clear();
                cin.ignore();
                cout << "\n\n\tError: Debes digitar valores numericos!";
                Sleep(1000);
                system("cls");
                cout << "\n\n\tDigite el �ngulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\t";
                cin >> angulo >> velocidad;

            };

            while(angulo < 0 || angulo > 90 || velocidad < 0 || velocidad > 90){
                cin.clear();
                cin.ignore();
                cout << "\n\n\tError: Debes digitar valores correctos!";
                Sleep(1000);
                system("cls");
                cout << "\n\n\tDigite el �ngulo > 0 y < 90 y velocidad inicial del proyectil en m/s:\t";
                cin >> angulo >> velocidad;
            };

            // ---------------- Calculo �para el alcance m�ximo ----------------

            anguloradial = angulo * pi / 180;
            seno = sin(2*anguloradial);

            resultadoAlcance = (pow(velocidad, 2) * 1) / 9.8;

            // ---------------- Calculo �para la altura maxima del proyectil ----------------

            seno2 = sin(anguloradial);
            resultadoAltura =  pow((velocidad * seno2), 2);
            resultadoAltura = resultadoAltura / (2 * 9.8);



            cout << "\n\n\t\tImprimir datos y resultado";
            cout << "\n----------------------------------";
            cout << "\n\n\tEl �ngulo de disparo del proyectil es: " << angulo;
            cout << "\n\tLa velocidad inicial del proyectil es: " << velocidad;
            cout << "\n\tEl alcance m�ximo del proyectil es:" << resultadoAlcance;
            cout.precision(12);
            cout << "\n\tLa altura m�xima del proyectil es: " << resultadoAltura;
            cout << "\n\n----------------------------------";






        cout << "\n\n\tDesea procesar otro proyectil S o N?\t";
        cin >> seguir;
        while(seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n"){
            cout << "\n\n\tError: Debes digitar S o N! Vuelve a intentarlo";
            Sleep(1200);
            system("cls");
            cout << "\n\n\tDesea procesar otro proyectil S o N?\t";
            cin >> seguir;
        }
    }while(seguir != "N" && seguir !="n");
}
