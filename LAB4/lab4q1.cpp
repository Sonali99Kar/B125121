#include <iostream>
#include <string>

class Diary {
private:
    std::string ownerName;
    int numberOfEntries;
    std::string lastEntry;

public:
    // Constructor
    Diary(std::string owner, int entries, std::string entry) 
        : ownerName(owner), numberOfEntries(entries), lastEntry(entry) {}

    // Friend function declaration
    friend void displayDiary(const Diary& d);
};

// Friend function definition
void displayDiary(const Diary& d) {
    std::cout << "\n--- Personal Diary Details ---" << std::endl;
    std::cout << "Owner Name       : " << d.ownerName << std::endl;
    std::cout << "Number of Entries: " << d.numberOfEntries << std::endl;
    std::cout << "Last Entry       : " << d.lastEntry << std::endl;
}

int main() {
    // Creating a Diary object
    Diary myDiary("Sonali", 9, "did todays work");

    // Calling the friend function to display private details
    displayDiary(myDiary);

    return 0;
}
