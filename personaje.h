#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <vector>

#include "habitacion.h"
#include "item.h"

class Personaje{
    private:
        std::string nombre;
        int vida, ataque, dinero, proteccion;
        Habitacion* habitacionActual;
        std::vector <Item*> inventario;

    public:
        Personaje();
        Personaje(std::string, int, Habitacion*, std::vector <Item*>, int, int, int);

        std::string getNombre() const;
        int getVida() const;
        Habitacion getHabitacionActual() const;
        std::vector <Item*> getInventario() const;
        int getAtaque() const;
        int getDinero() const;
        int getProteccion() const;

        void setNombre(std::string);
        void setVida(int);
        void setHabitacionActual(Habitacion*);
        void setInventario(Item*);
        void setAtaque(int);
        void setDinero(int);
        void setProteccion(int);

        void agregarItem(Item*);

        Item* consultaItem(int) const;

        bool camina(std::string);

        void imprime();
};

#endif 