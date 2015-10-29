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
 glClearColor(0, 0, 0, 0.0);
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
 glBegin(GL_LINES);
 glColor3f(1,0,0);
 glVertex3f( 0,0,0);
 glVertex3f( 1,0,0);
 //glEnd();
 glColor3f(0,1,0);
 glVertex3f( 0,0,0);
 glVertex3f( 0,1,0);
 glColor3f(0,0,1);
 glVertex3f( 0,0,0);
 glVertex3f(0, 0,1);
 glEnd();
 // flush to screen
 glFlush();
 } // paintGL()
