#include <iostream>

class PESEL
{
private:
    std::string pesel;

public:
    PESEL(std::string a)
    {
        pesel = a;
    }
    void validatePesel()
    {
        if (pesel.length() != 11)
        {
            throw std::length_error(pesel);
        }
        else
        {
            int checker = 9 * (pesel[0] - 48) + 7 * (pesel[1] - 48) + 3 * (pesel[2] - 48) + (pesel[3] - 48) + 9 * (pesel[4] - 48) + 7 * (pesel[5] - 48) + 3 * (pesel[6] - 48) + (pesel[7] - 48) + 9 * (pesel[8] - 48) + 7 * (pesel[9] - 48);
            if (checker % 10 != (pesel[10] - 48))
            {
                std::cout << "Wrong PESEL!" << std::endl;
            }
            else
            {
                std::cout << "It's all good." << std::endl;
            }
        }
    }
};