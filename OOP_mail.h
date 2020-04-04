#include <string>

class Mail {
    public:
        std::string receiver;
        std::string sender;
        std::string topic;
        std::string content;
        Mail(std::string a, std::string b, std::string c, std::string d) {
            receiver = a;
            sender = b;
            topic = c;
            content = d;
        };
};