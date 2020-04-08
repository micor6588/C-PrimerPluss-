#include <iostream>
#include <array>
using namespace std;

const int Times = 3;

int main()
{
  array<double, Times> grade;
  cout << "Please enter your grade: " << endl;
  double total_grade = 0;
  for (int i = 0; i < Times; i++)
  {
    cout << i + 1 << ": ";
    cin >> grade[i];
    total_grade += grade[i];
    if (i < Times)
      cout << "Please enter your grade again:\n";
  }
  double average = total_grade / Times;
  cout << "The grade of average is: " << average << ".\n";

  system("pause");
  return 0;
}