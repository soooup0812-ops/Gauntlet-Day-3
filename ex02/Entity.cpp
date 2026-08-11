#include "Entity.hpp"
#include <iostream> 
#include <algorithm>
#include <utility>

Entity::Entity(std::string name, int maxHp) : m_name(std::move(name)), m_maxHp(maxHp), m_currentHp(maxHp){}

Entity::~Entity() = default;

void Entity::takeDamage(int amount){
    if (amount <= 0) return; //Guard invariant 
    int before  = m_currentHp;
    m_currentHp = std::max(0, m_currentHp - amount); //clamp 
    std::cout << m_name << " takes " << amount << " damage (" << before << " -> " << m_currentHp << " hp)\n";
}

void Entity::heal(int amount){ 
    if (amount <= 0) return;
    m_currentHp = std::min(m_maxHp, m_currentHp + amount); 
}

bool Entity::isAlive() const { return m_currentHp > 0; }

int Entity::currentHp() const { return m_currentHp; }

int Entity::maxHp() const { return m_maxHp; }