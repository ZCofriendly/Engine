//
//  Vector3.cpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#include "Vector3.hpp"

Vector3::Vector3(){
    vx = 0;
    vy = 0;
    vz = 0;
}

double Vector3::norm(){
    return sqrt(vx*vx+vy*vy+vz*vz);
}

double Vector3::getX(){
    return vx;
}
double Vector3::getY(){
    return vy;
}
double Vector3::getZ(){
    return vz;
}

void Vector3::setX(double x){
    vx = x;
}
void Vector3::setY(double y){
    vy = y;
}
void Vector3::setZ(double z){
    vz = z;
}
void Vector3::setVal(double x,double y,double z){
    vx = x;
    vy = y;
    vz = z;
}
void Vector3::setVecVal(Vector3 vec){
    vx = vec.getX();
    vy = vec.getY();
    vz = vec.getZ();
}

std::string Vector3::printVec(){
    std::string pretty = "(" + std::to_string(vx) + "," + std::to_string(vy) + "," + std::to_string(vz) + ")";
    return pretty;
}

void Vector3::add(Vector3 vec){
    vx+=vec.getX();
    vy+=vec.getY();
    vz+=vec.getZ();
}
void Vector3::scale(double s){
    vx = s*vx;
    vy = s*vy;
    vz = s*vz;
}

double Vector3::dot(Vector3 vec){
    return vx*vec.vx+vy*vec.vy+vz*vec.vz;
}

Vector3 Vector3::cross(Vector3 vec){
    Vector3 crossVec;
    crossVec.setX(vy*vec.vz-vz*vec.vy);
    crossVec.setY(vz*vec.vx - vx*vec.vz);
    crossVec.setZ(vx*vec.vy - vy*vec.vx);
    return crossVec;
}
