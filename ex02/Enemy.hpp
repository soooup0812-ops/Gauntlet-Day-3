#pragma once
#include "Entity.hpp"

class Enemy : public Entity {
public:
    Enemy(std::string name, int hp);            
    std::string describe() const override;    

//hp management move to entity so no more here
};