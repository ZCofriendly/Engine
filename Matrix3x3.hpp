//
//  Matrix3x3.hpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#ifndef Matrix3x3_hpp
#define Matrix3x3_hpp

#include <stdio.h>
#include "Vector3.hpp"

class Matrix3x3{
    private:
        //note, the vectors here are the columns of the matrix
        Vector3 v1;
        Vector3 v2;
        Vector3 v3;
    public:
        Matrix3x3();
    
        void setVec1(double,double,double);
        void setVec2(double,double,double);
        void setVec3(double,double,double);
    
        void setVecValue1(Vector3);
        void setVecValue2(Vector3);
        void setVecValue3(Vector3);

        Vector3 getVec1();
        Vector3 getVec2();
        Vector3 getVec3();

        void scale(double);
        void scaleVec1(double);
        void scaleVec2(double);
        void scaleVec3(double);
    
        double det();
        void transpose();
        void invert();
    
    // I'm not sure why we might need things called this.
    // void setZZero();
    // void hideVec1FromView;
    // void hideVec2FromView;
    // void hideVec3FromView;

};

#endif /* Matrix3x3_hpp */
