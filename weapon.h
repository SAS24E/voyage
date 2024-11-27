#ifndef WEAPON_H
#define WEAPON_H

#include "Loot.h"

class Weapon : public Loot {
public:
    // Constructor
    Weapon(std::string name, std::string description, int attackPower)
        : Loot(name, description), attackPower(attackPower) {}

    // Override Use() method for weapon-specific logic
    void Use() override {
        std::cout << "You swing the " << name << ", dealing " << attackPower << " damage!\n";
    }

    // Getter for attack power
    int GetAttackPower() const { return attackPower; }

private:
    int attackPower;  // Specific to weapons
};

#endif
