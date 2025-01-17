#include <iostream>
using namespace std;

class Game {
    public:
        Game();
        void creaElementos();
        void creaComandos();
        void play();
        //bool procesaComando(Comando*);
        void imprimeBienvenida();
    private:
        //Parser parser;
        //Character* personaje;
        //Room *sala, *comedor, *jardin;
        //Item *pocion, *libro, *monedas, *llave; 
};

void Game::imprimeBienvenida(){
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░█░░░░░░█░░░█░░░█░░░░░██░░░██████░░███░░░████████░░██████░░░░░█░░░░░░" << endl;
    cout << "░░░░░░░░░███░░░░██░░░█░░░█░░░░░█░░░░░░█░░░░░█░█░░░░░░░█░░░░░█░░░░░░░░██░░░░░░░" << endl;
    cout << "░░░░░░░░██░█░░░██░░░░█░░░█░░░██░░░░░░░█░░░░█████░░░░░░█░░░░░█░░░░░░░██░░░░░░░░" << endl;
    cout << "░░░░░░░░████░░░████░░█░░░█░░░███░░░░░██░░░██░░░█░░░░░██░░░░████░░░░██░░░░░░░░░" << endl;
    cout << "░░░░░░░█░░░█░░░░██░░░█░░░█░░░░░██░░░░█░░░░█░░░░█░░░░░█░░░░░█░░░░░░██░░░░░░░░░░" << endl;
    cout << "░░░░░░░█░░░░█░░░█░░░░██░██░░░░██░░░░██░░░░░░░░░██░░░██░░░░█░░░░░░░░███░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░█░░██░░░░░███░░░░░█░░░░░█░░░░░░░░░░░█░░░█░░░░░█████░░░░░░██░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░█████░░░░░░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░███████░░░░████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░███░░███░░░░███░░████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░█░░░░██░░░░███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░░░████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░████░░██████████░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░██████░░░░░░░░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░██░░░░░░██░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░██░░░░██░░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░█░░██░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░░░░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███░█░█░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
    cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;

    cout << "\nBienvenido a ASUSTATEC el videojuego de Terror en el Tecnologico de Monterrey" << endl;
    cout << "\nEn este videojuego tendrás que pelear contra enemigos, ganar dinero y comprar items para mejorar tu personaje." << endl;
    cout << "\nPara ganar tendrás que ganar/comprar una tarjeta de alumno tec para acceder al elevador y ganar, a continuación te mostramos el mapa."  << endl;

    cout << "\n***************" << endl;
    cout << "*░░░**░░░**░░░*" << endl;
    cout << "*░1░░░░░░░░░E░*" << endl;
    cout << "*░░░**░░░**░░░*" << endl;
    cout << "******░░░******" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "*░2░░░░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "******░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "*░3░░░░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "******░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "*░4░░░░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "******░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "*░5░░░░░░*" << endl;
    cout << "*░░░**░░░*" << endl;
    cout << "**********" << endl;

    cout << "\nEmpezarás en al inicio del pasillo localizado al lado del cuarto #5, tendrás que recorrer los cuartos, vencer enemigos, comprar objetos." << endl;
    cout << "\nTodo con el objetivo de conseguir la tarjeta de alumno tec para acceder al elevador." << endl;
    cout << "\nPara poder desplazarte por el mapa podras usar los siguientes comandos:" << endl;

    cout << "\nMover N = Arriba" << endl;
    cout << "Mover S = Abajo" << endl;
    cout << "Mover O = Izquierda" << endl;
    cout << "Mover E = Derecha" << endl;
};