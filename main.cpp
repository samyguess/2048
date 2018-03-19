#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "computer.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    Computer computer;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjectCpt",&computer);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
