#include <iostream>

using namespace std;

int main()
{
    int Nota;
    int NumClase;
    string NombreClase;
    cout << "CLASES:"<< endl << "1)Fisica I"<< endl <<
    "2)Programacion I"<< endl
    << "3)Proceso Administrativo"<< endl
    << "4)Calculo I"<< endl << "5)Derecho Informatico"
    << endl;
    cout << "Ingrese el numero de clase:" << endl;
    cin >> NumClase;
    switch(NumClase)
    {
    case 1:
        NombreClase = "Fisica I";
        break;
    case 2:
        NombreClase = "Programacion I";
        break;
    case 3:
        NombreClase = "Proceso Administrativo";
        break;
    case 4:
        NombreClase = "Calculo I";
        break;
    case 5:
        NombreClase = "Derecho Informatico";
        break;
    default:
        cout << "Ingrese una opcion valida";
        return 0;
    }
    cout << "Ingrese la nota obtenida:"  << endl;
    cin >> Nota;
    if (Nota < 60 & Nota >= 0){
        Nota = 0;
    }
    else if (Nota >= 60 & Nota < 80){
        Nota = 1;
    }
    else if (Nota >= 80 & Nota < 95){
        Nota = 2;
    }
    else if (Nota >= 95 & Nota < 100){
        Nota = 3;
    }
    else {
        cout << "Ingrese una nota valida";
        return 0;
    }
    switch(Nota)
    {
    case 0:
        cout << "Has perdido " << NombreClase << " :(";
        break;
    case 1:
        cout << "Has ganado <<"<<NombreClase<<", pero necesitas mejorar :/";
        break;
    case 2:
        cout << "Has ganado "<<NombreClase<<" con una muy buena nota :)";
        break;
    case 3:
        cout << "FELICIDADES! Tienes una nota excelente en "<<NombreClase;
    }




  return 0;
}

