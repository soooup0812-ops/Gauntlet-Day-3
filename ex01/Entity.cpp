#include "Entity.hpp"
#include <iostream>
#include <utility>

Entity::Entity(std::string name) : m_name(std::move(name)){
    std::cout << "+ Entity    " << m_name << '\n';
}

Entity::~Entity() { std::cout << "- Entity    " << m_name << '\n'; }