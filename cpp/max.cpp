#include <iostream>
using namespace std;

// 比较一个int型数与一个float型数的大小，并输出较大的那个数;

float max(int a, float b)
{
  if (a > b)
  {
    return a;
  }
  return b;
}

int main(int argc, char const *argv[])
{
  /* code */
  int a = 90;
  float b = 100.1;
  float result = max(a, b); // 100.1
  cout << result << endl;

  int num1 = 100;
  float num2 = 56.90;
  float result1 = max(num1, num2);
  cout << result1 << endl; // 100
  return 0;
}
