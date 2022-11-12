#include <iostream>

int main()
{
    double budget;
    int extras;
    double price_clothes1;

    std::cin >> budget;
    std::cin >> extras;
    std::cin >> price_clothes1;

    double decore = budget * 0.1;
    double all_price_clothes = extras * price_clothes1;

    if (extras > 150)
    {
        double discount = all_price_clothes * 0.1;
        all_price_clothes -= discount;
    }
    else
    {
        all_price_clothes = all_price_clothes;
    }

    double all_cost = all_price_clothes + decore;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    if (budget > all_cost)
    {
        double leve = budget - all_cost;
        std::cout << "Action! \n";
        std::cout << "Wingard starts filming with " << leve << " leva left.";
    }
    else
    {
        double not_enough = budget - all_cost;
        std::cout << "Not enough money! \n";
        std::cout << "Wingard needs " << abs(not_enough) << " leva more.";
    }

        return 0;
}
