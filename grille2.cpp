#include "grille.h"
#include<iostream>
using namespace std;

Grille::Grille()
{
    char c="nouvelle chaîne";
}

Grille::annuler(){
    c="annuler";
    emit grilleChanged();
}

Grille::recommencer(){
    c="recommencer";
    emit grilleChanged();
}

Grille::gauche(){
    c="gauche";
    emit grilleChanged();
}

Grille::droite(){
    c="droite";
    emit grilleChanged();
}

Grille::bas(){
    c="bas";
    emit grilleChanged();
}

Grille::haut(){
    c="haut";
    emit grilleChanged();
}

QString Grille::readGrille(){
    return QString::c;
}
