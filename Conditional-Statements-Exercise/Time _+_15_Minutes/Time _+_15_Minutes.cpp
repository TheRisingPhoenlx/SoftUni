#include <iostream>

int main()
{
    int hours;
    int minutes;

    std::cin >> hours;
    std::cin >> minutes;

    minutes += 15;

    if (minutes >= 60)
    {
        minutes = minutes - 60;
        hours = hours + 1;

        if(hours == 24)
        {
            hours = 0;
        }

        if (minutes < 10)
        {
            std::cout << hours << ":0";
            std::cout << minutes;
        }
        else
        {
            std::cout << hours << ":";
            std::cout << minutes;
        }
    }
    else
    {
        std::cout << hours << ":";
        std::cout << minutes;
    }
        
        return 0;
}