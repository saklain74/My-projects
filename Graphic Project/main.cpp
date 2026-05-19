#include <GL/glut.h>
#include <cmath>

int scenario = 0;
void scenario0_init();
void scenario1_init();
void scenario2_init();
void scenario3_init();

// =========================================================
// ================   City Front view    ===================
// =========================================================

float _move = 0.0f;  //plane
float _move1 = 0.0f; //boat
float _move2 = 0.0f; //bus
float _move3 = 0.0f; //bird
float _move4 = 0.0f; //cloud1
float _move5 = 0.0f; //cloud2
float _move6 = 0.0f; //car

float speedPlane = 0.005f;
float speedBoat  = 0.003f;
float speedBus   = 0.004f;
float speedBird  = 0.006f;
float speedCloud = 0.002f;
float speedTrain = 0.003f;
float speedCar = 0.007f;

bool running = true;

    //Sky
void sky1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.49, 1.0, 1.0);
    glVertex3f(-25, 0.0, 0.0);
    glVertex3f(-25, 11.5, 0.0);
    glVertex3f(25, 11.5, 0.0);
    glVertex3f(25, 0.0, 0.0);
    glEnd();
}

    //sun
void sun1()
{

    glColor3f(1.0, 1.0, 0.0); // yellow color
    glBegin(GL_POLYGON);

    for (int i = 0; i < 600; i++) {
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 100;
        float r = 0.1f;          // radius of the sun
        float x = r * cos(A);
        float y = r * sin(A)+0.7;
        glVertex2f(x, y);
    }

    glEnd();
}

//Cloud 1
void cloud11()
{

    glPushMatrix();
    glTranslatef(_move4+0.2, 0.8, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.28, 0.8, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.35, 0.8, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.2, 0.75, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.28, 0.75, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.35, 0.75, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.15, 0.77, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.39, 0.77, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();
}

//Cloud 2
void cloud12()
{
    glPushMatrix();
    glTranslatef(_move5+0.6, 0.6, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.68, 0.6, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.75, 0.6, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.6, 0.65, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.68, 0.65, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.75, 0.65, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.55, 0.62, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.79, 0.62, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();
}

//Bird
void bird1()
{
    glPushMatrix();
    glTranslatef(_move3, 0.0, 0.0);

    // Tail
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.933f, 0.4f, 0.0f);
    glVertex3f(1.0f, 0.466f, 0.0f);
    glVertex3f(0.966f, 0.45f, 0.0f);
    glEnd();

    // Body
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.933f, 0.4f, 0.0f);
    glVertex3f(0.966f, 0.45f, 0.0f);
    glVertex3f(0.933f, 0.466f, 0.0f);
    glVertex3f(0.85f, 0.466f, 0.0f);
    glVertex3f(0.883f, 0.466f, 0.0f);
    glEnd();

    // Lips
    glBegin(GL_POLYGON);
    glColor3f(0.37, 0.37, 0.37);
    glVertex3f(0.833f, 0.4f, 0.0f);
    glVertex3f(0.833f, 0.433f, 0.0f);
    glVertex3f(0.85f, 0.466f, 0.0f);
    glEnd();

    // Wings
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.866f, 0.466f, 0.0f);
    glVertex3f(0.916f, 0.466f, 0.0f);
    glVertex3f(0.883f, 0.533f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.9f, 0.466f, 0.0f);
    glVertex3f(0.933f, 0.466f, 0.0f);
    glVertex3f(0.925f, 0.512f, 0.0f);
    glEnd();

    glPopMatrix();
}

//Road
void road1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.698f, 0.745f, 0.7098f);
    glVertex3f(-1.0f, -0.33f, 0.0f);
    glVertex3f(1.0f, -0.33f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.0f, 0.0f);
    glEnd();
}

//RoadLines
void RoadLines1() {
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, -0.166f, 0.0f);
    glVertex3f(-0.5f, -0.166f, 0.0f);
    glVertex3f(-0.5f, -0.13f, 0.0f);
    glVertex3f(-1.0f, -0.13f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.33f, -0.166f, 0.0f);
    glVertex3f(-0.166f, -0.166f, 0.0f);
    glVertex3f(-0.166f, -0.13f, 0.0f);
    glVertex3f(-0.33f, -0.13f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.33f, -0.166f, 0.0f);
    glVertex3f(0.833f, -0.166f, 0.0f);
    glVertex3f(0.833f, -0.13f, 0.0f);
    glVertex3f(0.33f, -0.13f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.833f, -0.166f, 0.0f);
    glVertex3f(1.0f, -0.166f, 0.0f);
    glVertex3f(1.0f, -0.13f, 0.0f);
    glVertex3f(0.833f, -0.13f, 0.0f);
    glEnd();
}

//Lake
void Lake1()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.23f, 0.70f, 0.81f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -0.33f, 0.0f);
    glVertex3f(-1.0f, -0.33f, 0.0f);
    glEnd();
    glPopMatrix();
}

//Border
void border1() {

    // Brown base strip (soil/ground)
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.098, 0.0);
    glVertex3f(-1.0f, -0.33f, 0.0f);
    glVertex3f(1.0f, -0.33f, 0.0f);
    glVertex3f(1.0f, -0.416f, 0.0f);
    glVertex3f(-1.0f, -0.416f, 0.0f);
    glEnd();

    // Black top strip (edge/outlining)
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0f, -0.35f, 0.0f);
    glVertex3f(1.0f, -0.35f, 0.0f);
    glVertex3f(1.0f, -0.33f, 0.0f);
    glVertex3f(-1.0f, -0.33f, 0.0f);
    glEnd();
}

//Plane
void plane1() {
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-1.0f, 0.5f, 0.0f);
    glVertex3f(-0.5f, 0.5f, 0.0f);
    glVertex3f(-0.366f, 0.55f, 0.0f);
    glVertex3f(-0.45f, 0.616f, 0.0f);
    glVertex3f(-0.5f, 0.66f, 0.0f);
    glVertex3f(-1.0f, 0.66f, 0.0f);
    glEnd();

    // Plane windows
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.966f, 0.55f, 0.0f);
    glVertex3f(-0.916f, 0.55f, 0.0f);
    glVertex3f(-0.916f, 0.63f, 0.0f);
    glVertex3f(-0.966f, 0.63f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(-0.866f, 0.55f, 0.0f);
    glVertex3f(-0.816f, 0.55f, 0.0f);
    glVertex3f(-0.816f, 0.63f, 0.0f);
    glVertex3f(-0.866f, 0.63f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(-0.766f, 0.55f, 0.0f);
    glVertex3f(-0.716f, 0.55f, 0.0f);
    glVertex3f(-0.716f, 0.63f, 0.0f);
    glVertex3f(-0.766f, 0.63f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(-0.666f, 0.55f, 0.0f);
    glVertex3f(-0.616f, 0.55f, 0.0f);
    glVertex3f(-0.616f, 0.63f, 0.0f);
    glVertex3f(-0.666f, 0.63f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.566f, 0.55f, 0.0f);
    glVertex3f(-0.516f, 0.55f, 0.0f);
    glVertex3f(-0.516f, 0.63f, 0.0f);
    glVertex3f(-0.566f, 0.63f, 0.0f);
    glEnd();

    // Plane sides
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.916f, 0.66f, 0.0f);
    glVertex3f(-0.83f, 0.66f, 0.0f);
    glVertex3f(-0.883f, 0.833f, 0.0f);
    glVertex3f(-0.916f, 0.833f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-0.66f, 0.66f, 0.0f);
    glVertex3f(-0.583f, 0.66f, 0.0f);
    glVertex3f(-0.633f, 0.833f, 0.0f);
    glVertex3f(-0.7f, 0.833f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-0.66f, 0.33f, 0.0f);
    glVertex3f(-0.616f, 0.33f, 0.0f);
    glVertex3f(-0.583f, 0.516f, 0.0f);
    glVertex3f(-0.68f, 0.516f, 0.0f);
    glEnd();

    glPopMatrix();
}

//BuildingsBackRow
void BuildingsBackRow1() {
    //// 1 ////
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);
    glVertex3f(-0.66f, 0.0f, 0.0f);
    glVertex3f(-0.416f, 0.0f, 0.0f);
    glVertex3f(-0.416f, 0.25f, 0.0f);
    glVertex3f(-0.66f, 0.25f, 0.0f);
    glEnd();

    //// 2 ////
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.6);
    glVertex3f(-0.25f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.25f, 0.0f);
    glVertex3f(-0.25f, 0.25f, 0.0f);
    glEnd();

    //// 3 ////
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.0, 0.29);
    glVertex3f(0.33f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.25f, 0.0f);
    glVertex3f(0.33f, 0.25f, 0.0f);
    glEnd();

    //// 4 ////
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.69, 0.5);
    glVertex3f(0.833f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.25f, 0.0f);
    glVertex3f(0.833f, 0.25f, 0.0f);
    glEnd();
}

//BackRowBuildingWindow
void BackRowBuildingWindow1() {
    //// 1 ////
    glColor3f(1.0,0.69, 0.4);
    glBegin(GL_POLYGON);
        glVertex3f(-0.65f, 0.166f, 0.0f);
        glVertex3f(-0.566f, 0.166f, 0.0f);
        glVertex3f(-0.566f, 0.216f, 0.0f);
        glVertex3f(-0.65f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.65f, 0.15f, 0.0f);
        glVertex3f(-0.566f, 0.15f, 0.0f);
        glVertex3f(-0.566f, 0.1f, 0.0f);
        glVertex3f(-0.65f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.65f, 0.083f, 0.0f);
        glVertex3f(-0.566f, 0.083f, 0.0f);
        glVertex3f(-0.566f, 0.033f, 0.0f);
        glVertex3f(-0.65f, 0.033f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.55f, 0.166f, 0.0f);
        glVertex3f(-0.5f, 0.166f, 0.0f);
        glVertex3f(-0.5f, 0.216f, 0.0f);
        glVertex3f(-0.55f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.55f, 0.15f, 0.0f);
        glVertex3f(-0.5f, 0.15f, 0.0f);
        glVertex3f(-0.5f, 0.1f, 0.0f);
        glVertex3f(-0.55f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.55f, 0.083f, 0.0f);
        glVertex3f(-0.5f, 0.083f, 0.0f);
        glVertex3f(-0.5f, 0.033f, 0.0f);
        glVertex3f(-0.55f, 0.033f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.483f, 0.166f, 0.0f);
        glVertex3f(-0.433f, 0.166f, 0.0f);
        glVertex3f(-0.433f, 0.216f, 0.0f);
        glVertex3f(-0.483f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.483f, 0.15f, 0.0f);
        glVertex3f(-0.433f, 0.15f, 0.0f);
        glVertex3f(-0.433f, 0.1f, 0.0f);
        glVertex3f(-0.483f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.483f, 0.083f, 0.0f);
        glVertex3f(-0.433f, 0.083f, 0.0f);
        glVertex3f(-0.433f, 0.033f, 0.0f);
        glVertex3f(-0.483f, 0.033f, 0.0f);
    glEnd();

    //// 2 ////
    glColor3f(0.0,0.4,0.4);
    glBegin(GL_POLYGON);
        glVertex3f(-0.233f, 0.166f, 0.0f);
        glVertex3f(-0.166f, 0.166f, 0.0f);
        glVertex3f(-0.166f, 0.216f, 0.0f);
        glVertex3f(-0.233f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.233f, 0.15f, 0.0f);
        glVertex3f(-0.166f, 0.15f, 0.0f);
        glVertex3f(-0.166f, 0.1f, 0.0f);
        glVertex3f(-0.233f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.233f, 0.083f, 0.0f);
        glVertex3f(-0.166f, 0.083f, 0.0f);
        glVertex3f(-0.166f, 0.033f, 0.0f);
        glVertex3f(-0.233f, 0.033f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.15f, 0.166f, 0.0f);
        glVertex3f(-0.066f, 0.166f, 0.0f);
        glVertex3f(-0.066f, 0.216f, 0.0f);
        glVertex3f(-0.15f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.15f, 0.15f, 0.0f);
        glVertex3f(-0.066f, 0.15f, 0.0f);
        glVertex3f(-0.066f, 0.1f, 0.0f);
        glVertex3f(-0.15f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.15f, 0.083f, 0.0f);
        glVertex3f(-0.066f, 0.083f, 0.0f);
        glVertex3f(-0.066f, 0.033f, 0.0f);
        glVertex3f(-0.15f, 0.033f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.05f, 0.166f, 0.0f);
        glVertex3f(0.0f, 0.166f, 0.0f);
        glVertex3f(0.0f, 0.216f, 0.0f);
        glVertex3f(-0.05f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.05f, 0.15f, 0.0f);
        glVertex3f(0.0f, 0.15f, 0.0f);
        glVertex3f(0.0f, 0.1f, 0.0f);
        glVertex3f(-0.05f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-0.05f, 0.083f, 0.0f);
        glVertex3f(0.0f, 0.083f, 0.0f);
        glVertex3f(0.0f, 0.033f, 0.0f);
        glVertex3f(-0.05f, 0.033f, 0.0f);
    glEnd();

    //// 3 ////
    glColor3f(1.0,0.8,1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.366f, 0.166f, 0.0f);
        glVertex3f(0.466f, 0.166f, 0.0f);
        glVertex3f(0.466f, 0.216f, 0.0f);
        glVertex3f(0.366f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(0.366f, 0.15f, 0.0f);
        glVertex3f(0.466f, 0.15f, 0.0f);
        glVertex3f(0.466f, 0.1f, 0.0f);
        glVertex3f(0.366f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(0.366f, 0.083f, 0.0f);
        glVertex3f(0.466f, 0.083f, 0.0f);
        glVertex3f(0.466f, 0.033f, 0.0f);
        glVertex3f(0.366f, 0.033f, 0.0f);
    glEnd();

    //// 4 ////
    glColor3f(1.0,1.0,0.4);
    glBegin(GL_POLYGON);
        glVertex3f(0.866f, 0.166f, 0.0f);
        glVertex3f(0.966f, 0.166f, 0.0f);
        glVertex3f(0.966f, 0.216f, 0.0f);
        glVertex3f(0.866f, 0.216f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(0.866f, 0.15f, 0.0f);
        glVertex3f(0.966f, 0.15f, 0.0f);
        glVertex3f(0.966f, 0.1f, 0.0f);
        glVertex3f(0.866f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(0.866f, 0.083f, 0.0f);
        glVertex3f(0.966f, 0.083f, 0.0f);
        glVertex3f(0.966f, 0.033f, 0.0f);
        glVertex3f(0.866f, 0.033f, 0.0f);
    glEnd();
}

//car
void car1() {
    // Body of car
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.85, 0.0);
        glVertex2f(-0.55, 0.0);
        glVertex2f(-0.55, 0.07);
        glVertex2f(-0.60, 0.07);
        glVertex2f(-0.65, 0.17);
        glVertex2f(-0.75, 0.17);
        glVertex2f(-0.80, 0.17);
        glVertex2f(-0.85, 0.07);
        glVertex2f(-0.85, 0.0);
    glEnd();
    glPopMatrix();

    // Top of car
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.61, 0.07);
        glVertex2f(-0.66, 0.16);
        glVertex2f(-0.79, 0.16);
        glVertex2f(-0.84, 0.07);
    glEnd();
    glPopMatrix();

    // Small vertical rectangle in top
    glColor3f(0.0, 0.545, 0.545);
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.73, 0.07);
        glVertex2f(-0.72, 0.07);
        glVertex2f(-0.72, 0.16);
        glVertex2f(-0.73, 0.16);
    glEnd();
    glPopMatrix();

    // Left wheel
    glPushMatrix();
    glTranslatef(_move6 - 0.80, 0.01f, 0.0f);
    glScalef(0.6, 1, 1);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        for(int i = 0; i < 200; i++) {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
    glEnd();
    glColor3f(1.0, 1.0, 1.0); // hubcap
    glBegin(GL_POLYGON);
        for(int i = 0; i < 200; i++) {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
    glEnd();
    glPopMatrix();

    // Right wheel
    glPushMatrix();
    glTranslatef(_move6 - 0.62, 0.01f, 0.0f);
    glScalef(0.6, 1, 1);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        for(int i = 0; i < 200; i++) {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
    glEnd();
    glColor3f(1.0, 1.0, 1.0); // hubcap
    glBegin(GL_POLYGON);
        for(int i = 0; i < 200; i++) {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
    glEnd();
    glPopMatrix();
}

//bus
void bus1() {
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.5f, -0.166f, 0.0f);
    glVertex3f(1.0f, -0.166f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(0.5f, -0.033f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.5f, -0.1f, 0.0f);
    glVertex3f(0.5166f, -0.1f, 0.0f);
    glVertex3f(0.5166f, -0.066f, 0.0f);
    glVertex3f(0.5f, -0.066f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.116f, 0.0f);
    glVertex3f(0.55f, 0.116f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.26, 0.26);
    glVertex3f(0.5833f, 0.016f, 0.0f);
    glVertex3f(0.633f, 0.016f, 0.0f);
    glVertex3f(0.633f, 0.1f, 0.0f);
    glVertex3f(0.5833f, 0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.26, 0.26);
    glVertex3f(0.65f, 0.016f, 0.0f);
    glVertex3f(0.7f, 0.016f, 0.0f);
    glVertex3f(0.7f, 0.1f, 0.0f);
    glVertex3f(0.65f, 0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.26, 0.26);
    glVertex3f(0.716f, 0.016f, 0.0f);
    glVertex3f(0.766f, 0.016f, 0.0f);
    glVertex3f(0.766f, 0.1f, 0.0f);
    glVertex3f(0.716f, 0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.26, 0.26);
    glVertex3f(0.783f, 0.016f, 0.0f);
    glVertex3f(0.833f, 0.016f, 0.0f);
    glVertex3f(0.833f, 0.1f, 0.0f);
    glVertex3f(0.783f, 0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.26, 0.26);
    glVertex3f(0.85f, 0.016f, 0.0f);
    glVertex3f(0.9f, 0.016f, 0.0f);
    glVertex3f(0.9f, 0.1f, 0.0f);
    glVertex3f(0.85f, 0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.26, 0.26, 0.26);
    glVertex3f(0.916f, 0.016f, 0.0f);
    glVertex3f(0.966f, 0.016f, 0.0f);
    glVertex3f(0.966f, 0.1f, 0.0f);
    glVertex3f(0.916f, 0.1f, 0.0f);
    glEnd();

    glPopMatrix();
}

//BusWheels
void BusWheels1() {
    // Front wheel (black)
    glPushMatrix();
    glTranslatef(_move2 + 0.6, -0.2, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 600; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 100;
        float r = 0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    // Front wheel inner circle (white)
    glPushMatrix();
    glTranslatef(_move2 + 0.6, -0.2, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 600; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 100;
        float r = 0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    // Rear wheel (black)
    glPushMatrix();
    glTranslatef(_move2 + 0.92, -0.2, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 600; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 100;
        float r = 0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    // Rear wheel inner circle (white)
    glPushMatrix();
    glTranslatef(_move2 + 0.92, -0.2, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 600; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 100;
        float r = 0.03;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}

//BuildingsFrontRow
  void BuildingsFrontRow1() {
    // Building 1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.6);
    glVertex3f(-1.0f, -0.33f, 0.0f);
    glVertex3f(-0.66f, -0.33f, 0.0f);
    glVertex3f(-0.66f, 0.33f, 0.0f);
    glVertex3f(-1.0f, 0.33f, 0.0f);
    glEnd();

    // Building 4
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.2);
    glVertex3f(0.5f, -0.33f, 0.0f);
    glVertex3f(0.833f, -0.33f, 0.0f);
    glVertex3f(0.833f, 0.33f, 0.0f);
    glVertex3f(0.5f, 0.33f, 0.0f);
    glEnd();
}

//Building windows
void BuildingFrontWindows1() {
    // Windows for building on the left
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.8);
    glVertex3f(-0.966f, 0.166f, 0.0f);
    glVertex3f(-0.833f, 0.166f, 0.0f);
    glVertex3f(-0.833f, 0.25f, 0.0f);
    glVertex3f(-0.966f, 0.25f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.8);
    glVertex3f(-0.7833f, 0.166f, 0.0f);
    glVertex3f(-0.7f, 0.166f, 0.0f);
    glVertex3f(-0.7f, 0.25f, 0.0f);
    glVertex3f(-0.7833f, 0.25f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.8);
    glVertex3f(-0.7833f, 0.0f, 0.0f);
    glVertex3f(-0.7f, 0.0f, 0.0f);
    glVertex3f(-0.7f, 0.0833f, 0.0f);
    glVertex3f(-0.7833f, 0.0833f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.8);
    glVertex3f(-0.966f, 0.0f, 0.0f);
    glVertex3f(-0.833f, 0.0f, 0.0f);
    glVertex3f(-0.833f, 0.0833f, 0.0f);
    glVertex3f(-0.966f, 0.0833f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.8);
    glVertex3f(-0.966f, -0.0833f, 0.0f);
    glVertex3f(-0.833f, -0.0833f, 0.0f);
    glVertex3f(-0.833f, -0.166f, 0.0f);
    glVertex3f(-0.966f, -0.166f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.6, 0.8);
    glVertex3f(-0.7833f, -0.0833f, 0.0f);
    glVertex3f(-0.7f, -0.0833f, 0.0f);
    glVertex3f(-0.7f, -0.166f, 0.0f);
    glVertex3f(-0.7833f, -0.166f, 0.0f);
    glEnd();

    // Windows for building on the right
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.25, 0.0);
    glVertex3f(0.583f, 0.166f, 0.0f);
    glVertex3f(0.65f, 0.166f, 0.0f);
    glVertex3f(0.65f, 0.25f, 0.0f);
    glVertex3f(0.583f, 0.25f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.25, 0.0);
    glVertex3f(0.683f, 0.166f, 0.0f);
    glVertex3f(0.75f, 0.166f, 0.0f);
    glVertex3f(0.75f, 0.25f, 0.0f);
    glVertex3f(0.683f, 0.25f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.25, 0.0);
    glVertex3f(0.583f, 0.083f, 0.0f);
    glVertex3f(0.65f, 0.083f, 0.0f);
    glVertex3f(0.65f, 0.0f, 0.0f);
    glVertex3f(0.583f, 0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.25, 0.0);
    glVertex3f(0.683f, 0.083f, 0.0f);
    glVertex3f(0.75f, 0.083f, 0.0f);
    glVertex3f(0.75f, 0.0f, 0.0f);
    glVertex3f(0.683f, 0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.25, 0.0);
    glVertex3f(0.583f, -0.083f, 0.0f);
    glVertex3f(0.65f, -0.083f, 0.0f);
    glVertex3f(0.65f, -0.166f, 0.0f);
    glVertex3f(0.583f, -0.166f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.25, 0.0);
    glVertex3f(0.683f, -0.083f, 0.0f);
    glVertex3f(0.75f, -0.083f, 0.0f);
    glVertex3f(0.75f, -0.166f, 0.0f);
    glVertex3f(0.683f, -0.166f, 0.0f);
    glEnd();
}

//Trees
void Trees1()
{

    // Tree trunks
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.298, 0.0);
    glVertex3f(-0.6f, -0.33f, 0.0f);
    glVertex3f(-0.566f, -0.33f, 0.0f);
    glVertex3f(-0.566f, 0.166f, 0.0f);
    glVertex3f(-0.6f, 0.166f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.298, 0.0);
    glVertex3f(-0.1f, -0.33f, 0.0f);
    glVertex3f(-0.066f, -0.33f, 0.0f);
    glVertex3f(-0.066f, 0.166f, 0.0f);
    glVertex3f(-0.1f, 0.166f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.298, 0.0);
    glVertex3f(0.4f, -0.33f, 0.0f);
    glVertex3f(0.433f, -0.33f, 0.0f);
    glVertex3f(0.433f, 0.166f, 0.0f);
    glVertex3f(0.4f, 0.166f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.298, 0.0);
    glVertex3f(0.9f, -0.33f, 0.0f);
    glVertex3f(0.933f, -0.33f, 0.0f);
    glVertex3f(0.933f, 0.166f, 0.0f);
    glVertex3f(0.9f, 0.166f, 0.0f);
    glEnd();

    // Lower foliage
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
    glVertex3f(-0.65f, -0.166f, 0.0f);
    glVertex3f(-0.516f, -0.166f, 0.0f);
    glVertex3f(-0.583f, -0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
    glVertex3f(-0.15f, -0.166f, 0.0f);
    glVertex3f(-0.016f, -0.166f, 0.0f);
    glVertex3f(-0.0833f, -0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
    glVertex3f(0.35f, -0.166f, 0.0f);
    glVertex3f(0.483f, -0.166f, 0.0f);
    glVertex3f(0.4166f, 0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
    glVertex3f(0.85f, -0.166f, 0.0f);
    glVertex3f(0.983f, -0.166f, 0.0f);
    glVertex3f(0.9166f, 0.0f, 0.0f);
    glEnd();

    // Upper foliage
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.8, 0.0);
    glVertex3f(-0.65f, -0.05f, 0.0f);
    glVertex3f(-0.516f, -0.05f, 0.0f);
    glVertex3f(-0.583f, 0.33f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.8, 0.0);
    glVertex3f(-0.15f, -0.05f, 0.0f);
    glVertex3f(-0.016f, -0.05f, 0.0f);
    glVertex3f(-0.0833f, 0.33f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.8, 0.0);
    glVertex3f(0.35f, -0.05f, 0.0f);
    glVertex3f(0.483f, -0.05f, 0.0f);
    glVertex3f(0.4166f, 0.33f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.8, 0.0);
    glVertex3f(0.85f, -0.05f, 0.0f);
    glVertex3f(0.983f, -0.05f, 0.0f);
    glVertex3f(0.9166f, 0.33f, 0.0f);
    glEnd();

}

//Boat
void boat1() {
    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);

    // Boat body
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
    glVertex3f(-0.833f, -0.66f, 0.0f);
    glVertex3f(-0.33f, -0.66f, 0.0f);
    glVertex3f(-0.25f, -0.583f, 0.0f);
    glVertex3f(-0.916f, -0.583f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.4);
    glVertex3f(-0.833f, -0.583f, 0.0f);
    glVertex3f(-0.33f, -0.583f, 0.0f);
    glVertex3f(-0.416f, -0.5f, 0.0f);
    glVertex3f(-0.75f, -0.5f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(-0.66f, -0.5f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(-0.583f, -0.33f, 0.0f);
    glEnd();

    // Boat mast
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-0.583f, -0.33f, 0.0f);
    glVertex3f(-0.583f, -0.166f, 0.0f);
    glEnd();

    // Boat flag
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.583f, -0.283f, 0.0f);
    glVertex3f(-0.55f, -0.25f, 0.0f);
    glVertex3f(-0.583f, -0.2166f, 0.0f);
    glEnd();

    // Boat windows
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.75f, -0.566f, 0.0f);
    glVertex3f(-0.7f, -0.566f, 0.0f);
    glVertex3f(-0.7f, -0.516f, 0.0f);
    glVertex3f(-0.75f, -0.516f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.633f, -0.566f, 0.0f);
    glVertex3f(-0.583f, -0.566f, 0.0f);
    glVertex3f(-0.583f, -0.516f, 0.0f);
    glVertex3f(-0.633f, -0.516f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.516f, -0.566f, 0.0f);
    glVertex3f(-0.46f, -0.566f, 0.0f);
    glVertex3f(-0.46f, -0.516f, 0.0f);
    glVertex3f(-0.516f, -0.516f, 0.0f);
    glEnd();

    // Boat base
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.56, 0.698);
    glVertex3f(-0.833f, -0.6833f, 0.0f);
    glVertex3f(-0.33f, -0.6833f, 0.0f);
    glVertex3f(-0.33f, -0.66f, 0.0f);
    glVertex3f(-0.833f, -0.66f, 0.0f);
    glEnd();

    glPopMatrix();
}

void scenario0_display()
{

    sky1();
    sun1();
    cloud11();
    cloud12();
    bird1();
    road1();
    RoadLines1();
    Lake1();
    border1();
    plane1();
    BuildingsBackRow1();
    BackRowBuildingWindow1();
    car1();
    bus1();
    BuildingsFrontRow1();
    BuildingFrontWindows1();
    Trees1();
    boat1();

}

void update1(int value) {
    if (running) {
        _move  += speedPlane;
        _move1 += speedBoat;
        _move2 -= speedBus;
        _move3 += speedBird;
        _move4 += speedCloud;
        _move5 += speedTrain;
        _move6 += speedCar;


        if (_move  > 1.2f) _move  = -1.2f;
        if (_move1 > 1.2f) _move1 = -1.2f;
        if (_move2 > 1.2f) _move2 = -1.2f;
        if (_move3 > 1.2f) _move3 = -1.2f;
        if (_move4 > 1.2f) _move4 = -1.2f;
        if (_move5 > 1.2f) _move5 = -1.2f;
        if (_move6 > 1.5f) _move6 = -1.0f;

    }

    glutPostRedisplay();
    glutTimerFunc(16, update1, 0);
}

void Mouse1(int button, int state, int x, int y) {

    if (state != GLUT_DOWN) return;

    if (button == GLUT_LEFT_BUTTON) {
        running = true;
    } else if (button == GLUT_RIGHT_BUTTON) {
        running = false;
    }
}
void scenario0_keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'p': running = false; break;
        case 'r': running = true;  break;
        case '1':
            scenario = 1;
            scenario1_init();
            break;
        case '2':
            scenario = 2;
            scenario2_init();
            break;
        case '3':
            scenario = 3;
            scenario3_init();
            break;
    }
}

void scenario0_init() {
    glClearColor(1,1,1,1);
    gluOrtho2D(0,1200,0,1200);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

//==========================================================
//==================   City port  ==========================
//==========================================================

float shipPos = -1.0f;
float shipSpeed = 0.002f;
float carPos = -1.2f;
float carSpeed = 0.003f;
float carPos2 = -0.5f;
float carSpeed2 = 0.003f;
float speedMultiplier = 1.0f;

void dockBase2()
{
    glColor3f(0.639f, 0.537f, 0.565f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();
}

void dockUpper2()
{
    glColor3f(0.447f, 0.376f, 0.396f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);
    glEnd();
}


void water2()
{
    glColor3f(0.2196f, 0.9098f,0.8588f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(-1.0f, -0.4f);
    glEnd();
}

void portBuilding2()
{
    glColor3f(0.95f, 0.8f, 0.8f);
    glBegin(GL_QUADS);
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-0.5f, -0.2f);
    glVertex2f(-0.5f,  0.6f);
    glVertex2f(-0.9f,  0.6f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-0.5f, -0.2f);
    glVertex2f(-0.5f,  0.6f);
    glVertex2f(-0.9f,  0.6f);
    glEnd();

    glColor3f(0.4f, 0.4f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glEnd();
}


void buildingWindows2()
{
    glColor3f(0.4941f, 0.6902f, 0.6431f);

    glBegin(GL_QUADS);
    glVertex2f(-0.87f, 0.55f);
    glVertex2f(-0.80f, 0.55f);
    glVertex2f(-0.80f, 0.47f);
    glVertex2f(-0.87f, 0.47f);
    glEnd();
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.87f, 0.55f);
    glVertex2f(-0.80f, 0.55f);
    glVertex2f(-0.80f, 0.47f);
    glVertex2f(-0.87f, 0.47f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f, 0.55f);
    glVertex2f(-0.68f, 0.55f);
    glVertex2f(-0.68f, 0.47f);
    glVertex2f(-0.75f, 0.47f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, 0.55f);
    glVertex2f(-0.68f, 0.55f);
    glVertex2f(-0.68f, 0.47f);
    glVertex2f(-0.75f, 0.47f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.56f, 0.55f);
    glVertex2f(-0.56f, 0.47f);
    glVertex2f(-0.63f, 0.47f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.56f, 0.55f);
    glVertex2f(-0.56f, 0.47f);
    glVertex2f(-0.63f, 0.47f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.87f, 0.43f);
    glVertex2f(-0.80f, 0.43f);
    glVertex2f(-0.80f, 0.35f);
    glVertex2f(-0.87f, 0.35f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.87f, 0.43f);
    glVertex2f(-0.80f, 0.43f);
    glVertex2f(-0.80f, 0.35f);
    glVertex2f(-0.87f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f, 0.43f);
    glVertex2f(-0.68f, 0.43f);
    glVertex2f(-0.68f, 0.35f);
    glVertex2f(-0.75f, 0.35f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, 0.43f);
    glVertex2f(-0.68f, 0.43f);
    glVertex2f(-0.68f, 0.35f);
    glVertex2f(-0.75f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, 0.43f);
    glVertex2f(-0.56f, 0.43f);
    glVertex2f(-0.56f, 0.35f);
    glVertex2f(-0.63f, 0.35f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.63f, 0.43f);
    glVertex2f(-0.56f, 0.43f);
    glVertex2f(-0.56f, 0.35f);
    glVertex2f(-0.63f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.87f, 0.31f);
    glVertex2f(-0.80f, 0.31f);
    glVertex2f(-0.80f, 0.23f);
    glVertex2f(-0.87f, 0.23f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.87f, 0.31f);
    glVertex2f(-0.80f, 0.31f);
    glVertex2f(-0.80f, 0.23f);
    glVertex2f(-0.87f, 0.23f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f, 0.31f);
    glVertex2f(-0.68f, 0.31f);
    glVertex2f(-0.68f, 0.23f);
    glVertex2f(-0.75f, 0.23f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, 0.31f);
    glVertex2f(-0.68f, 0.31f);
    glVertex2f(-0.68f, 0.23f);
    glVertex2f(-0.75f, 0.23f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, 0.31f);
    glVertex2f(-0.56f, 0.31f);
    glVertex2f(-0.56f, 0.23f);
    glVertex2f(-0.63f, 0.23f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.63f, 0.31f);
    glVertex2f(-0.56f, 0.31f);
    glVertex2f(-0.56f, 0.23f);
    glVertex2f(-0.63f, 0.23f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.87f, 0.19f);
    glVertex2f(-0.80f, 0.19f);
    glVertex2f(-0.80f, 0.11f);
    glVertex2f(-0.87f, 0.11f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.87f, 0.19f);
    glVertex2f(-0.80f, 0.19f);
    glVertex2f(-0.80f, 0.11f);
    glVertex2f(-0.87f, 0.11f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f, 0.19f);
    glVertex2f(-0.68f, 0.19f);
    glVertex2f(-0.68f, 0.11f);
    glVertex2f(-0.75f, 0.11f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, 0.19f);
    glVertex2f(-0.68f, 0.19f);
    glVertex2f(-0.68f, 0.11f);
    glVertex2f(-0.75f, 0.11f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, 0.19f);
    glVertex2f(-0.56f, 0.19f);
    glVertex2f(-0.56f, 0.11f);
    glVertex2f(-0.63f, 0.11f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.63f, 0.19f);
    glVertex2f(-0.56f, 0.19f);
    glVertex2f(-0.56f, 0.11f);
    glVertex2f(-0.63f, 0.11f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.87f, 0.07f);
    glVertex2f(-0.80f, 0.07f);
    glVertex2f(-0.80f, -0.01f);
    glVertex2f(-0.87f, -0.01f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.87f, 0.07f);
    glVertex2f(-0.80f, 0.07f);
    glVertex2f(-0.80f, -0.01f);
    glVertex2f(-0.87f, -0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f, 0.07f);
    glVertex2f(-0.68f, 0.07f);
    glVertex2f(-0.68f, -0.01f);
    glVertex2f(-0.75f, -0.01f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, 0.07f);
    glVertex2f(-0.68f, 0.07f);
    glVertex2f(-0.68f, -0.01f);
    glVertex2f(-0.75f, -0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, 0.07f);
    glVertex2f(-0.56f, 0.07f);
    glVertex2f(-0.56f, -0.01f);
    glVertex2f(-0.63f, -0.01f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.63f, 0.07f);
    glVertex2f(-0.56f, 0.07f);
    glVertex2f(-0.56f, -0.01f);
    glVertex2f(-0.63f, -0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.87f, -0.05f);
    glVertex2f(-0.80f, -0.05f);
    glVertex2f(-0.80f, -0.13f);
    glVertex2f(-0.87f, -0.13f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.87f, -0.05f);
    glVertex2f(-0.80f, -0.05f);
    glVertex2f(-0.80f, -0.13f);
    glVertex2f(-0.87f, -0.13f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.75f, -0.05f);
    glVertex2f(-0.68f, -0.05f);
    glVertex2f(-0.68f, -0.13f);
    glVertex2f(-0.75f, -0.13f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, -0.05f);
    glVertex2f(-0.68f, -0.05f);
    glVertex2f(-0.68f, -0.13f);
    glVertex2f(-0.75f, -0.13f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, -0.05f);
    glVertex2f(-0.56f, -0.05f);
    glVertex2f(-0.56f, -0.13f);
    glVertex2f(-0.63f, -0.13f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.63f, -0.05f);
    glVertex2f(-0.56f, -0.05f);
    glVertex2f(-0.56f, -0.13f);
    glVertex2f(-0.63f, -0.13f);
    glEnd();
}


void containers2()
{
    glLineWidth(2.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.4f, -0.2f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.4f, -0.2f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37f,-0.1f);
    glVertex2f(-0.37f,-0.2f);
    glVertex2f(-0.30f,-0.1f);
    glVertex2f(-0.30f,-0.2f);
    glVertex2f(-0.23f,-0.1f);
    glVertex2f(-0.23f,-0.2f);
    glVertex2f(-0.16f,-0.1f);
    glVertex2f(-0.16f,-0.2f);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f( 0.2f, -0.1f);
    glVertex2f( 0.2f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f( 0.2f, -0.1f);
    glVertex2f( 0.2f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.05f,-0.1f);
    glVertex2f(-0.05f,-0.2f);
    glVertex2f( 0.02f,-0.1f);
    glVertex2f( 0.02f,-0.2f);
    glVertex2f( 0.09f,-0.1f);
    glVertex2f( 0.09f,-0.2f);
    glVertex2f( 0.16f,-0.1f);
    glVertex2f( 0.16f,-0.2f);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.5f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.5f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.25f,-0.1f);
    glVertex2f(0.25f,-0.2f);
    glVertex2f(0.32f,-0.1f);
    glVertex2f(0.32f,-0.2f);
    glVertex2f(0.39f,-0.1f);
    glVertex2f(0.39f,-0.2f);
    glVertex2f(0.46f,-0.1f);
    glVertex2f(0.46f,-0.2f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.5f, -0.2f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.5f, -0.2f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.55f,-0.2f);
    glVertex2f(0.62f,-0.1f);
    glVertex2f(0.62f,-0.2f);
    glVertex2f(0.69f,-0.1f);
     glVertex2f(0.69f,-0.2f);
    glVertex2f(0.76f,-0.1f);
    glVertex2f(0.76f,-0.2f);
    glEnd();


    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(0.8f, -0.2f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(0.8f, -0.2f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.85f,-0.1f);
    glVertex2f(0.85f,-0.2f);
    glVertex2f(0.92f,-0.1f);
    glVertex2f(0.92f,-0.2f);
    glVertex2f(0.99f,-0.1f);
    glVertex2f(0.99f,-0.2f);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.4f,  0.0f);
    glVertex2f(-0.1f,  0.0f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.4f, -0.1f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4f,  0.0f);
    glVertex2f(-0.1f,  0.0f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.4f, -0.1f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37f,0.0f);
    glVertex2f(-0.37f,-0.1f);
    glVertex2f(-0.30f,0.0f);
    glVertex2f(-0.30f,-0.1f);
    glVertex2f(-0.23f,0.0f);
    glVertex2f(-0.23f,-0.1f);
    glVertex2f(-0.16f,0.0f);
    glVertex2f(-0.16f,-0.1f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.1f,  0.0f);
    glVertex2f( 0.2f,  0.0f);
    glVertex2f( 0.2f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.1f,  0.0f);
    glVertex2f( 0.2f,  0.0f);
    glVertex2f( 0.2f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.05f,0.0f);
    glVertex2f(-0.05f,-0.1f);
    glVertex2f( 0.02f,0.0f);
    glVertex2f( 0.02f,-0.1f);
    glVertex2f( 0.09f,0.0f);
    glVertex2f( 0.09f,-0.1f);
    glVertex2f( 0.16f,0.0f);
    glVertex2f( 0.16f,-0.1f);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.5f,  0.0f);
    glVertex2f(0.8f,  0.0f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.5f, -0.1f);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5f,  0.0f);
    glVertex2f(0.8f,  0.0f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.5f, -0.1f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55f,0.0f);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.62f,0.0f);
    glVertex2f(0.62f,-0.1f);
    glVertex2f(0.69f,0.0f);
    glVertex2f(0.69f,-0.1f);
    glVertex2f(0.76f,0.0f);
    glVertex2f(0.76f,-0.1f);
    glEnd();
}
void watchTower2()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.2f);
    glVertex2f(0.44f, -0.2f);
    glVertex2f(0.44f, -0.15f);
    glVertex2f(0.36f, -0.15f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.15f);
    glVertex2f(0.44f, -0.15f);
    glVertex2f(0.44f, -0.10f);
    glVertex2f(0.36f, -0.10f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.10f);
    glVertex2f(0.44f, -0.10f);
    glVertex2f(0.44f, -0.05f);
    glVertex2f(0.36f, -0.05f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.05f);
    glVertex2f(0.44f, -0.05f);
    glVertex2f(0.44f, 0.0f);
    glVertex2f(0.36f, 0.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.0f);
    glVertex2f(0.44f, 0.0f);
    glVertex2f(0.44f, 0.05f);
    glVertex2f(0.36f, 0.05f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.05f);
    glVertex2f(0.44f, 0.05f);
    glVertex2f(0.44f, 0.10f);
    glVertex2f(0.36f, 0.10f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.10f);
    glVertex2f(0.44f, 0.10f);
    glVertex2f(0.44f, 0.15f);
    glVertex2f(0.36f, 0.15f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.15f);
    glVertex2f(0.44f, 0.15f);
    glVertex2f(0.44f, 0.20f);
    glVertex2f(0.36f, 0.20f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.20f);
    glVertex2f(0.44f, 0.20f);
    glVertex2f(0.44f, 0.25f);
    glVertex2f(0.36f, 0.25f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.25f);
    glVertex2f(0.44f, 0.25f);
    glVertex2f(0.44f, 0.30f);
    glVertex2f(0.36f, 0.30f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.30f);
    glVertex2f(0.44f, 0.30f);
    glVertex2f(0.44f, 0.35f);
    glVertex2f(0.36f, 0.35f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.35f);
    glVertex2f(0.44f, 0.35f);
    glVertex2f(0.44f, 0.40f);
    glVertex2f(0.36f, 0.40f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.36f, -0.2f);
    glVertex2f(0.44f, -0.2f);
    glVertex2f(0.44f, 0.40f);
    glVertex2f(0.36f, 0.40f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.28f, 0.40f);
    glVertex2f(0.52f, 0.40f);
    glVertex2f(0.52f, 0.50f);
    glVertex2f(0.28f, 0.50f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.28f, 0.40f);
    glVertex2f(0.52f, 0.40f);
    glVertex2f(0.52f, 0.50f);
    glVertex2f(0.28f, 0.50f);
    glEnd();

    glColor3f(0.345f, 0.329f, 0.373f);
    glBegin(GL_QUADS);
    glVertex2f(0.30f, 0.42f);
    glVertex2f(0.34f, 0.42f);
    glVertex2f(0.34f, 0.48f);
    glVertex2f(0.30f, 0.48f);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f); glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.30f, 0.42f);
    glVertex2f(0.34f, 0.42f);
    glVertex2f(0.34f, 0.48f);
    glVertex2f(0.30f, 0.48f);
    glEnd();

    glColor3f(0.345f, 0.329f, 0.373f);
    glBegin(GL_QUADS);
    glVertex2f(0.36f, 0.42f);
    glVertex2f(0.40f, 0.42f);
    glVertex2f(0.40f, 0.48f);
    glVertex2f(0.36f, 0.48f);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.36f, 0.42f);
    glVertex2f(0.40f, 0.42f);
    glVertex2f(0.40f, 0.48f);
    glVertex2f(0.36f, 0.48f);
    glEnd();

    glColor3f(0.345f, 0.329f, 0.373f);
    glBegin(GL_QUADS);
    glVertex2f(0.42f, 0.42f);
    glVertex2f(0.46f, 0.42f);
    glVertex2f(0.46f, 0.48f);
    glVertex2f(0.42f, 0.48f);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.42f, 0.42f);
    glVertex2f(0.46f, 0.42f);
    glVertex2f(0.46f, 0.48f);
    glVertex2f(0.42f, 0.48f);
    glEnd();

    glColor3f(0.345f, 0.329f, 0.373f);
    glBegin(GL_QUADS);
    glVertex2f(0.48f, 0.42f);
    glVertex2f(0.51f, 0.42f);
    glVertex2f(0.51f, 0.48f);
    glVertex2f(0.48f, 0.48f);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.48f, 0.42f);
    glVertex2f(0.51f, 0.42f);
    glVertex2f(0.51f, 0.48f);
    glVertex2f(0.48f, 0.48f);
    glEnd();


    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.28f, 0.50f);
    glVertex2f(0.52f, 0.50f);
    glVertex2f(0.40f, 0.75f);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.28f, 0.50f);
    glVertex2f(0.52f, 0.50f);
    glVertex2f(0.40f, 0.75f);
    glEnd();
}

void ship2()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(shipPos, 0.0f, 0.0f);

    glLineWidth(3.0f);

    glColor3f(0.792f, 0.196f, 0.372f);
    glBegin(GL_QUADS);
    glVertex2f(-0.7f, -0.85f);
    glVertex2f(-0.2f, -0.85f);
    glVertex2f(-0.2f, -0.8f);
    glVertex2f(-0.7f, -0.8f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.7f, -0.85f);
    glVertex2f(-0.2f, -0.85f);
    glVertex2f(-0.2f, -0.8f);
    glVertex2f(-0.7f, -0.8f);
    glEnd();

    glColor3f(0.290f, 0.204f, 0.306f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.7f, -0.8f);
    glVertex2f(-0.2f, -0.8f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.7f, -0.8f);
    glVertex2f(-0.2f, -0.8f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.7f, -0.3f);
    glEnd();

    glColor3f(0.345f, 0.329f, 0.373f);

    glBegin(GL_QUADS);
    glVertex2f(-0.77f, -0.48f);
    glVertex2f(-0.71f, -0.48f);
    glVertex2f(-0.71f, -0.42f);
    glVertex2f(-0.77f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.70f, -0.48f);
    glVertex2f(-0.64f, -0.48f);
    glVertex2f(-0.64f, -0.42f);
    glVertex2f(-0.70f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.63f, -0.48f);
    glVertex2f(-0.57f, -0.48f);
    glVertex2f(-0.57f, -0.42f);
    glVertex2f(-0.63f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.56f, -0.48f);
    glVertex2f(-0.50f, -0.48f);
    glVertex2f(-0.50f, -0.42f);
    glVertex2f(-0.56f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.49f, -0.48f);
    glVertex2f(-0.43f, -0.48f);
    glVertex2f(-0.43f, -0.42f);
    glVertex2f(-0.49f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.48f);
    glVertex2f(-0.36f, -0.48f);
    glVertex2f(-0.36f, -0.42f);
    glVertex2f(-0.42f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.35f, -0.48f);
    glVertex2f(-0.29f, -0.48f);
    glVertex2f(-0.29f, -0.42f);
    glVertex2f(-0.35f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.28f, -0.48f);
    glVertex2f(-0.22f, -0.48f);
    glVertex2f(-0.22f, -0.42f);
    glVertex2f(-0.28f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.21f, -0.48f);
    glVertex2f(-0.15f, -0.48f);
    glVertex2f(-0.15f, -0.42f);
    glVertex2f(-0.21f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.14f, -0.48f);
    glVertex2f(-0.10f, -0.48f);
    glVertex2f(-0.10f, -0.42f);
    glVertex2f(-0.14f, -0.42f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.68f, -0.37f);
    glVertex2f(-0.63f, -0.37f);
    glVertex2f(-0.63f, -0.32f);
    glVertex2f(-0.68f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.62f, -0.37f);
    glVertex2f(-0.57f, -0.37f);
    glVertex2f(-0.57f, -0.32f);
    glVertex2f(-0.62f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.56f, -0.37f);
    glVertex2f(-0.51f, -0.37f);
    glVertex2f(-0.51f, -0.32f);
    glVertex2f(-0.56f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.50f, -0.37f);
    glVertex2f(-0.45f, -0.37f);
    glVertex2f(-0.45f, -0.32f);
    glVertex2f(-0.50f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.44f, -0.37f);
    glVertex2f(-0.39f, -0.37f);
    glVertex2f(-0.39f, -0.32f);
    glVertex2f(-0.44f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.38f, -0.37f);
    glVertex2f(-0.33f, -0.37f);
    glVertex2f(-0.33f, -0.32f);
    glVertex2f(-0.38f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.32f, -0.37f);
    glVertex2f(-0.27f, -0.37f);
    glVertex2f(-0.27f, -0.32f);
    glVertex2f(-0.32f, -0.32f);
    glEnd();

    glPopMatrix();
}

void sun2()
{
    glBegin(GL_POLYGON);
    for(int i = 0; i < 200; i++)
    {
        glColor3f(1.0f, 1.0f, 0.0f);
        float pi = 3.1416f;
        float A = (i * 2 * pi) / 200;
        float r = 0.1f;
        float x = r * cos(A) + 0.8f;
        float y = r * sin(A) + 0.8f;
        glVertex2f(x, y);
    }
    glEnd();
}

void cloud21() {
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) - 0.7f, 0.08f * sin(angle) + 0.7f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) - 0.63f, 0.08f * sin(angle) + 0.7f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) - 0.66f, 0.08f * sin(angle) + 0.74f);
    }
    glEnd();
}

void cloud22() {
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) - 0.2f, 0.08f * sin(angle) + 0.8f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) - 0.12f, 0.08f * sin(angle) + 0.8f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) - 0.16f, 0.08f * sin(angle) + 0.83f);
    }
    glEnd();
}

void cloud23() {
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) + 0.4f, 0.08f * sin(angle) + 0.75f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) + 0.48f, 0.08f * sin(angle) + 0.75f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.12f * cos(angle) + 0.44f, 0.08f * sin(angle) + 0.78f);
    }
    glEnd();
}

void backgroundBuilding21() {
    glColor3f(0.4745f, 0.7804f, 0.8275f);

    glBegin(GL_QUADS);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.9f, 0.3f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.1f, 0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.3f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.4f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-1.0f, 0.5f);
    glEnd();
}

void backgroundbuilding22()
{
    glColor3f(0.404f, 0.675f, 0.737f);


    glBegin(GL_QUADS);
        glVertex2f(1.0f, -0.2f);
        glVertex2f(0.6f, -0.2f);
        glVertex2f(0.6f, 0.2f);
        glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(0.6f, -0.2f);
        glVertex2f(0.6f, 0.1f);
        glVertex2f(0.2f, 0.1f);
        glVertex2f(0.2f, -0.2f);
    glEnd();


    glBegin(GL_QUADS);
        glVertex2f(0.2f, -0.2f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-0.2f, -0.2f);
        glVertex2f(-0.2f, 0.1f);
        glVertex2f(-0.5f, 0.1f);
        glVertex2f(-0.5f, -0.2f);
    glEnd();
}

void Car21()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(carPos, 0.0f, 0.0f);


    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.2f, -0.16f);
    glVertex2f( 0.2f, -0.16f);
    glVertex2f( 0.2f, -0.06f);
    glVertex2f(-0.2f, -0.06f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2f, -0.16f);
    glVertex2f( 0.2f, -0.16f);
    glVertex2f( 0.2f, -0.06f);
    glVertex2f(-0.2f, -0.06f);
    glEnd();


    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.14f, -0.06f);
    glVertex2f( 0.14f, -0.06f);
    glVertex2f( 0.14f,  0.06f);
    glVertex2f(-0.14f,  0.06f);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.14f, -0.06f);
    glVertex2f( 0.14f, -0.06f);
    glVertex2f( 0.14f,  0.06f);
    glVertex2f(-0.14f,  0.06f);
    glEnd();

    glColor3f(1.0f, 0.96f, 0.86f);
    glBegin(GL_QUADS);
    glVertex2f(-0.12f, -0.05f);
    glVertex2f(-0.01f, -0.05f);
    glVertex2f(-0.01f,  0.05f);
    glVertex2f(-0.12f,  0.05f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.12f, -0.05f);
    glVertex2f(-0.01f, -0.05f);
    glVertex2f(-0.01f,  0.05f);
    glVertex2f(-0.12f,  0.05f);
    glEnd();


    glColor3f(1.0f, 0.96f, 0.86f);
    glBegin(GL_QUADS);
    glVertex2f( 0.01f, -0.05f);
    glVertex2f( 0.12f, -0.05f);
    glVertex2f( 0.12f,  0.05f);
    glVertex2f( 0.01f,  0.05f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f( 0.01f, -0.05f);
    glVertex2f( 0.12f, -0.05f);
    glVertex2f( 0.12f,  0.05f);
    glVertex2f( 0.01f,  0.05f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.12f, -0.2f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.04f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.02f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.12f, -0.2f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.04f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.02f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void Car22()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(carPos2, 0.0f, 0.0f);

    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.2f, -0.16f);
    glVertex2f( 0.2f, -0.16f);
    glVertex2f( 0.2f, -0.06f);
    glVertex2f(-0.2f, -0.06f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2f, -0.16f);
    glVertex2f( 0.2f, -0.16f);
    glVertex2f( 0.2f, -0.06f);
    glVertex2f(-0.2f, -0.06f);
    glEnd();


    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.14f, -0.06f);
    glVertex2f( 0.14f, -0.06f);
    glVertex2f( 0.14f,  0.06f);
    glVertex2f(-0.14f,  0.06f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.14f, -0.06f);
    glVertex2f( 0.14f, -0.06f);
    glVertex2f( 0.14f,  0.06f);
    glVertex2f(-0.14f,  0.06f);
    glEnd();

    glColor3f(1.0f, 0.96f, 0.86f);
    glBegin(GL_QUADS);
    glVertex2f(-0.12f, -0.05f);
    glVertex2f(-0.01f, -0.05f);
    glVertex2f(-0.01f,  0.05f);
    glVertex2f(-0.12f,  0.05f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.12f, -0.05f);
    glVertex2f(-0.01f, -0.05f);
    glVertex2f(-0.01f,  0.05f);
    glVertex2f(-0.12f,  0.05f);
    glEnd();

    glColor3f(1.0f, 0.96f, 0.86f);
    glBegin(GL_QUADS);
    glVertex2f( 0.01f, -0.05f);
    glVertex2f( 0.12f, -0.05f);
    glVertex2f( 0.12f,  0.05f);
    glVertex2f( 0.01f,  0.05f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f( 0.01f, -0.05f);
    glVertex2f( 0.12f, -0.05f);
    glVertex2f( 0.12f,  0.05f);
    glVertex2f( 0.01f,  0.05f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.12f, -0.2f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.04f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.02f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.12f, -0.2f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.04f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float r = 0.02f;
        glVertex2f(r * cos(angle), r * sin(angle));
    }
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void displayScenario2(){
    water2();
    sun2();
    cloud21();
    cloud22();
    cloud23();
    backgroundBuilding21();
    backgroundbuilding22();
    dockBase2();
    dockUpper2();
    portBuilding2();
    buildingWindows2();
    watchTower2();
    containers2();
    Car21();
    Car22();
    ship2();
}

void update(int value) {
    if (running) {
        shipPos += shipSpeed * speedMultiplier;
        carPos  += carSpeed  * speedMultiplier;
        carPos2 += carSpeed2 * speedMultiplier;

        if (shipPos > 1.2f) shipPos = -1.2f;
        if (carPos > 1.2f)  carPos  = -1.2f;
        if (carPos2 > 1.2f) carPos2 = -1.2f;
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0); // ~60 FPS
}

void Keyboard2(unsigned char key, int x, int y) {
    switch (key) {
        case 'a':
            speedMultiplier = 2.0f;
            break;
        case 's':
            speedMultiplier = 0.5f;
            break;
        case 'd':
            speedMultiplier = 1.0f;
            break;
        case '0':
            scenario = 0;
            scenario0_init();
            break;
        case '1':
            scenario = 1;
            scenario1_init();
            break;
        case '3':
            scenario = 3;
            scenario3_init();
            break;
    }
}

void Mouse2(int button, int state, int x, int y) {
    if (state != GLUT_DOWN) return;

    if (button == GLUT_LEFT_BUTTON) {
        running = true;
    } else if (button == GLUT_RIGHT_BUTTON) {
        running = false;
    }
}

void scenario2_init() {
    glClearColor(0.5804f, 0.8431f, 0.9490f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

//==========================================================
//================== Train Station =========================
//==========================================================

const float LEFT_X   = 0.0f;
const float RIGHT_X  = 2025.99f;
const float BOTTOM_Y = 0.0f;
const float TOP_Y    = 1300.0f;

float trainOffset = 0.0f;
float cloudOffset = 0.0f;
const int duration = 7000;
const int fps = 60;
bool paused = false;

void drawCircle(float cx, float cy, float r) {
    GLUquadric* quad = gluNewQuadric();
    glPushMatrix();
    glTranslatef(cx, cy, 0);
    gluDisk(quad, 0, r, 50, 1);
    glPopMatrix();
    gluDeleteQuadric(quad);
}

void drawTree(float x, float y, float scale) {
    // Tree trunk
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
        glVertex2f(x - 20 * scale, y);
        glVertex2f(x + 20 * scale, y);
        glVertex2f(x + 20 * scale, y + 120 * scale);
        glVertex2f(x - 20 * scale, y + 120 * scale);
    glEnd();

    // Tree foliage
    glColor3f(0.0f, 0.5f, 0.0f);
    drawCircle(x, y + 140 * scale, 50 * scale);
    drawCircle(x - 40 * scale, y + 120 * scale, 40 * scale);
    drawCircle(x + 40 * scale, y + 120 * scale, 40 * scale);
    drawCircle(x, y + 180 * scale, 45 * scale);
}

void drawWindows(float vertices[][2], int numVertices) {
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    for(int i = 0; i < numVertices; i++)
        glVertex2fv(vertices[i]);
    glEnd();

    glColor3f(0.75f, 0.75f, 0.75f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < numVertices; i++)
        glVertex2fv(vertices[i]);
    glEnd();
}

void train(float xOffset) {
    // Train body
    glColor3f(1.0f, 0.6f, 0.6f);
    glBegin(GL_POLYGON);
        glVertex2f(340 - xOffset, 450);
        glVertex2f(200 - xOffset, 200);
        glVertex2f(1700 - xOffset, 200);
        glVertex2f(1700 - xOffset, 450);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.5f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(340 - xOffset, 450);
        glVertex2f(200 - xOffset, 200);
        glVertex2f(1700 - xOffset, 200);
        glVertex2f(1700 - xOffset, 450);
    glEnd();

    // Train engine
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(270 - xOffset, 320);
        glVertex2f(340 - xOffset, 450);
        glVertex2f(415 - xOffset, 450);
        glVertex2f(415 - xOffset, 320);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.5f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(270 - xOffset, 320);
        glVertex2f(340 - xOffset, 450);
        glVertex2f(415 - xOffset, 450);
        glVertex2f(415 - xOffset, 320);
    glEnd();

    // Train cars
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(485 - xOffset, 420);
        glVertex2f(645 - xOffset, 420);
        glVertex2f(645 - xOffset, 230);
        glVertex2f(485 - xOffset, 230);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.5f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(485 - xOffset, 420);
        glVertex2f(645 - xOffset, 420);
        glVertex2f(645 - xOffset, 230);
        glVertex2f(485 - xOffset, 230);
    glEnd();

    // Additional train cars
    float carPositions[4][4] = {
        {800,400,950,265},
        {1000,400,1150,265},
        {1200,400,1350,265},
        {1400,400,1650,265}
    };

    for(int i = 0; i < 4; i++) {
        glColor3f(0.2f, 0.2f, 0.2f);
        glBegin(GL_POLYGON);
            glVertex2f(carPositions[i][0] - xOffset, carPositions[i][1]);
            glVertex2f(carPositions[i][2] - xOffset, carPositions[i][1]);
            glVertex2f(carPositions[i][2] - xOffset, carPositions[i][3]);
            glVertex2f(carPositions[i][0] - xOffset, carPositions[i][3]);
        glEnd();

        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(2.5f);
        glBegin(GL_LINE_LOOP);
            glVertex2f(carPositions[i][0] - xOffset, carPositions[i][1]);
            glVertex2f(carPositions[i][2] - xOffset, carPositions[i][1]);
            glVertex2f(carPositions[i][2] - xOffset, carPositions[i][3]);
            glVertex2f(carPositions[i][0] - xOffset, carPositions[i][3]);
        glEnd();
    }
}

void drawLamppost(float x, float y) {
    // Lamppost pole
    glColor3f(0.2f, 0.4f, 0.8f);
    glBegin(GL_POLYGON);
        glVertex2f(x - 8, y);
        glVertex2f(x + 8, y);
        glVertex2f(x + 8, y + 200);
        glVertex2f(x - 8, y + 200);
    glEnd();

    // Lamppost top
    glBegin(GL_POLYGON);
        glVertex2f(x - 35, y + 200);
        glVertex2f(x + 35, y + 200);
        glVertex2f(x + 35, y + 215);
        glVertex2f(x - 35, y + 215);
    glEnd();

    // Light
    glColor3f(1.0f, 1.0f, 0.4f);
    drawCircle(x, y + 215, 20);

    // Outline
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
        for(int i=0; i<=50; i++) {
            float angle = 2 * 3.1415926f * i / 50;
            float dx = 20 * cos(angle);
            float dy = 20 * sin(angle);
            glVertex2f(x + dx, y + 215 + dy);
        }
    glEnd();
}

void displayScenario1() {
    // Sky background
    glColor3f(0.53f, 0.81f, 0.98f);
    glBegin(GL_QUADS);
        glVertex2f(LEFT_X, BOTTOM_Y);
        glVertex2f(RIGHT_X, BOTTOM_Y);
        glVertex2f(RIGHT_X, TOP_Y);
        glVertex2f(LEFT_X, TOP_Y);
    glEnd();

    // Clouds
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(1600 + cloudOffset, 1150, 50);
    drawCircle(1650 + cloudOffset, 1180, 60);
    drawCircle(1700 + cloudOffset, 1150, 50);
    drawCircle(1675 + cloudOffset, 1120, 40);
    drawCircle(200 + cloudOffset, 1150, 50);
    drawCircle(250 + cloudOffset, 1180, 60);
    drawCircle(300 + cloudOffset, 1150, 50);
    drawCircle(275 + cloudOffset, 1120, 40);

    // Ground/landscape
    glColor3f(0.3f, 0.7f, 0.3f);
    glBegin(GL_POLYGON);
        glVertex2i(0, 0);
        glVertex2i(2026, 0);
        glVertex2i(2026, 700);
        glVertex2i(1790, 700);
        glVertex2i(1536, 1004);
        glVertex2i(1199, 700);
        glVertex2i(1200, 1200);
        glVertex2i(800, 1200);
        glVertex2i(795, 700);
        glVertex2i(596, 700);
        glVertex2i(404, 890);
        glVertex2i(199, 700);
        glVertex2i(0, 700);
    glEnd();

    // Railway track base
    glColor3f(128.0f/255.0f, 128.0f/255.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2i(2026, 200);
        glVertex2i(0, 200);
        glVertex2i(0, 0);
        glVertex2i(2026, 0);
    glEnd();

    // Railway platform
    glColor3f(0.8f, 0.8f, 0.8f);
    glBegin(GL_POLYGON);
        glVertex2i(0, 330);
        glVertex2i(2026, 330);
        glVertex2i(2026, 200);
        glVertex2i(0, 200);
    glEnd();

    // Railway tracks
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2i(0, 400);
        glVertex2i(2026, 400);
        glVertex2i(2026, 330);
        glVertex2i(0, 330);
    glEnd();

    // Station building
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2i(0, 600);
        glVertex2i(920, 600);
        glVertex2i(800, 800);
        glVertex2i(0, 800);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2i(0, 600);
        glVertex2i(0, 400);
        glVertex2i(880, 400);
        glVertex2i(880, 600);
    glEnd();

    // Station roof
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2i(245, 520);
        glVertex2i(445, 560);
        glVertex2i(615, 520);
    glEnd();

    // Support columns
    glLineWidth(6.0f);
    glBegin(GL_LINES);
        glVertex2i(320, 520);
        glVertex2i(320, 400);
        glVertex2i(440, 520);
        glVertex2i(440, 400);
        glVertex2i(540, 520);
        glVertex2i(540, 400);
    glEnd();

    // Windows
    float bluePolys[4][4][2] = {
        {{670, 550}, {750, 550}, {750, 500}, {670, 500}},
        {{780, 550}, {860, 550}, {860, 500}, {780, 500}},
        {{670, 450}, {750, 450}, {750, 400}, {670, 400}},
        {{780, 450}, {860, 450}, {860, 400}, {780, 400}}
    };
    for(int i = 0; i < 4; i++)
        drawWindows(bluePolys[i], 4);

    float extraPolys[4][4][2] = {
        {{210, 550}, {130, 550}, {130, 500}, {210, 500}},
        {{100, 550}, {100, 500}, {20, 500}, {20, 550}},
        {{210, 450}, {130, 450}, {130, 400}, {210, 400}},
        {{100, 450}, {100, 400}, {20, 400}, {20, 450}}
    };
    for(int i = 0; i < 4; i++)
        drawWindows(extraPolys[i], 4);

    // Additional building
    glColor3f(1.0f, 0.55f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2i(860, 670);
        glVertex2i(1200, 670);
        glVertex2i(1250, 600);
        glVertex2i(800, 600);
    glEnd();

    // Support columns for additional building
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(6.0f);
    glBegin(GL_LINES);
        glVertex2i(1000, 600);
        glVertex2i(1000, 400);
        glVertex2i(1080, 600);
        glVertex2i(1080, 400);
        glVertex2i(1160, 600);
        glVertex2i(1160, 400);
    glEnd();

    // Trees
    drawTree(1600, 400, 1.2f);
    drawTree(1850, 400, 0.7f);

    // Train
    train(trainOffset);
    train(trainOffset - (RIGHT_X + 2000));

    // Lamppost
    drawLamppost(600, 90);
}

void timer1(int value) {
    if(!paused) {
        float trainSpeed = (RIGHT_X + 2000) / (duration / 1000.0f);
        trainOffset += trainSpeed / fps;
        trainOffset = fmod(trainOffset, RIGHT_X + 2000);

        float cloudSpeed = trainSpeed * 0.1f;
        cloudOffset += cloudSpeed / fps;
        cloudOffset = fmod(cloudOffset, RIGHT_X + 2000);
    }
    glutPostRedisplay();
    glutTimerFunc(1000 / fps, timer1, 0);
}

void train_keyboard(unsigned char key, int x, int y) {
    if(key == 'p' || key == 'P') paused = !paused;
    else if (key == '0') { scenario = 0; scenario0_init(); }
    else if (key == '3') { scenario = 3; scenario3_init(); }
    else if (key == '2') { scenario = 2; scenario2_init(); }
}

void mouse(int button, int state, int x, int y) {
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) paused = !paused;
}

void scenario1_init() {
    glClearColor(0.53f, 0.81f, 0.98f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(LEFT_X, RIGHT_X, BOTTOM_Y, TOP_Y);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// =========================================================
// ======================= AIRPORT =========================
// =========================================================
float runwayPlane_dx = 0.0f;
float flyingPlane_dx = 150.0f;
float airport_speed = 0.01f;

// utility
void airport_drawCircle(float cx, float cy, float r) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float A = (i * 2 * 3.1416f) / 100;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

// ground plane
void Airport_GroundPlane() {
    glPushMatrix();
    glTranslatef(runwayPlane_dx, 0.0f, 0.0f);

    // body
    glColor3f(0.91f, 0.91f, 0.91f);
    glBegin(GL_POLYGON);
        glVertex2f(42, 27); glVertex2f(83, 27);
        glVertex2f(87, 23); glVertex2f(87, 21);
        glVertex2f(46, 21); glVertex2f(42, 25);
    glEnd();

    // strip
    glColor3f(0.9f, 0, 0);
    glBegin(GL_POLYGON);
        glVertex2f(42, 25); glVertex2f(85, 25);
        glVertex2f(87, 23); glVertex2f(43.5f, 23);
    glEnd();

    // window
    glColor3f(0.5f, 0.7f, 1);
    glBegin(GL_TRIANGLES);
        glVertex2f(83, 24); glVertex2f(83, 27); glVertex2f(86, 24);
    glEnd();

    // wings
    glColor3f(0.8f, 0.8f, 0.8f);
    glBegin(GL_TRIANGLES);
        glVertex2f(68, 26); glVertex2f(68, 23); glVertex2f(37, 23);
    glEnd();

    // turbine
    glBegin(GL_POLYGON);
        glVertex2f(52, 23); glVertex2f(61, 23);
        glVertex2f(61, 20); glVertex2f(52, 20);
    glEnd();

    // tail
    glBegin(GL_POLYGON);
        glVertex2f(42, 34); glVertex2f(42, 27); glVertex2f(49, 27);
    glEnd();

    // wheels
    glColor3f(0.1f, 0.1f, 0.1f);
    glPushMatrix(); glTranslatef(82.0f, 20.0f, 0.0f); airport_drawCircle(0, 0, 1); glPopMatrix();
    glPushMatrix(); glTranslatef(50.0f, 20.0f, 0.0f); airport_drawCircle(0, 0, 1); glPopMatrix();

    glPopMatrix();
}

// flying plane
void Airport_FlyingPlane() {
    glPushMatrix();
    glTranslatef(flyingPlane_dx, 0.0f, 0.0f);

    // body
    glColor3f(0.91f, 0.91f, 0.91f);
    glBegin(GL_POLYGON);
        glVertex2f(19, 56); glVertex2f(39, 56);
        glVertex2f(41, 58); glVertex2f(22, 58);
        glVertex2f(19, 57);
    glEnd();

    // strip
    glColor3f(0.91f, 0, 0);
    glBegin(GL_POLYGON);
        glVertex2f(21, 57.5f); glVertex2f(19, 56.8f);
        glVertex2f(40, 56.8f); glVertex2f(41, 57.5f);
    glEnd();

    // window
    glColor3f(0.5f, 0.7f, 1);
    glBegin(GL_TRIANGLES);
        glVertex2f(21, 58); glVertex2f(21, 57); glVertex2f(19.3f, 57);
    glEnd();

    // wings
    glColor3f(0.91f, 0.91f, 0.91f);
    glBegin(GL_TRIANGLES);
        glVertex2f(29, 57.6f); glVertex2f(43, 56); glVertex2f(29, 56.8f);
    glEnd();

    // turbine
    glBegin(GL_POLYGON);
        glVertex2f(32, 57); glVertex2f(36, 57);
        glVertex2f(36, 55); glVertex2f(32, 55);
    glEnd();

    // tail
    glBegin(GL_TRIANGLES);
        glVertex2f(37, 58); glVertex2f(41, 58); glVertex2f(41, 62);
    glEnd();

    glPopMatrix();
}

// tree helper
void Airport_Trees(int tx, int ty) {
    // Tree trunk
    glColor3f(0.4f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(tx+0.1f, ty); glVertex2f(tx+0.8f, ty);
        glVertex2f(tx+0.8f, ty+2); glVertex2f(tx+0.1f, ty+2);
    glEnd();

    // Tree foliage
    glColor3f(0, 0.6f, 0);
    glBegin(GL_TRIANGLES);
        glVertex2f(tx-1.1f, ty+2); glVertex2f(tx+0.5f, ty+3.5f); glVertex2f(tx+2, ty+2);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2f(tx-1.1f, ty+3); glVertex2f(tx+0.5f, ty+5); glVertex2f(tx+2, ty+3);
    glEnd();
}

// scenario 3 display
void scenario3_display() {
    // sky
    glColor3f(0.6f, 0.9f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0, 30); glVertex2f(100, 30); glVertex2f(100, 70); glVertex2f(0, 70);
    glEnd();

    //clouds
    glColor3f(1, 1, 1);
    airport_drawCircle(3, 70, 12);
    airport_drawCircle(20, 80, 18);
    airport_drawCircle(37, 75, 8);
    airport_drawCircle(78, 75, 7);
    airport_drawCircle(87, 70, 5);
    airport_drawCircle(99, 70, 10);

    // grass
    glColor3f(0.6f, 1.0f, 0.3f);
    glBegin(GL_POLYGON);
        glVertex2f(0, 0); glVertex2f(100, 0); glVertex2f(100, 30); glVertex2f(0, 30);
    glEnd();

    // airport road
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(0, 10); glVertex2f(100, 10); glVertex2f(100, 20); glVertex2f(0, 20);
    glEnd();

    glColor3f(0.4f,0.4f,0.4f);
    glBegin(GL_POLYGON);
        glVertex2f(0, 20);glVertex2f(0, 22);glVertex2f(100, 22);glVertex2f(100, 20);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0, 10);glVertex2f(100, 10);glVertex2f(100, 8);glVertex2f(0, 8);
    glEnd();

    // road marks
    for (int i=5;i<100;i+=15) {
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            glVertex2f(i+2,14.5f); glVertex2f(i+10,14.5f);
            glVertex2f(i+8,15.5f); glVertex2f(i,15.5f);
        glEnd();
    }

    //tower
    glColor3f(0.4f, 0.5f, 0.7f);
    glBegin(GL_POLYGON);
        glVertex2f(49, 48); glVertex2f(55, 48);
        glVertex2f(55, 29); glVertex2f(49, 29);
    glEnd();

    glColor3f(0.25f, 0.25f, 0.25f);
    glBegin(GL_POLYGON);
        glVertex2f(48, 51); glVertex2f(56, 51);
        glVertex2f(55, 48); glVertex2f(49, 48);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(46, 55); glVertex2f(46, 54);
        glVertex2f(58, 54); glVertex2f(58, 55);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(48, 55); glVertex2f(49, 57);
        glVertex2f(55, 57); glVertex2f(56, 55);
    glEnd();

    glColor3f(0.333f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(48, 51); glVertex2f(56, 51);
        glVertex2f(56, 54); glVertex2f(48, 54);
    glEnd();

    //city buildings
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
            glVertex2f(0, 43); glVertex2f(3, 43);
            glVertex2f(3, 30); glVertex2f(0, 30);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(3, 37); glVertex2f(3, 30);
        glVertex2f(9, 30); glVertex2f(9, 37);
    glEnd();

    glColor3f(0.6f, 0.6f, 0.6f);
    glBegin(GL_POLYGON);
        glVertex2f(9, 40); glVertex2f(12, 40);
        glVertex2f(12, 30); glVertex2f(9, 30);
    glEnd();

    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(11, 34); glVertex2f(18, 34);
        glVertex2f(18, 30); glVertex2f(11, 30);
    glEnd();

    glColor3f(0.7f, 0.5f, 0.7f);
    glBegin(GL_POLYGON);
        glVertex2f(18, 40); glVertex2f(22, 40);
        glVertex2f(22, 30); glVertex2f(18, 30);
    glEnd();

    glColor3f(0.1f, 0.5f, 0.7f);
    glBegin(GL_POLYGON);
        glVertex2f(22, 43); glVertex2f(27, 43);
        glVertex2f(27, 30); glVertex2f(22, 30);
    glEnd();

    glColor3f(0.7f, 0.7f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(27, 40); glVertex2f(30, 40);
        glVertex2f(30, 30); glVertex2f(27, 30);
    glEnd();

    //airport building
    glColor3f(0.333f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(46, 43); glVertex2f(30, 43);
        glVertex2f(30, 29); glVertex2f(46, 29);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(53, 39); glVertex2f(98, 39);
        glVertex2f(98, 29); glVertex2f(53, 29);
    glEnd();

    //roof
    glColor3f(0.25f, 0.25f, 0.25f);
    glBegin(GL_POLYGON);
        glVertex2f(52, 40); glVertex2f(52, 39);
        glVertex2f(99, 39); glVertex2f(99, 40);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(52, 35); glVertex2f(52, 34);
        glVertex2f(99, 34); glVertex2f(99, 35);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(29, 43); glVertex2f(47, 43);
        glVertex2f(47, 42); glVertex2f(29, 42);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(29, 37); glVertex2f(47, 37);
        glVertex2f(47, 36); glVertex2f(29, 36);
    glEnd();

    // sun
    glColor3f(1, 1, 0);
    airport_drawCircle(73, 58, 4);

    // trees
    Airport_Trees(21,29);
    Airport_Trees(23,29);
    Airport_Trees(24,29);
    Airport_Trees(27,29);
    Airport_Trees(10,29);
    Airport_Trees(7,29);
    Airport_Trees(98,29);
    Airport_Trees(96,29);

    // planes
    Airport_GroundPlane();
    Airport_FlyingPlane();
}

// scenario 3 idle (animation updates)
void scenario3_idle() {
    runwayPlane_dx += airport_speed;
    if (runwayPlane_dx > 100) runwayPlane_dx = -100;

    flyingPlane_dx -= airport_speed;
    if (flyingPlane_dx < -100) flyingPlane_dx = 100;
}

// scenario 3 keyboard input
void scenario3_keyboard(unsigned char key, int, int) {
    switch (key) {
        case 'a': airport_speed = 0.005f; break;
        case 's': airport_speed = 0.01f; break;
        case 'd': airport_speed = 0.03f; break;
        case 'x': airport_speed = 0.0f; break;
        case '0':
            scenario = 0;
            scenario0_init();
            break;
        case '1':
            scenario = 1;
            scenario1_init();
            break;
        case '2':
            scenario = 2;
            scenario2_init();
            break;
    }
}

void scenario3_mouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        switch (button) {
            case GLUT_LEFT_BUTTON:   // Left click → pause
                airport_speed = 0.0f;
                break;
            case GLUT_RIGHT_BUTTON:  // Right click → resume
                airport_speed = 0.01f;
                break;
        }
    }
}

// scenario 3 init
void scenario3_init() {
    glClearColor(0.6f, 0.9f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,100,0,70);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// =========================================================
// ================== MERGE CONTROL ========================
// =========================================================
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (scenario == 0) scenario0_display();
    else if (scenario == 1) displayScenario1();
    else if (scenario == 2) displayScenario2();
    else if (scenario == 3) scenario3_display();

    glutSwapBuffers();
}

void idle() {
    if (scenario == 3) scenario3_idle();
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
    if (scenario == 0) scenario0_keyboard(key,x,y);
    else if (scenario == 1) train_keyboard(key,x,y);
    else if (scenario == 2) Keyboard2(key,x,y);
    else if (scenario == 3) scenario3_keyboard(key,x,y);
}

void mouseCallback(int button, int state, int x, int y) {
    if (scenario == 1) mouse(button, state, x, y);
    else if (scenario == 0) Mouse1(button, state, x, y);
    else if (scenario == 2) Mouse2(button, state, x, y);
    else if (scenario == 3) scenario3_mouse(button, state, x, y);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("City View");

    scenario0_init();

    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouseCallback);

    glutTimerFunc(1000 / fps, timer1, 0);
    glutTimerFunc(16, update, 0);
    glutTimerFunc(25, update1, 0);

    glutMainLoop();
    return 0;
}
