#ifndef GRILLE_H
#define GRILLE_H

#include <QObject>

class Grille : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString grilleQML READ readComputer NOTIFY cptChanged)
public:
    explicit Grille(QObject *parent = nullptr);
    /*Q_INVOKABLE void gauche();
    Q_INVOKABLE void droite();
    Q_INVOKABLE void haut();
    Q_INVOKABLE void bas();*/
    QString readComputer();

signals:
    void cptChanged();
public slots:
private:
    int grille;
};

#endif // GRILLE_H
