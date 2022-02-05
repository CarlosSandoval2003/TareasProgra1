#include <iostream>

using namespace std;

int main()
{
    int Nota;
    cout << "Ingrese la nota obtenida:"  << endl;
    cin >> Nota;
    if (Nota < 60){
        Nota = 0;
    }
    else if (Nota >= 60 & Nota < 80){
        Nota = 1;
    }
    else if (Nota >= 80){
        Nota = 2;
    }
    switch(Nota)
    {
    case 0:
        cout << "Has perdido la materia :(";
        break;
    case 1:
        cout << "Has ganado la materia, pero necesitas mejorar :/";
        break;
    case 2:
        cout << "Has ganado la materia con una muy buena nota :)";
        break;
    }




  return 0;
}

