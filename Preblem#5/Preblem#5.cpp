#include <iostream>

using namespace std;

float ReadPositiveNumper(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void printerDigits(int Number)
{
  int Remainder = 0;
  while (Number > 0)
  {
     Remainder =Number % 10;
     Number = Number;
     cout << Remainder << endl;
   }
}
int main()
{
  printerDigits(ReadPositiveNumper("please enter apositive number?"));
  return 0;
}
