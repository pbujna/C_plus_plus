#include <iostream>

class atraction
{
protected:
    int price;
    std::string name;
    std::string desc;

public:
    atraction()
    {
        price = 0;
        name = "";
        desc = "";
    }
    atraction(int a, std::string b, std::string c)
    {
        price = a;
        name = b;
        desc = c;
    }
    void showPrice()
    {
        std::cout << price << std::endl;
    }
    void showName()
    {
        std::cout << name << std::endl;
    }
    void showDesc()
    {
        std::cout << desc << std::endl;
    }
};

class train : public atraction
{
private:
    int hourArrival;
    int hourDeparture;

public:
    void initialize(int a, int b, int c, std::string d, std::string e)
    {
        hourArrival = a;
        hourDeparture = b;
        price = c;
        name = d;
        desc = e;
    }
    void showArrival()
    {
        std::cout << hourArrival << std::endl;
    }
    void showDeparture()
    {
        std::cout << hourDeparture << std::endl;
    }
};

class castle : public atraction
{
private:
    int timeVisit;

public:
    void initialize(int a, int b, std::string c, std::string d)
    {
        timeVisit = a;
        price = b;
        name = c;
        desc = d;
    }
    void showTimeVisit()
    {
        std::cout << timeVisit << std::endl;
    }
};

class movie : public atraction
{
private:
    int timeMovie;
    std::string title;

public:
    void initialize(int a, std::string b, int c, std::string d, std::string e)
    {
        timeMovie = a;
        title = b;
        price = c;
        name = d;
        desc = e;
    }
    void showTimeMovie()
    {
        std::cout << timeMovie << std::endl;
    }
    void showTitle()
    {
        std::cout << title << std::endl;
    }
};