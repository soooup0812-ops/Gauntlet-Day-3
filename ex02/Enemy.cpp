#include "Enemy.hpp"
#include <utility>

Enemy::Enemy(std::string name, int hp) : Entity(std::move(name),hp){}; //hp now included under entity   

std::string Enemy::describe() const { 
    std::string desc = "Enemy " + m_name + " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp()) + ")"; 
    if (!isAlive()) desc += " [dead]";
    return desc;
}

