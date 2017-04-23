//
//  Vector3.hpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#ifndef Vector3_hpp
#define Vector3_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>

class Vector3{
private:
    double vx;
    double vy;
    double vz;
public:
    Vector3();
    
    double norm();
    
    double getX();
    double getY();
    double getZ();
    
    void setX(double);
    void setY(double);
    void setZ(double);
    void setVal(double,double,double);
    void setVecVal(Vector3);
    
    std::string printVec();
    
    void add(Vector3);
    void scale(double);
    double dot(Vector3);
    Vector3 cross(Vector3);
};

#endif /* Vector3_hpp */
