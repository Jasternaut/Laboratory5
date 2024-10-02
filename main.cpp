#include <iostream>

/*
Лабораторная работа 5. Циклы.

Дана последовательность натуральных чисел {Aj}. Найти сумму чисел, 
оканчивающихся цифрой 0 или 7, наибольшее из таких чисел и номер этого числа в последовательности.

Дано натуральное число N (N<10^9). Найти сумму нечетных цифр числа N.

*/

int program1()
{
    int a;
    int counter = 0;
    int sum = 0;
    int max = 0; // будет присваивать наибольшее значение
    int max_index = 0;

    while(counter != 10)
    {
        std::cin >> a;     

        if (a % 10 == 0 || a % 10 == 7)      // оканчивается на 0 или 7
        {
            sum += a;

            if (max < a)
            {
                max = a;
                max_index = counter;
            }
        }
                   

        counter++;
    }
    
    std::cout << "Max number: " << max << std::endl;
    std::cout << "Max number Index: " << max_index << std::endl;
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