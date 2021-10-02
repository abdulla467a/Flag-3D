#include <GL/glut.h>

#include <stdio.h>

#include <GL/gl.h>


void init(void)

{

glClearColor(1.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers

glMatrixMode(GL_PROJECTION); // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack

glLoadIdentity();

glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 1.0);

}

void Draw()

{

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0f, 0.6f, 0.3f);

glBegin(GL_POLYGON);

glVertex2i(20, 30);

glVertex2i(90, 30);

glVertex2i(90, 250);

glVertex2i(20, 250);

glEnd();



glColor3f(1.0f, 1.0f, 0.95f);

glBegin(GL_POLYGON);

glVertex2i(90, 30);

glVertex2i(160, 30);

glVertex2i(160, 250);

glVertex2i(90, 250);

glEnd();


glColor3f(0.803f, 0.129f, 0.165f);

glBegin(GL_POLYGON);

glVertex2i(160, 30);

glVertex2i(230, 30);

glVertex2i(230, 250);

glVertex2i(160, 250);

glEnd();

glutSwapBuffers();

}

int main(int argc,char **argv)

{


glutInit(&argc,argv);

glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );

glutInitWindowPosition(100,100);

glutInitWindowSize(600,600);

glutCreateWindow("Abdulla All Shaykat by Italy Flag 182-15-2105");

init();

glutDisplayFunc(Draw);

glutMainLoop();

return 0;

}

