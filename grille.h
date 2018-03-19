#ifndef GRILLE_H
#define GRILLE_H


class Grille : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cptQML READ readComputer NOTIFY grilleChanged)

public:
    explicit Grille(QObject *parent = nullptr);
    Q_INVOKABLE void nouvellePartie();
    Q_INVOKABLE void gauche();
    Q_INVOKABLE void droite();
    Q_INVOKABLE void bas();
    Q_INVOKABLE void haut();
    QString readComputer();

signals:
    void grilleChanged();

public slots:

private:
    int grille;
};

#endif // GRILLE_H
