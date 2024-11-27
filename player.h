#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Loot.h"

class Player {
public:
    Player(std::string name) : name(name) {}

    // Add item to player's inventory
    void AddToInventory(Loot* item) {
        inventory.push_back(item);
    }

    // Display player's inventory
    void DisplayInventory() {
        std::cout << "Inventory of " << name << ":\n";
        for (Loot* item : inventory) {
            std::cout << "- " << item->GetName() << ": " << item->GetDescription() << "\n";
        }
    }

    // Use item from inventory
    void UseItem(int index) {
        if (index >= 0 && index < inventory.size()) {
            inventory[index]->Use();  // Polymorphism in action
        }
    }

private:
    std::string name;
    std::vector<Loot*> inventory;  // List of loot items in the player's inventory
};

#endif
