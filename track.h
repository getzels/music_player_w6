#ifndef TRACK_H
#define TRACK_H

#include <string>

class Track {
public:
    std::string title;
    std::string filename;

    Track(const std::string& title, const std::string& filename)
        : title(title), filename(filename) {}
};

#endif