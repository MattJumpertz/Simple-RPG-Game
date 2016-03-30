#ifndef Sword_hpp
#define Sword_hpp
#pragma once

#include "Blade.hpp"

#include <iostream>
#include <string>


//Inherit from Blade class
class Sword : public Blade
{
public:
    //Sword Constructor to set the values of Damage, ExtraDamage and ChanceToHit
    Sword();
    //Output function.
    void Output();

};
#endif /* Sword_hpp */