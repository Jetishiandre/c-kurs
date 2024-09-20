#include <string>
#include <iostream>

class Chatroom;  // Forward declaration

class Participant {
private:
    Chatroom* _chatroom;  // Pointer to Chatroom, assuming dynamic memory or external management
    std::string _name;

public:
    // Constructor
    Participant(const std::string& name) : _name(name) {}

    // Send method
    void Send(const std::string& to, const std::string& message) {
        // Method implementation here
    }

    // Receive method
    void Receive(const std::string& from, const std::string& message) {
        // Method implementation here
    }
};
