/*Funciones 29/08/2022*/ 

#include <iostream>
#include "funciones.h"

using namespace std;

Square::Square(int x, int y, int dimension){
    this->dimension = dimension;
}

int Shape::getx(){
    return this->x;
}

int Shape::gety(){
    return this->y;
}


/*
//Constructor de la clase Cuadrado

void Square::draw(){

}
//Constructor de la clase Triangulo
void Triangle::draw(){

}

void Circle::draw(){

}
//Constructor de la clase Circulo

*/