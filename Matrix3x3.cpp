//
//  Matrix3x3.cpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#include "Matrix3x3.hpp"

Matrix3x3::Matrix3x3(){
    //sets the default matrix to be the identity matrix
    //note that the vectors are the columns of the matrix
    v1.setVal(1,0,0);
    v2.setVal(0,1,0);
    v3.setVal(0,0,1);
}
void Matrix3x3::setVec1(double x,double y,double z){
    v1.setVal(x,y,z);
}
void Matrix3x3::setVec2(double x,double y,double z){
    v2.setVal(x,y,z);
}
void Matrix3x3::setVec3(double x,double y,double z){
    v3.setVal(x,y,z);
}

void Matrix3x3::setVecValue1(Vector3 vec){
    v1.setVal(vec.getX(),vec.getY(),vec.getZ());
}
void Matrix3x3::setVecValue2(Vector3 vec){
    v2.setVal(vec.getX(),vec.getY(),vec.getZ());
}
void Matrix3x3::setVecValue3(Vector3 vec){
    v3.setVal(vec.getX(),vec.getY(),vec.getZ());
}

Vector3 Matrix3x3::getVec1(){
    return v1;
}
Vector3 Matrix3x3::getVec2(){
    return v2;
}
Vector3 Matrix3x3::getVec3(){
    return v3;
}

void Matrix3x3::scale(double s){
    v1.scale(s);
    v2.scale(s);
    v3.scale(s);
}
void Matrix3x3::scaleVec1(double s){
    v1.scale(s);
}
void Matrix3x3::scaleVec2(double s){
    v2.scale(s);
}
void Matrix3x3::scaleVec3(double s){
    v3.scale(s);
}

double Matrix3x3::det(){
    return v1.dot(v2.cross(v3));
}
void Matrix3x3::transpose(){
    Vector3 newV1,newV2,newV3;
    newV1.setVal(v1.getX(),v2.getX(),v3.getX());
    newV2.setVal(v1.getY(),v2.getY(),v3.getY());
    newV3.setVal(v1.getZ(),v2.getZ(),v3.getZ());
    
    setVecValue1(newV1);
    setVecValue2(newV2);
    setVecValue3(newV3);
}
void Matrix3x3::invert(){
    if(det()==0){
        std::cout << "Error, determinant 0." << std::endl;
    }
    else{
        double a = 1/det();
        Vector3 new1,new2,new3;
        new1.setVal(v2.getY()*v3.getZ()-v2.getZ()*v3.getY(),v2.getZ()*v3.getX()-v2.getX()*v3.getZ(),v2.getX()*v3.getY()-v2.getY()*v3.getX());
        new2.setVal(-v1.getY()*v3.getZ()+v1.getZ()*v3.getY(),-v1.getZ()*v3.getX()+v1.getX()*v3.getZ(),-v1.getX()*v3.getY()+v1.getY()*v3.getX());
        new3.setVal(v1.getY()*v2.getZ()-v1.getZ()*v2.getY(),v1.getZ()*v2.getX()-v1.getX()*v2.getZ(),v1.getX()*v2.getY()-v1.getY()*v2.getX());
        setVecValue1(new1);
        setVecValue2(new2);
        setVecValue3(new3);
        scale(a);
    }
}
