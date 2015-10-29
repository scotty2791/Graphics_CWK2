#include <QObject>
#include <QApplication>
#include <QSlider>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "GLPolygonWidget.h"

int main(int argc, char *argv[])
 { // main()
 // create the application
 QApplication app(argc, argv);
 
 QWidget *window = new QWidget;
 // create a label
 GLPolygonWidget *polygonWidget = new GLPolygonWidget(NULL);
 QSlider *xSlider = new QSlider(Qt::Horizontal);
 QLabel *xLabel = new QLabel("X");
 //QObject::connect(xSlider,SIGNAL(valueChanged(int)),ySlider,SLOT(xSliderValueChanged(int)));
 
 QSlider *ySlider = new QSlider(Qt::Horizontal);
 QLabel *yLabel = new QLabel("Y");
 QObject::connect(ySlider,SIGNAL(valueChanged(int)),polygonWidget, SLOT (xSliderValueChanged(int)));
 
 QSlider *zSlider = new QSlider(Qt::Horizontal);
 QLabel *zLabel = new QLabel("Z");
 //QObject::connect(zSlider,SIGNAL(valueChanged(int)),polygonWidget,SLOT(zSliderValueChanged(int)));
 
 QHBoxLayout *xSliderLayout = new QHBoxLayout;
 xSliderLayout->addWidget(xLabel);
 xSliderLayout->addWidget(xSlider);
 
  QHBoxLayout *ySliderLayout = new QHBoxLayout;
 ySliderLayout->addWidget(yLabel);
 ySliderLayout->addWidget(ySlider);
 
  QHBoxLayout *zSliderLayout = new QHBoxLayout;
 zSliderLayout->addWidget(zLabel);
 zSliderLayout->addWidget(zSlider);
 
 QVBoxLayout *layout = new QVBoxLayout;
 layout->addWidget(polygonWidget);
 layout->addLayout(xSliderLayout);
 layout->addLayout(ySliderLayout);
 layout->addLayout(zSliderLayout);
 window->setLayout(layout);
 
 
 // show the label
 window->show();
 window->resize(512, 512);

 // start it running
 return app.exec();
 } // main()
