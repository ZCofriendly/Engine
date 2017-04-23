//
//  main.cpp
//  GameEngine
//
//  Created by Zachary Cohen on 4/22/17.
//  Copyright © 2017 ZacksonGame. All rights reserved.
//

#include <iostream>
#include "Vector2.hpp"
#include "Particle.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Particle test;
    test.setForceAccum(1,1,1);
    test.integrate(1);
    cout << test.getPosition().printVec() << endl;
    cout << test.getVelocity().printVec() << endl;
    cout << test.getAcceleration().printVec() << endl;
    return 0;
}
