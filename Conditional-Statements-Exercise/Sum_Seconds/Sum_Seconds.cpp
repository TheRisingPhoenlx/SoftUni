#include <iostream>

int main()
{
    int Time1;
    int Time2;
    int Time3;

    std::cin >> Time1;
    std::cin >> Time2;
    std::cin >> Time3;

    int totalTime = Time1 + Time2 + Time3;

    int minutes = totalTime / 60;
    int seconds = totalTime % 60;

    if (seconds < 10)
    {
        std::cout << minutes << ":0";
        std::cout << seconds; "\n";
    }
    else
    {
        std::cout << minutes << ":";
        std::cout << seconds; '\n';
    }
    
    return 0;
}
