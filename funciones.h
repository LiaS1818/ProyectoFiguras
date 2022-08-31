//De lo que va cada clase, 

#define funciones
#include <iostream>

using namespace std;
//Clase Padre
class Shape{
private:
        int x, y;
public:
    virtual void draw();
    int getx();
    int gety();

};


// clase hija Square
class Square : public Shape{
private:
    int dimension;
public:
    Square(int, int, int);
        int getDimension(); 
        void draw(){
            int i;
    
/*
            for ( i = 0; i < ; i++)
            {
                
            }*/
            
            int opc;
            cout<<"Puede elegir: \n1)Relleno\n2)Contorno";
            cin>>opc; 
           
            if (opc == 1){

                for (int i = 0; i < dimension ; i++){
        
                    for (int j = 0; j < dimension; j++){

                        if (i<dimension || j < dimension){

                            cout<<"*";
                        }
            
                    }
                    cout<<endl;
                }
                }else{

                    for (int i = 0; i < dimension ; i++)
                    {
                        for (int j = 0; j < dimension; j++)
                        {
                            if ((i==0)||(j==0)||(j==dimension-1)||(i==dimension-1))
                            {
                                cout<<"*";
                            }else{
                                cout<<" ";
                            }
                        
                        }
                        cout<<endl;
                    }               
                }
        };      
};



void lienzo(Shape *fig1){
    fig1->draw();
}


void Menu::correr(){

    
    if (opc == 1)
    {
        
    }
    if (opc ==2)
    {
        /* code */
    }
    if (opc==3)
    {
        /* code */
    }
    
    
}

class Triangle : public Shape{
private:
    int dimension;
public:
    Triangle(int x, int y, int dimension) {

        this ->dimension;
    };
        void draw(){//metodo virtual de la clase Shape

            for (int i = 0; i < dimension+1; i++)
            {
                for (int j = 0; j < i ; j++)
                {
                    cout<<" * ";
                }
                cout<<endl;
            }
        }
    int getDimension();   //creando metodo 
};



class Circle : public Shape{
private:
    int dimension;
public:
    Circle(int x, int y, int dimension){

        this ->dimension;
    };
        void draw(){
            for (size_t i = 0; i < ; i++)
            {
                
            }
        };

    int getDimension();         
    
};


class Menu
{
private:
    int x, y, opc;
public:
    Menu();
    ~Menu();
    void entrada();
    void correr();
};

Menu::Menu()
{   
    x = 0;
    y = 0;
    opc = 1;
};

void Menu::entrada(){

    cout<<"Hola, escribe las cordenadas";

    do
    {
        cout<<"Ingrese la coordenada de x: ";
        cin>>x;

    } while (x <= 0);
    do
    {
        
        cout<<"Ingrese la coordenada de y: ";
        cin>>y;

    } while (y <=0);

    cout<<"Elige una figura"<<endl;
    cout<<"1)Cuadrado\n2)Triangulo\n3)Circulo"<<endl;
    cin>>opc;

    correr();

}


