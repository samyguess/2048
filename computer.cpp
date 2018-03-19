#include "computer.h"

Computer::Computer(QObject *parent) : QObject(parent)
{
    int cpt=10;
    emit cptChanged();
}

void Computer::increment(){
    cpt++;
    emit cptChanged();
}

void Computer::decrement(){
    cpt--;
    emit cptChanged();
}

QString Computer::readComputer(){
    return QString::number(cpt);
}
