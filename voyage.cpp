#include <iostream>
#include <vector>
#include "Player.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"
#include "Voyage.h"

using namespace std;

// Starts the game by displaying the welcome message and showing the main menu
void Voyage::Start() {
    DisplayWelcomeMessage(); // Display welcome message and ask for the player's name
    MainMenu();               // Display the main menu and handle user actions
}

// *****************************************************************
// * Function Name: DisplayWelcomeMessage()                       *
// * Description: Displays a welcome message                      *
// * and prompts for the player's name                            *
// * Parameter Description: None                                  *
// * Date: 11/26/2024                                             *
// * Author: Alex                                                 *
// * References: N/A                                              *
// *****************************************************************
void Voyage::DisplayWelcomeMessage() {
    cout << "Hello Player \n";
    cout << "Welcome to Voyage!\n";
    cout << "Please enter your character's name: ";
    cin >> playername; // Get the player's name
    cout << "Hello, " << playername << "! Your journey begins...\n"; // Greet the player
    currentLocation = "Starting Point"; // Initialize the starting location of the player
}

// *****************************************************************
// * Function Name: MainMenu()                                    *
// * Description: Displays the main menu and handles user input   *
// * for different actions                                        *
// * Parameter Description: None                                  *
// * Date: 11/26/2024                                             *
// * Author: Alex                                                 *
// * References: N/A                                              *
// *****************************************************************
void Voyage::MainMenu() {
    Player player(playername); // Create a player instance
    string input;
    while (true) {
        cout << "\nYou are at: " << currentLocation << "\n";
        cout << "Choose an action: explore, inventory, quit\n";
        cout << "> ";
        cin >> input;

        if (input == "quit") {
            cout << "Thanks for playing!\n";
            break;
        } else if (input == "explore") {
            Explore(player); // Pass player object to explore function
        } else if (input == "inventory") {
            player.DisplayInventory(); // Show player's inventory
        } else {
            cout << "Invalid action. Try again.\n";
        }
    }
}

// *****************************************************************
// * Function Name: Explore()                                     *
// * Description: Simulates exploration and adds loot to the      *
// * player's inventory                                           *
// * Parameter Description: player (Player object)                *
// * Date: 11/26/2024                                             *
// * Author: Alex                                                 *
// * References: N/A                                              *
// *****************************************************************
void Voyage::Explore(Player& player) {
    // Simulate finding loot (this can be more random in the future)
    int randomLoot = rand() % 3;  // Randomly choose loot type (0: Weapon, 1: Armor, 2: Potion)

    if (randomLoot == 0) {
        Weapon* newWeapon = new Weapon("Sword", "A sharp sword", 10);
        player.AddToInventory(newWeapon); // Add the weapon to the player's inventory
        cout << "You found a weapon: " << newWeapon->GetName() << "\n";
    } else if (randomLoot == 1) {
        Armor* newArmor = new Armor("Shield", "A sturdy shield", 5);
        player.AddToInventory(newArmor); // Add the armor to the player's inventory
        cout << "You found armor: " << newArmor->GetName() << "\n";
    } else {
        Potion* newPotion = new Potion("Healing Potion", "Restores 20 health", 20);
        player.AddToInventory(newPotion); // Add the potion to the player's inventory
        cout << "You found a potion: " << newPotion->GetName() << "\n";
    }
}
