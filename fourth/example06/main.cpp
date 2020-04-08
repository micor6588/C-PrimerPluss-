#include <iostream>
using namespace std;

struct Candy
{
  char name[20];
  double weight;
  int calories;
};

int main()
{
  //Candy snack[3];
  //snack[0] = { "Mocha Munch1", 2.3, 350 };
  //snack[1] = { "Mocha Munch2", 2.5, 360 };
  //snack[2] = { "Mocha Munch3", 2.7, 390 };
  Candy snack[3] = {{"Mocha Munch1", 2.3, 350},
                    {"Mocha Munch2", 2.5, 360},
                    {"Mocha Munch3", 2.7, 390}};
  cout << snack[0].name << "'s weight is " << snack[0].weight << ", and it includes " << snack[0].calories << " calories.\n";
  cout << snack[1].name << "'s weight is " << snack[1].weight << ", and it includes " << snack[1].calories << " calories.\n";
  cout << snack[2].name << "'s weight is " << snack[2].weight << ", and it includes " << snack[2].calories << " calories.\n";

  system("pause");
  return 0;
}