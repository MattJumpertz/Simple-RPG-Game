//
//  Global.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Global_hpp
#define Global_hpp

#include <stdio.h>


//Global Variable. Allows all classes to use this variable and changes go through to every class rather than instantiate a MonsterHealth var for ever class

//Extern tells the compiler that the variable is define somewhere else in the code. This way the compiler doesnt complain about it being undefined.
extern int MonsterHealth;


#endif /* Global_hpp */
