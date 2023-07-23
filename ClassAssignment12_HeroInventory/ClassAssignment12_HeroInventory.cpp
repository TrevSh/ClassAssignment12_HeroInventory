#include<iostream>
#include<string>

int main()
{
    const int MAX_ITEMS = 10;
    std::string inventory[MAX_ITEMS];           //Creates an array with MAX_ITEMS defining how many values it can hold (being 10). 
    //Can also initialize items in array like this:    string inventory[MAX_ITEMS] = { "sword", "armor", "shield" };
    int numItems = 0;                           //numItems is the number of items the Hero is CURRENTLY holding. Not to be confused with the MAX_ITEMS.
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    std::cout << "\tHero's Inventory!\n\n";

    std::cout << "Your Items: \n";
    for (int i = 0; i < numItems; i++) {
        std::cout << inventory[i] << "\n";
    }
    std::cout << "\nYou traded your sword for a battle axe.";
    inventory[0] = "battle axe";                //Arrays start at [0]. So the first item is really Item 0; not 1.
    std::cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; i++) {
        std::cout << inventory[i] << "\n";
    }

    std::cout << "\nThe item name '" << inventory[0] << "' has ";
    std::cout << inventory[0].size() << " letters in it.\n\n";

    std::cout << "You found a healing potion!";
    if (numItems < MAX_ITEMS) {                                 //Checks if the inventory has enough space to take a new item. Prevents an array error.
        inventory[numItems++] = "healing potion";
    }
    else {
        std::cout << "You got wayy too many items, Big Fella...";
    }
    std::cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; i++) {
        std::cout << inventory[i] << "\n";
    }
    system("pause");
    return 0;
}
