#include <iostream>
#include <stdio.h>
#include <GL/glut.h>
#include <employee/Employee.h>

using namespace std;
using namespace Records;

void render()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glEnd();
    glFlush();
}

void testEmployee()
{
    cout << "Test" << endl;

    Employee emp;

    emp.setFirstName("Jonh");
    emp.setLastName("OKddd");
    emp.setEmployeeNumber(71);
    emp.setSalary(40000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();
}

int main(int argc, char* argv[]) {

    testEmployee();

    glutInit(&argc, argv);
    glutInitWindowSize(480, 320);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("OpenGL Window Test");

    glutDisplayFunc(render);

    glutMainLoop();

    return 0;
}