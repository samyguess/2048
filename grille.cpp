#include "grille.h"



Grille::Grille(QObject *parent) : QObject(parent)
{
    int grille = 10;
    emit cptChanged();
}

QString Grille::readComputer(){
    return QString::number(this->grille);
}
