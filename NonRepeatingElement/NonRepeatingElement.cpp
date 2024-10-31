// NonRepeatingElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int FindNonRepeatingElement(const std::vector<int>& arr)
{
    int num = 0;
    int count = 0;
    for (auto i : arr)
    {
        if (i != num)
        {
            if (count == 1)
                return num;
            num = i;
            count = 0;
        }
        ++count;
    }

    if (count == 1)
        return num;

    throw std::runtime_error("Non repeating Element not found!");
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The numbers of the sorted array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The non-repeating element is: " << FindNonRepeatingElement(vec) << std::endl << std::endl;
    }
}
