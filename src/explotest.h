//
//  explotest.h
//  firstPebble
//
//  Created by Niall on 30/03/2015.
//
//

#ifndef __firstPebble__explotest__
#define __firstPebble__explotest__

#include <stdio.h>
#include "ofMain.h"

class expTest{
    
public:
    expTest();
    
    void reset(int partX, int partY);
    void update();
    void draw();
    
};


#endif /* defined(__firstPebble__explotest__) */
