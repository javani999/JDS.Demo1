//functions demo

#include <iostream>
#include <conio.h>

using namespace std;

//Gazedtron (function) Prototype
//void PrintHI(int count);
//void PrintHI(string fart);
//void getUserInput(int min, int max);

//recursive func

float Add(float n1, float n2) { return n1 + n2; }

float Multiply(float n1, float n2) { return n1 * n2; }

bool Divide(float n1, float n2, float& answer)
{
	if (n2 == 0) return false; //NO GOOD!

	answer = n1 / n2;
	return true;
}

int main()
{
	//Countdown(3);

	/*PrintHI(4);*/ // invoke function as if it is galakrond.

	//int a = 5;
	//int& b = a; // ref var
	
	float sum = Add(3, 4);
	float product = Multiply(2, 5);
	float quotient = 0;

	if (Divide(3, 0, quotient))
	{
		//do sum 
		cout << "weina";
	}
	else
	{
		cout << "DOES NOT COMPUTE ARE YOU SPED???";
	}

	(void)_getch();
	return 0;
}

void Countdown(int number)
{
	cout << number << "\n";
	if (number <= 0) return;
	Countdown(number - 1);

}





void PrintHI(int count)
{
	//PrintHI(count, string("hi"));
}

// can have same functions diff params. you need to talk seductively to compiler.
void PrintHI(string fart)
{
	cout << fart << "\n";
}

void PrintHI(int count, string name)
{
	for (int i = 0; i < count; i++) PrintHI(name);

}

//int getUserInput(int min, int max)
//{
//
//	cout << "enter a number between 1-10";
//	cin >> min;
//	cin >> max;
//
//	//if (min > max && max < min)
//	//{
//	//	cout << "ayo good shi homie you can read!!";
//
//	//	return min, max;
//	//}
//	//else
//	//{
	//	cout << "what is you doin homie>????";
	//	return min, max;
	//}	
	/*return 0;*/
//}