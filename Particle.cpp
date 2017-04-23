//
//  Particle.cpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#include "Particle.hpp"


Particle::Particle(){
    position.setVal(0,0,0);
    velocity.setVal(0,0,0);
    acceleration.setVal(0,0,0);
    damping = 0;
    inverseMass = 1;
    forceAccum.setVal(0,0,0);
}

void Particle::addForce(Vector3 force){
    forceAccum.add(force);
}

double Particle::getXPosition(){
    return position.getX();
}
double Particle::getYPosition(){
    return position.getY();
}
double Particle::getZPosition(){
    return position.getZ();
}

void Particle::setPosition(double x,double y,double z){
    position.setVal(x,y,z);
}
void Particle::setVelocity(double x,double y,double z){
    velocity.setVal(x,y,z);
}
void Particle::setAcceleration(double x,double y,double z){
    acceleration.setVal(x,y,z);
}
void Particle::setForceAccum(double x,double y,double z){
    forceAccum.setVal(x,y,z);
}
void Particle::setDamping(double damp){
    damping = damp;
}
void Particle::setInverseMass(double invMass){
    inverseMass = invMass;
}

void Particle::setVecPositon(Vector3 pos){
    position.setVecVal(pos);
}
void Particle::setVecVelocity(Vector3 vel){
    velocity.setVecVal(vel);
}
void Particle::setVecAcceleration(Vector3 acc){
    acceleration.setVecVal(acc);
}

Vector3 Particle::getPosition(){
    return position;
}
Vector3 Particle::getVelocity(){
    return velocity;
}
Vector3 Particle::getAcceleration(){
    return acceleration;
}
Vector3 Particle::getForceAccum(){
    return forceAccum;
}

double Particle::getDamping(){
    return damping;
}
double Particle::getInverseMass(){
    return inverseMass;
}

void Particle::integrate(double duration){
    
    forceAccum.scale(inverseMass);
    Vector3 initialV,finalAcc,copyAcc;
    initialV.setVecVal(getVelocity());
    finalAcc.setVecVal(getForceAccum());
    copyAcc.setVecVal(getForceAccum());
    
    // x = x0 + v0t + 0.5 a t^2
    finalAcc.scale(duration*duration/2);
    
    initialV.scale(duration);
    position.add(finalAcc);
    position.add(initialV);
    //NSLog(@"intermediate position is (%f,%f,%f)",_position.x,_position.y,_position.z);
    
    
    // v = v0 + at
    copyAcc.scale(duration);
    velocity.add(copyAcc);
    
    //velocity.scale(pow(damping,duration))
}


