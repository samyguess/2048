#ifndef COMPUTER_H
#define COMPUTER_H

#include <QObject>

class Computer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cptQML READ readComputer NOTIFY cptChanged)

public:
    explicit Computer(QObject *parent = nullptr);
    Q_INVOKABLE void increment();
    Q_INVOKABLE void decrement();
    QString readComputer();

signals:
    void cptChanged();

public slots:

private:
    int cpt;
};

#endif // COMPUTER_H
