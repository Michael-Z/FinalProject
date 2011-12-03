//
//  Sphere.h


#ifndef Final_Project_Sphere_h
#define Final_Project_Sphere_h

#include "RigidBody.h"


//a specfic example of a rigidbody, extends rigidbody
//can have its state updated
//can be given a new velocity vector
class Sphere : public RigidBody {
    
protected:
    GLdouble xVel;
    GLdouble yVel;
    
public:
    void printState();
    void updateState(GLdouble dTime);
    void setMaterial(MaterialInfo mat); 
    void bounceTopOrBottom();
    void bounceSide();
    void bounceSphere(Sphere& otherSphere);
    
    

    GLdouble getXPosition();
    GLdouble getYPosition();
    GLdouble getRadius();
    GLuint getDisplayList();
    
    Sphere(GLdouble xPositionInit, GLdouble yPositionInit, GLdouble xVelocity, GLdouble yVelocity, GLdouble radius, MaterialInfo mat);
    virtual ~Sphere();
};
#endif
