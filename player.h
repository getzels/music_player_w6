#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Audio.hpp>
#include <string>

class Player {
private:
    sf::Music music;

public:
    bool load(const std::string& filename);
    void play();
    void pause();
    void stop();
};

#endif