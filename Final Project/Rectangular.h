//  
//  Rectangluar.h
//  Final Project


#ifndef Final_Project_Rectangluar_h
#define Final_Project_Rectangluar_h
#include "Surface.h"
#include "cs315.h"

class Rectangular : public Surface{
public:
    Rectangular(GLdouble height, GLdouble width, MaterialInfo fieldMaterial);
    virtual~Rectangular();
    
    GLdouble getHeight();
    GLdouble getWidth();
    MaterialInfo getMat();
    void drawBackground();

    
protected:
    GLdouble h;
    GLdouble w;
    MaterialInfo mat;
    GLuint arena;
	GLuint back;

};


#endif
