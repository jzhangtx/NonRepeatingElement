// NonRepeatingElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int FindNonRepeatingElement(const std::vector<int>& arr)
{
    for (size_t i = 1; i < arr.size(); i += 2)
    {
        if (arr[i] != arr[i - 1])
            return arr[i - 1];
    }

    if (arr.size()%2 == 1)
        return arr[arr.size()-1];

    return -1;
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
