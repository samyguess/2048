#ifndef GRILLE2_H
#define GRILLE2_H

#include <QObject>

class Grille : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cptQML READ readGrille NOTIFY grilleChanged)

public:
    explicit Grille(QObject *parent = nullptr);
    Q_INVOKABLE void recommencer();
    Q_INVOKABLE void gauche();
    Q_INVOKABLE void droite();
    Q_INVOKABLE void bas();
    Q_INVOKABLE void haut();
    Q_INVOKABLE void annuler();
    QString readGrille();

signals:
    void grilleChanged();

public slots:

private:
    char c;
};


#endif // GRILLE2_H
