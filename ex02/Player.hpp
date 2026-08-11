#pragma once
#include "Entity.hpp"

class Player : public Entity {
public:
    Player(std::string name, int hp, int armor);        
    std::string describe() const override;   
    void takeDamage(int amount) override;
    
private:
    int m_armor;
};
