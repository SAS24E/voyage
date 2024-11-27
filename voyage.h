#ifndef VOYAGE_H
#define VOYAGE_H

#include <string>
#include <map>
#include "player.h"
using namespace std;
class Voyage {
public:

    // Game functions
    void Start();                               // Starts the game
    void DisplayWelcomeMessage();               // Displays the welcome message
    void MainMenu();                            // Displays the main menu
    void ProcessInput(const string& input); // Processes the player's input
    void Move(const string& direction);    // Moves the player in the specified direction
    void Explore(Player& player);                             // Explores the area and finds treasure
    void DisplayInventory();                    // Displays the player's inventory
    void GenerateLocation(const string& location); // Generates a new location

private:
    string playername;  // Player's name
    string currentLocation;  // Current location of the player
    map< string, bool> exploredLocations; // Keeps track of visited locations
    map< string, int> inventory;   // Inventory of the player
};

#endif
