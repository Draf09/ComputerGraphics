//
//  Poligono.hpp
//  OpenGLTest
//
//  Created by Márcio Sarroglia Pinho on 18/08/20.
//  Copyright © 2020 Márcio Sarroglia Pinho. All rights reserved.
//

#ifndef Poligono_hpp
#define Poligono_hpp

#include <iostream>
using namespace std;


// #ifdef WIN32
// #include <windows.h>
// #include <glut.h>
// #endif

// #ifdef __APPLE__
// #include <GLUT/glut.h>
// #endif

#ifdef __linux__
#include <GL/glut.h>
#endif

#include "Ponto.h"
#include <vector>

class Poligono
{
    vector <Ponto> Vertices;
    Ponto Min, Max, PontoClicado;
public:
    Poligono();
    Ponto getVertice(int);
    unsigned long getNVertices();
    void insereVertice(Ponto);
    void insereVertice(Ponto p, int pos);
    void desenhaPoligono();
    void desenhaVertices();
    void pintaPoligono();
    void imprime();
    void atualizaLimites();
    void obtemLimites(Ponto &Min, Ponto &Max);
    void LePoligono(const char *nome);
    void desenhaAresta(int n);
    void getAresta(int n, Ponto &P1, Ponto &P2);
    int intersec2d(Ponto k, Ponto l, Ponto m, Ponto n, double &s, double &t);
    bool HaInterseccao(Ponto k, Ponto l, Ponto m, Ponto n);

};

#endif 



