#include <iostream>

int main()
{
    double puzzle = 2.60;
    double doll = 3;
    double teddy_bear = 4.10;
    double minion = 8.20;
    double truck = 2;

    double trip_price;
    int puzzle_number;
    int doll_number;
    int teddy_bear_number;
    int minion_number;
    int truck_number;

    std::cin >> trip_price;
    std::cin >> puzzle_number;
    std::cin >> doll_number;
    std::cin >> teddy_bear_number;
    std::cin >> minion_number;
    std::cin >> truck_number;

    double puzzle_price = puzzle * puzzle_number;
    double doll_price = doll * doll_number;
    double teddy_bear_price = teddy_bear * teddy_bear_number;
    double minion_price = minion * minion_number;
    double truck_price = truck * truck_number;

    int toys_number = puzzle_number + doll_number + teddy_bear_number + minion_number + truck_number;
    double total_price = puzzle_price + doll_price + teddy_bear_price + minion_price + truck_price;

    if (toys_number >= 50)
    {
        total_price = total_price - (total_price * 0.25);
    }
    else
    {
        total_price = total_price;
    }

    double final_total_price = total_price - (total_price * 0.1);

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    if (final_total_price >= trip_price)
    {
        double left = final_total_price - trip_price;
        std::cout << "Yes! " << left << " lv left. \n";
    }
    else
    {
        double not_enought = trip_price - final_total_price;
        std::cout << "Not enough money! " << not_enought << " lv needed. \n";
    }

        return 0;
}

