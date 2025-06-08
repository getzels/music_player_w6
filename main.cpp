#include <iostream>
#include "player.h"

int main() {
    Player player;
    int option;

    std::cout << "Welcome to Simple Music Player\n";

    do {
        std::cout << "\n1. Play\n2. Pause\n3. Stop\n4. Load New Track\n0. Exit\n";
        std::cout << "Your choice: ";
        std::cin >> option;
        std::cin.ignore();

        switch (option) {
            case 1:
                player.play();
                break;
            case 2:
                player.pause();
                break;
            case 3:
                player.stop();
                break;
            case 4: {
                std::string filename;
                std::cout << "Enter path to audio file (.wav or .ogg): ";
                std::getline(std::cin, filename);
                player.load(filename);
                break;
            }
        }
    } while (option != 0);

    return 0;
}