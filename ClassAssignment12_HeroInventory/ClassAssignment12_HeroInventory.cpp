#include<iostream>
#include<string>

int main()
{
    const int MAX_ITEMS = 10;
    std::string inventory[MAX_ITEMS];           //Creates an array with MAX_ITEMS defining how many values it can hold (being 10).

    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    std::cout << "\tHero's Inventory!\n\n";

    std::cout << "Your Items: \n";
    for (int i = 0; i < numItems; i++) {
        std::cout << inventory[i] << "\n";
    }
    std::cout << "\nYou traded your sword for a battle axe.";
    inventory[0] = "battle axe";
    std::cout << "\nYour Items: \n";
    for (int i = 0; i < numItems; i++) {
        std::cout << inventory[i] << "\n";
    }

    std::cout << "\nThe item name '" << inventory[0] << "' has ";
    std::cout << inventory[0].size() << " letters in it.\n\n";

    std::cout << "You found a healing potion!";
    if (numItems < MAX_ITEMS) {
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
