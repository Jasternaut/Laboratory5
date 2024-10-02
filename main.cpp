#include <iostream>

int program1()
{
    int a;
    int counter = 0;
    int sum = 0;
    int logger = 0; // будет присваивать наибольшее значение
    int logger_index = 0;

    while(counter != 10)
    {
        std::cin >> a;

        if (logger < a)
        {
            logger = a;
            logger_index = counter;
        }

        if (a % 10 == 0)      // оканчивается на 0
            sum += a;
        else if (a % 10 == 7) // оканчивается на 7
            sum += a;

        counter++;
    }
    
    std::cout << "Max number: " << logger << std::endl;
    std::cout << "Max number Index: " << logger_index << std::endl;
    std::cout << "Summ: " << sum << std::endl;

    return 0;
}

int program2()
{
    int num;
    std::cin >> num;
    int result = 0;

    if (num <= 1000000000)
    {
        while (num)
        {           
            do
            {
                if (num % 2 != 0)
                    result += num % 10;
            }
            while (num /= 10);                           
        }
    }

    std::cout << result << " - Summ of all nechet numbers" << std::endl;

    return 0;
}

int main()
{
    std::cout << "Select number of Task: ";
    int select;
    std::cin >> select;

    switch(select)
    {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        default:
            std::cout << "wrong number" << std::endl;
    }

    return 0;
}