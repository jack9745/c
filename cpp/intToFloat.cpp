#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
  /* code */
  int num;
  int result;
  cout << "������һ������\n";
  cin >> num;
  if (num > 0)
  {
    result = num - num % 10000 + 1111;
  }
  else
  {
    result = num - num % 10000 - 1111;
  }

  cout << "ת��֮��Ľ��Ϊ��" << result << endl;
  return 0;
}
