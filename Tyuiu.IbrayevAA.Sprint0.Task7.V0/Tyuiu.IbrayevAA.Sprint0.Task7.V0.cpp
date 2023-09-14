// Tyuiu.IbrayevAA.Sprint0.Task7.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//Tyuiu.IbrayevAA.Sprint0.Task7.V0.Lib/Tyuiu.IbrayevAA.Sprint0.Task7.V0.Lib.cpp"

int main()
{
    ISprint0Task7* date = new Service();
    setlocale(LC_ALL, "Russian");
    int a, b;
    printf("¬ведиет шестизначное число=");
    scanf_s("%d", &a);
    printf("искомое число=");
    scanf_s("%d", &b);
    int p = date->Rezalt(a, b);
    std::cout << "¬ записи шестизначного числа "<< a << "   :\t" << std::boolalpha <<p<< std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
 