#ifndef POTION_H
#define POTION_H

#include "Loot.h"

class Potion : public Loot {
public:
    // Constructor
    Potion(std::string name, std::string description, int healingAmount)
        : Loot(name, description), healingAmount(healingAmount) {}

    // Override Use() method for potion-specific logic
    void Use() override {
        std::cout << "You drink the " << name << " and heal for " << healingAmount << " health!\n";
    }

private:
    int healingAmount;  // Specific to potions
};

#endif
