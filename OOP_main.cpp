#include "OOP_mail.h"
#include <iostream>

void output(Mail mail) {
    std::cout << "Receiver: " << mail.receiver << std::endl;
    std::cout << "Sender: " << mail.sender << std::endl;
    std::cout << "Topic: " << mail.topic << std::endl;
    std::cout << "Content: " << mail.content << std::endl;
};

void input(Mail &mail) {
    std::string attributes[4];
    std::string a;
    for (int i = 0; i < sizeof(attributes)/sizeof(attributes[0]); i++) {
        std::cin >> a;
        attributes[i] = a;
    };
    mail.receiver = attributes[0];
    mail.sender = attributes[1];
    mail.topic = attributes[2];
    mail.content = attributes[3];
};

int main() {
    Mail Mail_1("Patryk", "Patryk", "Test", "Hello World!");
    input(Mail_1);
    output(Mail_1);
    return 0;
};