#ifndef LOOT_H
#define LOOT_H

#include <string>
#include <iostream>

class Loot {
public:
    // Constructor
    Loot(std::string name, std::string description)
        : name(name), description(description) {}

    // Virtual destructor for cleanup in derived classes
    virtual ~Loot() {}

    // Pure virtual function to be overridden in derived classes
    virtual void Use() = 0;

    // Getter for name
    std::string GetName() const { return name; }

    // Getter for description
    std::string GetDescription() const { return description; }

protected:
    std::string name;
    std::string description;
};

#endif
