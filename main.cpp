#include<windows.h>
#include <GL/glut.h>
#include <math.h>
void init(void)
{
glClearColor(0.0, 0.0, 0.0, 0.1); // Set display window colour to white
glMatrixMode(GL_PROJECTION); // Set projection parameters
gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
}


void house(GLfloat ax,GLfloat by,GLfloat dx,GLfloat roofh){
  //left house
    glColor3ub (0,1, 4);
    glBegin(GL_POLYGON);
    glVertex2d (ax, 0);
    glVertex2d (ax, by);
    glVertex2d (dx, by);
    glVertex2d (dx, 0);
    glEnd();


    //Roof
    glBegin(GL_POLYGON);
    glVertex2d (ax-20, by);
    glVertex2d ((ax+dx)/2, by+roofh);
    glVertex2d (dx+20, by);

    glEnd();
    //Roof
    //left house
}
void display()
{
    //background
    glColor3ub (19,56, 75);
    glBegin(GL_POLYGON);
    glVertex2d (0, 0);
    glVertex2d (1000, 0);
    glVertex2d (1000, 600);
    glVertex2d (0, 600);
    glEnd();
    //background

    //field
    glColor3ub (0,1, 4);
    glBegin(GL_POLYGON);
    glVertex2d (0, 0);
    glVertex2d (0, 90);
    glVertex2d (80, 110);
    glVertex2d (200, 120);
    glVertex2d (250, 122);
    glVertex2d (275, 120);
    glVertex2d (375, 110);
    glVertex2d (425, 115);
    glVertex2d (480, 110);
    glVertex2d (600, 120);
    glVertex2d (650, 122);
    glVertex2d (675, 120);
    glVertex2d (775, 110);
    glVertex2d (820, 115);
    glVertex2d (850, 110);
    glVertex2d (870, 120);
    glVertex2d (910, 118);
    glVertex2d (935, 110);
    glVertex2d (975, 100);
    glVertex2d (1000, 97);
    glVertex2d (1000, 0);
    glEnd();
    //field

    house(170,340,305,160);
    house(235,180,430,100);
    house(480,210,750,120);

    //Chimni

    glColor3ub (0,1, 4);
    glBegin(GL_POLYGON);
    glVertex2d (500, 185);
    glVertex2d (500, 285);
    glVertex2d (530, 285);
    glVertex2d (530, 225);
    glEnd();


    glColor3ub (0,1, 4);
    glBegin(GL_POLYGON);
    glVertex2d (495, 285);
    glVertex2d (495, 295);
    glVertex2d (535, 295);
    glVertex2d (535, 285);
    glEnd();
    //Chimni

    //side house
    glColor3ub (0,1, 4);
    glBegin(GL_POLYGON);
    glVertex2d (750, 0);
    glVertex2d (750, 160);
    glVertex2d (790, 160);
    glVertex2d (790, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (750, 160);
    glVertex2d (750, 180);
    glVertex2d (800, 160);
    glEnd();
    //side house


    glFlush();
}
int main(int argc, char* argv[])
{
glutInit(&argc, argv); // Initalise GLUT
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); // Set display mode
glutInitWindowPosition(100, 100); // Set window
//position
glutInitWindowSize(1000, 600); // Set
//window size
glutCreateWindow("An Example OpenGL Program"); // Create display
//window

//pg. 18
init(); // Execute initialisation
//procedure
glutDisplayFunc(display); // Send graphics to display window
glutMainLoop(); // Display everything and wait
return 0;
}
