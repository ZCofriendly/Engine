//
//  Particle.hpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "Matrix3x3.hpp"

class Particle{
    private:
        Vector3 position;
        Vector3 velocity;
        Vector3 acceleration;
        double damping;
        double inverseMass;
        Vector3 forceAccum;
    
    public:
    Particle();
    void integrate(double);
    void addForce(Vector3);
    double getXPosition();
    double getYPosition();
    double getZPosition();
    
    void setPosition(double,double,double);
    void setVelocity(double,double,double);
    void setAcceleration(double,double,double);
    void setForceAccum(double,double,double);
    void setDamping(double);
    void setInverseMass(double);
    
    void setVecPositon(Vector3);
    void setVecVelocity(Vector3);
    void setVecAcceleration(Vector3);
    
    Vector3 getPosition();
    Vector3 getVelocity();
    Vector3 getAcceleration();
    Vector3 getForceAccum();
    
    double getDamping();
    double getInverseMass();
};


#endif /* Particle_hpp */
