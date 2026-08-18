#include <iostream>
#include <string>

class Song {
private:
    std::string songName;
    std::string artistName;
    double duration; // Duration in minutes (e.g., 3.45)

public:
    // Constructor
    Song(std::string name, std::string artist, double dur)
        : songName(name), artistName(artist), duration(dur) {}

    // Declaring friend function inside the Song class
    friend void compareSongs(const Song& s1, const Song& s2);
};

// Definition of the friend function receiving two Song objects
void compareSongs(const Song& s1, const Song& s2) {
    std::cout << "\n--- Song Comparison ---" << std::endl;
    std::cout << "Song 1: \"" << s1.songName << "\" by " << s1.artistName 
              << " (" << s1.duration << " mins)" << std::endl;
    std::cout << "Song 2: \"" << s2.songName << "\" by " << s2.artistName 
              << " (" << s2.duration << " mins)" << std::endl;
    std::cout << "-----------------------" << std::endl;

    if (s1.duration > s2.duration) {
        std::cout << "\"" << s1.songName << "\" is longer than \"" << s2.songName << "\"." << std::endl;
    } else if (s2.duration > s1.duration) {
        std::cout << "\"" << s2.songName << "\" is longer than \"" << s1.songName << "\"." << std::endl;
    } else {
        std::cout << "Both songs have the same duration." << std::endl;
    }
}

int main() {
    // Creating two Song objects
    Song song1("cham cham", "Monali Thakur", 9.92);
    Song song2("barso re", "Shreya Ghosal", 9.99);

    // Comparing the two songs using the friend function
    compareSongs(song1, song2);

    return 0;
}