//#include "quickwindow.h"              //QtQuick Window with OpenGL conext 4.3 Core profile
#include "window.h"                 //basic window with OpenGL context 4.3 Core profile
#include <QApplication>


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Window* window = new Window();
    //window->setPosition(200, 100);
    window->setMinimumSize( QSize( 512, 512 ) );
    //window->setResizeMode( QQuickView::SizeRootObjectToView );
    window->setTitle("Qt5 OpenGL 4.3 Study");
    //window->setFlags(Qt::FramelessWindowHint);
    //window->setSource(QUrl("qrc:///qml/main.qml"));
    window->show();

    return app.exec();
}
