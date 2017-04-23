//
//  Vector2.cpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#include "Vector2.hpp"

Vector2::Vector2(){
    vx = 0;
    vy = 0;
}

double Vector2::norm(){
    return sqrt(vx*vx+vy*vy);
}

double Vector2::getX(){
    return vx;
}
double Vector2::getY(){
    return vy;
}

void Vector2::setX(double x){
    vx = x;
}

void Vector2::setY(double y){
    vy = y;
}

double Vector2::dot(Vector2 vec){
    return vx*vec.vx+vy*vec.vy;
}
