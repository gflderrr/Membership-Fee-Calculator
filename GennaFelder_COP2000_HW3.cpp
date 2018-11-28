//Genna Felder, HW3, COP2000, 10/23/2018
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void calculateInterest(float);

int main ()
{
  int user_menu_input = -1;
  const int YEARS_WANTED = 10;
  const int PRINCIPLE_BASE_VALUE = 1200;
  const float BRONZE_RATE = 0.04;
  const float SILVER_RATE = 0.02;
  const float GOLD_RATE = 0.01;
   
  cout << "Welcome to Rhoda's Strikeforce Gym!!" << endl;
  cout << "x----------------------------------x" << endl;
  cout << "     Membership Fee Calculator" << endl;
  
  cout << "Please select a membership level:" << endl;
  
  cout << "1: Gold" << endl;
  cout << "2: Silver" << endl;
  cout << "3: Bronze" << endl;
  cout << "4: Quit" << endl;
  
    cin >> user_menu_input;
	
	while (user_menu_input > 4 || user_menu_input < 1)
	{
		cout << "You entered an invalid number, please choose a valid menu option:" << endl;
		cin >> user_menu_input;
	}
  
  switch(user_menu_input)
  {
    case 1:
    calculateInterest(GOLD_RATE);
    break;
    
    case 2:
    calculateInterest(SILVER_RATE);
    break;
    
    case 3:
    calculateInterest(BRONZE_RATE);
    break;
    
    case 4:
    cout << endl;
    break;
  }
  
  return 0;
}

void calculateInterest(float rate)
{
    const int YEARS_WANTED = 10;
    const int PRINCIPLE_BASE_VALUE = 1200;

    for(int number_of_years = 1; number_of_years <= 10; number_of_years++)
    {
       float result = PRINCIPLE_BASE_VALUE * pow(1 + rate, number_of_years);
       
       cout << setprecision(2) << fixed;
       cout << "Year" << setw(4) << number_of_years;
       cout << "  costs  " << result << "  dollars" << endl;
    }
}