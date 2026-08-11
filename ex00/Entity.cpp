#include "Entity.hpp"
#include <utility>

Entity::Entity(std::string name) : m_name(std::move(name)){}
