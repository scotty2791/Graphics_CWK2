#include "GLPolygonWidget.h"
// constructor
GLPolygonWidget::GLPolygonWidget(QWidget *parent)
 : QGLWidget(parent)
 { // constructor
 // nothing else for now
 } // constructor
// called when OpenGL context is set up
void GLPolygonWidget::initializeGL()
 { // initializeGL()
 // set the widget background colour
 glClearColor(0.3, 0.3, 0.3, 0.0);
 } // initializeGL()
// called every time the widget is resized
void GLPolygonWidget::resizeGL(int w, int h)
 { // resizeGL()
 // set the viewport to the entire widget
 glViewport(0, 0, w, h);
 } // resizeGL()
 // called every time the widget needs painting
void GLPolygonWidget::paintGL()
 { // paintGL()
 // clear the widget
 glClear(GL_COLOR_BUFFER_BIT);

 // draw a single simple polygon
 glBegin(GL_POLYGON);
 glVertex2f( 0.00, 0.75);
 glVertex2f( 0.50, -0.50);
 glVertex2f(-0.50, -0.50);
 glEnd();
 // flush to screen
 glFlush();
 } // paintGL()
