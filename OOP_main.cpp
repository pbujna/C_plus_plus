#include "OOP_mail.h"
#include <iostream>

void output(Mail mail)
{
    std::cout << "Receiver: " << mail.receiver << std::endl;
    std::cout << "Sender: " << mail.sender << std::endl;
    std::cout << "Topic: " << mail.topic << std::endl;
    std::cout << "Content: " << mail.content << std::endl;
}

std::string input_check(std::string message, std::string attribute)
{
    std::string a;
    std::cout << message;
    std::getline(std::cin, a);
    if (a == "")
    {
        a = attribute;
    };
    return a;
}

void input(Mail &mail)
{
    std::string receiver = input_check("Enter receiver: ", mail.receiver);
    mail.receiver = receiver;
    std::string sender = input_check("Enter sender: ", mail.sender);
    mail.sender = sender;
    std::string topic = input_check("Enter topic: ", mail.topic);
    mail.topic = topic;
    std::string content = input_check("Enter content: ", mail.content);
    mail.content = content;
}
