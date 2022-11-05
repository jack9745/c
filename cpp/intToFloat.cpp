#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
  /* code */
  int num;
  int result;
  cout << "请输入一个整数\n";
  cin >> num;
  if (num > 0)
  {
    result = num - num % 10000 + 1111;
  }
  else
  {
    result = num - num % 10000 - 1111;
  }

  cout << "转换之后的结果为：" << result << endl;
  return 0;
}
