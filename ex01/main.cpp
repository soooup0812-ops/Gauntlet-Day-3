#include <iostream>
#include <vector>
#include <memory>
#include "Enemy.hpp"
#include "Entity.hpp"
#include "Player.hpp"


int main(){
Entity* hero    = new Player("Aria");
Entity* monster = new Enemy("Goblin", 12, {"dagger", "gold", "torch"});

std::cout << hero->describe()    << '\n';
std::cout << monster->describe() << '\n';

std::cout << "--- cleaning up ---\n";
delete hero;      // virtual ~Entity() dispatches to ~Player, then ~Entity
delete monster;   //   ... and to ~Enemy, then its Inventory, then ~Entity << '\n';
}