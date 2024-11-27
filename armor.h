#ifndef ARMOR_H
#define ARMOR_H

#include "Loot.h"

class Armor : public Loot {
public:
    // Constructor
    Armor(std::string name, std::string description, int defense)
        : Loot(name, description), defense(defense) {}

    // Override Use() method for armor-specific logic
    void Use() override {
        std::cout << "You equip the " << name << ", increasing your defense by " << defense << ".\n";
    }

    // Getter for defense
    int GetDefense() const { return defense; }

private:
    int defense;  // Specific to armor
};

#endif
