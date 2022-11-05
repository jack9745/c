
// 引入预编译文件
#include <stdio.h>
#include <activdbg.h>
#include <accctrl.h>
#include <strings.h>

// 测试证明 函数声明还必须放在main函数的前面不然会报错
// 也可以发现一个函数如果返回一个字符串类型  就是声明类型 char*
char *getMyName()
{
  int age = 89;
  char *userName = "jack huangtao";
  return userName;
}

int main()
{
  printf("hello ,world\n");
  // 年龄
  int age = 12;
  char *userName = "jack huangtao";
  char *helloWorld = "hello ,world";
  float width = 21;
  float height = 90;
  // 结尾没有分号也会报错
  printf("------------------------------\n");
  printf("长方形的宽度为 %f \n", width);
  printf("------------------------------\n");
  printf("长方形的高度为 %f \n", height);
  printf("------------------------------\n");
  printf("用户的名字为 %s \n", userName);
  printf("------------------------------\n");
  printf("欢迎来到我的世界;%s \n", helloWorld);
  printf("------------------------------\n");
  char *myName = getMyName();
  printf("我的的名字为 %s \n", myName);
  return 0;
}
