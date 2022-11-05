#include <iostream>
using namespace std;

// 1、比较两个int型数的大小，并输出较小的那个数;
int min(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  return b;
}

int main(int argc, char const *argv[])
{
  /* code */
  int a = 5;
  int b = 6;
  int result = min(a, b);

  cout << result << endl; // 6
  return 0;
}
