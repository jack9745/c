#include <stdio.h>
#include <limits.h>
// 一个字节是8个比特位
//  1b = 8 Bite
// 整数类型
/**
 * 整数类型用来表示较大的整数，what ,how,when
 * 怎么声明整数类型的变量  用int关键字来声明
 *
 * */
int num = 90;
// 不同计算机表示整数类型的大小是不一样的，
// 比较常见的是使用4个字节来存储一个int类型的值，一般情况下 int类型占据四个字节
// 整数范围如下
// 16位：-32,768 到 32,767。
// 32位：-2,147,483,648 到 2,147,483,647。
// 64位：-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807

// signed unsigned 关键字
// C语言中 signed关键字表示一个类型带有符号，包含负值，使用unsigned 表示
// 该类型不带有正负号，只有 0 和正整数，
// signed 和unsigned 还有疑惑
signed int a = -9000;

// 这也可以，不报错？？？
unsigned int b = -8000;
//  overflow 溢出了

// 整型的子类型
// 为什么会有整型的子类型？？？
// 如果int类型是使用4个或者8个字节来表示一个整数，那么对于小整数，这样是浪费空间的
// 所以在int类型之外，提供了三个整型的子类型，
//  short类型 ，占用空间不多于int类型的空间，一般占用两个字节，
//  long 类型，不少于 int 类型的占用空间，至少为4个字节
// long long 类型，占用空间多余long，至少为8个字节，

// 为什么 不同的数据类型占用的内存空间还不确定呢?
// 因为不同的计算机，数据类型的字节长度是不一样的

// 本计算机两个字节，超过了两个字节表示大小的范围
short c = 123456;

long d = 8900888;
long long e = 6789000;

// 整数的进制
// C语言整数的默认进制是十进制整数，如果要表示八进制和十六进制，就必须使用
// 专门的表示法

// 八进制使用0作为前缀
int f = 067;

// 十六进制使用0x作为前缀
int g = 0x123acd;

// printf中关于进制的相关占位符号
// %d 表示十进制的占位符号
// %o 表示八进制的占位符号
// %x 表示十六进制的占位符号
int main()
{
  printf("hello,world \n");
  printf("%d \n", num);
  printf("%d \n", a);
  printf("%d \n", b);
  printf("%d \n", c);
  printf("%d \n", d);
  printf("%d \n", e);
  // 用八进制和十进制 和十六进制 打印出来的是不一样的值
  printf("我是八进制的数%o \n", f);
  printf("我是十进制的数%d \n", f);
  printf("我是十进制的数%d \n", g);
  printf("我是十六进制的数%x \n", g);

  // 查看极限值
  // 有时候需要查看当前系统不同整数类型的最大值和最小值，C语言的头文件里limits.h
  // 中提供了相应的常量，
  printf("SCHAR_MIN %d \n", SCHAR_MIN);
  printf("ULLONG_MAX %d \n", ULLONG_MAX);
  printf("LONG_MIN %d \n", LONG_MIN);
  printf("LLONG_MIN %d \n", LLONG_MIN);
  printf("LONG_MAX %d \n", LONG_MAX);
  printf("USHRT_MAX %d \n", USHRT_MAX);
  printf("UINT_MAX %d \n", UINT_MAX);
  printf("ULONG_MAX %d \n", ULONG_MAX);
  // 打印出来怎么是-1
  printf("LLONG_MAX %d \n", LLONG_MAX);
}