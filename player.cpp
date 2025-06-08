#include "player.h"
#include <iostream>

bool Player::load(const std::string& filename) {
    if (!music.openFromFile(filename)) {
        std::cerr << "Failed to load file.\n";
        return false;
    }
    std::cout << "Loaded: " << filename << "\n";
    return true;
}

void Player::play() {
    music.play();
    std::cout << "Playing...\n";
}

void Player::pause() {
    music.pause();
    std::cout << "Paused.\n";
}

void Player::stop() {
    music.stop();
    std::cout << "Stopped.\n";
}