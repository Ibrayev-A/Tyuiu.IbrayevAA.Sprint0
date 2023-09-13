// Tyuiu.IbrayevAA.Sprint0.Task5.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task6
{

	virtual double Calculate(float x, int y)
	{
		return (5*x)/(7+y);
	}

};
