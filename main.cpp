#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
//#include "grille.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    //Grille grille;

    QQmlApplicationEngine engine;



    //engine.rootContext()->setContextProperty("vueObjectGrille",&grille);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
