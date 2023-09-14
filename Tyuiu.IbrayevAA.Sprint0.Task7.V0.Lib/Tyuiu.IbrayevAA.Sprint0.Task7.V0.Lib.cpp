// Tyuiu.IbrayevAA.Sprint0.Task7.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task7
{
	virtual bool Rezalt(int a, int b)
		
	{

		bool p = (a / 100000 == b) || (a / 10000 % 10 == b) || (a / 1000 % 10 == b) || (a / 100 % 10 == b) || (a / 10 % 10 == b) || (a % 10 == b);
		return p;

	}

};
