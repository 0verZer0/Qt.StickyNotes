#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickStyle>
#include <QQmlContext>

#include "stickynotescore.h"

int main(int argc, char *argv[])
{
    qmlRegisterType<Core::Root>("Core", 1, 0, "Root");
    qmlRegisterType<Core::NotesManager>("Core", 1, 0, "NotesManager");
    qmlRegisterType<Core::Note>("Core", 1, 0, "Note");

    QQuickStyle::setStyle("Material");

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv); 
    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
