#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */

  // ���빫�����������Ӧ��Ӣ����; ��ʽΪ 1���� =0.62137 Ӣ��

  float kilometre;
  float mile;

  cout << "�����빫�\n";
  cin >> kilometre;
  mile = 0.62137 * kilometre;
  cout << "��Ӧ�Ĺ�����Ϊ��" << mile << endl;
  return 0;
}
