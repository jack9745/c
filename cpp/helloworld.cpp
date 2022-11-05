
#include <iostream>
using namespace std;
// 先声明原型
int max(int a, int b);
int main(int argc, char const *argv[])
{
  /* code */
  cout << "hello,world" << endl;
  int result = max(2, 3);
  cout << result << endl;
  return 0;
}
// 比较两个数的大小
int max(int a, int b)
{
  int result;
  if (a > b)
  {
    result = a;
  }
  else
  {
    result = b;
  }

  return result;
};
