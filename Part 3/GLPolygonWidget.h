#include <QGLWidget>
#ifndef __GL_POLYGON_WIDGET_H__
#define __GL_POLYGON_WIDGET_H__ 1
class GLPolygonWidget: public QGLWidget
 { // class GLPolygonWidget
 public:
 GLPolygonWidget(QWidget *parent);

 protected:
 // called when OpenGL context is set up
 void initializeGL();
 // called every time the widget is resized
 void resizeGL(int w, int h);
 // called every time the widget needs painting
 void paintGL();
 //called when the x axis moves
 public slots:
 void xSliderValueChanged(int value);
 }; // class GLPolygonWidget

#endif
