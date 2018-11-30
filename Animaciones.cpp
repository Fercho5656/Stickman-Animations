#include <iostream>
#include <conio2.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
void Quieto(); void Caminando(); void Corriendo(); void Peleando(); //Declaracion de funciones
const int speed = 300;//Velocidad de las animaciones
void Menu(){
    clrscr();//Limpia la pantalla
    char c;
    cout << "[1] Quieto" << endl;
    cout << "[2] Caminando" << endl;
    cout << "[3] Corriendo" << endl;
    cout << "[4] Peleando" << endl;
    cout << "Presiona x para salir de la animacion y n para salir del programa" << endl;
    c = getch();//Detecta cuando se presiona una tecla
    switch(c){
    case '1':
        Quieto();
        break;
    case '2':
        Caminando();
        break;
    case '3':
        Corriendo();
        break;
    case '4':
        Peleando();
        break;
    case 'n':
        exit(0);
        break;
    default:
        Menu();
    }
    cin.clear();//Resetea bits de estado
    cin.ignore(256,'\n');//Saltea caracteres de entrada
}
void Quieto(){
    while (true){//Bucle infinito
    char c;
    if(kbhit()){//Detecta el momento cuando se presiona una tecla
        c = getch();//Almacena la tecla presionada
        if(c=='x'){
            Menu();
        }
    }
    clrscr();
    cout << " (^_^)  " << endl;
    cout << "°/ | \\°" << endl;
    cout << "   |    " << endl;
    cout << "  / \\  " << endl;
    cout << "_/   \\_" << endl;
    Sleep(speed); clrscr();
    cout << " (^-^)  " << endl;
    cout << " / | \\ " << endl;
    cout << "   |    " << endl;
    cout << "  / \\  " << endl;
    cout << " /_ _\\ " << endl;
    Sleep(speed);//Espera una cantidad de tiempo en milisegundos
    }
}
void Caminando(){
    while (true){
        char c;
        if(kbhit()){
            c = getch();
            if(c=='x'){
                Menu();
            }
        }
        clrscr();
        cout << " (*_*)   " << endl;
        cout << " / | \\  " << endl;
        cout << " \\ |  \\" << endl;
        cout << "   |     " << endl;
        cout << " \\/ \\  " << endl;
        cout << "     \\_ " << endl;
        Sleep(speed); clrscr();
        cout << " (*_*)   " << endl;
        cout << "  /|\\   " << endl;
        cout << "  \\| \\ " << endl;
        cout << "   |\\   " << endl;
        cout << "  _|/    " << endl;
        cout << "   |_    " << endl;
        Sleep(speed); clrscr();
        cout << " (*_*)   " << endl;
        cout << " / | \\  " << endl;
        cout << " \\ |  \\" << endl;
        cout << "   |_    " << endl;
        cout << "  /  \\_ " << endl;
        cout << " /_      " << endl;
        Sleep(speed);
    }
}
void Corriendo(){
    while (true){
        char c;
        if(kbhit()){
            c = getch();
            if(c=='x'){
                Menu();
            }
        }
        clrscr();
        cout << "  (*_*)   " << endl;
        cout << "  / / \\  " << endl;
        cout << " \\ /  \\" << endl;
        cout << "   |     " << endl;
        cout << " \\/ \\  " << endl;
        cout << "     \\_ " << endl;
        Sleep(100); clrscr();
        cout << " (*_*)   " << endl;
        cout << "  /|\\   " << endl;
        cout << "  \\| \\ " << endl;
        cout << "   |\\   " << endl;
        cout << "  _|/    " << endl;
        cout << "   |_    " << endl;
        Sleep(100); clrscr();
        cout << " (*_*)   " << endl;
        cout << " / | \\  " << endl;
        cout << " \\ |  \\" << endl;
        cout << "   |_    " << endl;
        cout << "  /  \\_ " << endl;
        cout << " /_      " << endl;
        Sleep(100);
    }
}
void Peleando(){
    while (true){
        char c;
        if(kbhit()){
            c = getch();
            if(c=='x'){
                Menu();
            }
        }
        clrscr();
        cout << " (`-`)   " << endl;
        cout << "  /|\\/  " << endl;
        cout << "  \\|    " << endl;
        cout << "  / \\   " << endl;
        cout << " /_  \\_ " << endl;
        Sleep(speed); clrscr();
        cout << " (`-`)   " << endl;
        cout << "  /|\\|  " << endl;
        cout << " /_|     " << endl;
        cout << "  / \\   " << endl;
        cout << " /_  \\_ " << endl;
        Sleep(speed); clrscr();
        cout << " (`-`)   " << endl;
        cout << " .=|====B" << endl;
        cout << "/_ |     " << endl;
        cout << "  / \\   " << endl;
        cout << " /_  \\_ " << endl;
        Sleep(speed); clrscr();
        cout << " (`-`)   " << endl;
        cout << ".--|\\/  " << endl;
        cout << " \\ |     " << endl;
        cout << "  / \\   " << endl;
        cout << " /_  \\_ " << endl;
        Sleep(speed);
    }
}
int main(){
    Menu();
    return 0;
}
