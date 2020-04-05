#include <iostream>
using namespace std;
int main()
{
  double world_Population, us_Population;
  cout << "Enter the world's population:" << endl;
  cin >> world_Population;
  cout << "Enter the US population:" << endl;
  cin >> us_Population;
  cout << "The population of the Us is " << double(us_Population / world_Population * 100) << "% of the world population" << endl;
  return 0;
}