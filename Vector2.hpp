//
//  Vector2.hpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#ifndef Vector2_hpp
#define Vector2_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>

class Vector2{
private:
    double vx;
    double vy;
public:
    Vector2();
    
    double norm();
    
    double getX();
    double getY();
    
    void setX(double);
    void setY(double);
    double dot(Vector2);
};

#endif /* Vector2_hpp */
