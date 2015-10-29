#include <QApplication>
#include "GLPolygonWidget.h"
int main(int argc, char *argv[])
 { // main()
 // create the application
 QApplication app(argc, argv);
 // create a label
 GLPolygonWidget *polygonWidget = new GLPolygonWidget(NULL);
 // show the label
 polygonWidget->show();
 polygonWidget->resize(512, 512);
 // start it running
 return app.exec();
 } // main()
