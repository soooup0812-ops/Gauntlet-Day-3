#pragma once
#include <string>

class Entity {
public:
    explicit Entity(std::string name);
    virtual ~Entity();   
    virtual std::string describe() const= 0;   
    

protected:
    std::string m_name;
};


