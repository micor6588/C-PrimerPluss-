#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
  string name;
  float weight;
  int calories;
};

int main()
{
  CandyBar snack;
  snack.name = "Mocha Munch";
  snack.weight = 2.3;
  snack.calories = 350;
  // Candy snack = {"Mocha Munch", 2.3, 350};

  cout << "The name of this candy is: " << snack.name << endl;
  cout << "The weight of this candy is: " << snack.weight << endl;
  cout << "The calories of this candy is: " << snack.calories << endl;

  system("pause");
  return 0;
}