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
    cout << endl << "Ingrese el numero de clase:" << endl;
    cin >> NumClase;

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
        cout << "Has perdido " << NumClase << " :(";
        break;
    case 1:
        cout << "Has ganado la materia, pero necesitas mejorar :/";
        break;
    case 2:
        cout << "Has ganado la materia con una muy buena nota :)";
        break;
    case 3:
        cout << "FELICIDADES! Tienes una nota excelente";
    }




  return 0;
}

