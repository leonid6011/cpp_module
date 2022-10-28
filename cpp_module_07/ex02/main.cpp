/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:00:25 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/28 13:25:31 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main(void)
{
    std::cout << "==========================CREATE_ARRAY_TEST=============================" << std::endl;
    Array<unsigned int> arr(10);
    for (unsigned int i = 0; i < arr.getSizeArray(); i++)
        arr[i] = i;

    for (unsigned int i = 0; i < arr.getSizeArray(); i++)
        std::cout << arr[i] << " ";
    
    std::cout << std::endl;

    std::cout << "==========================COPY_ARRAY_TEST=============================" << std::endl;

    Array<char> alphabet(26);

    unsigned int size = alphabet.getSizeArray();

    std::cout << "Original array:" << std::endl;
    for (unsigned int i = 0; i < alphabet.getSizeArray(); i++)
    {
        alphabet[i] = static_cast<char>(i) + 'a';
        std::cout << alphabet[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "size: " << size << std::endl;
    std::cout << std::endl;

    Array<char> arr_copy(alphabet);

    size = arr_copy.getSizeArray();

    std::cout  << "Copy array:" << std::endl;
    for (unsigned int i = 0; i < arr_copy.getSizeArray(); i++)
        std::cout << arr_copy[i] << " ";
    std::cout << std::endl;
    std::cout << "size: " << size << std::endl;
    std::cout << std::endl;

    Array<char> copy = alphabet;

    std::cout << "Assignation Copy array:" << std::endl;
    for (unsigned int i = 0; i < copy.getSizeArray(); i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;
    std::cout << "size: " << size << std::endl;
    std::cout << std::endl;

    std::cout << "==========================INDEX_ARRAY_TEST=============================" << std::endl;

    Array<unsigned int> arrNbr(5);

    for (unsigned int i = 0; i < arrNbr.getSizeArray(); i++)
        arrNbr[i] = i;

    try
    {
        //std::cout << arrNbr[-1] << std::endl;
        std::cout << arrNbr[3] << std::endl;
        std::cout << arrNbr[6] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << " Invalid Index" << std::endl;
    }
    std::cout << "=======================================================================" << std::endl;
}

//valgrind --leak-check=full ./array