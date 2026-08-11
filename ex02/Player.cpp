#include "Player.hpp"
#include <iostream>
#include <algorithm>
#include <utility>

Player::Player(std::string name, int hp, int armor) : Entity(std::move(name), hp), m_armor(armor) {}

std::string Player::describe() const { 
    std::string desc = "Player " + m_name + " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp()) + ", armor " + std::to_string(m_armor) + ")";
    if (!isAlive()) desc += " [dead]";
    return desc;
}

void Player::takeDamage(int amount){
    int reduced = std::max(1, amount - m_armor);
    std::cout << m_name << "'s armor soaks " << (amount - reduced) << '\n';
    Entity::takeDamage(reduced);   
}