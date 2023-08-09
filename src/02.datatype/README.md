# C 语言数据结构

## 数据类型

#### 1. 基本数据类型

算术类型，包括 int（整型）、char（字符型）、float（浮点型）和 double（双精度浮点型）

#### 2. 枚举类型

也是算术类型，被用来定义在程序中只能赋予其一定的离散整数值的变量。

#### 3. void 类型

类型说明符 void 表示没有值的数据类型，通常用于函数返回值。

#### 4. 派生类型

包括数组类型、指针类型和结构体类型。
数组类型和结构类型统称为聚合类型。函数的类型指的是函数返回值的类型。

### 整数类型

| 类型           | 存储大小    | 值范围                                               |
| -------------- | ----------- | ---------------------------------------------------- |
| char           | 1 字节      | -128 到 127 或 0 到 255                              |
| unsigned char  | 1 字节      | 0 到 255                                             |
| signed char    | 1 字节      | -128 到 127                                          |
| int            | 2 或 4 字节 | -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647 |
| unsigned int   | 2 或 4 字节 | 0 到 65,535 或 0 到 4,294,967,295                    |
| short          | 2 字节      | -32,768 到 32,767                                    |
| unsigned short | 2 字节      | 0 到 65,535                                          |
| long           | 4 字节      | -2,147,483,648 到 2,147,483,647                      |
| unsigned long  | 4 字节      | 0 到 4,294,967,295                                   |

各种类型的存储大小与系统位数有关，但目前通用的以 64 位系统为主。

以下列出了 32 位系统与 64 位系统的存储大小的差别（windows 相同）：

<table>
  <thead>
    <tr>
      <th colspan="2">Windows vc12</th>
      <th colspan="2">Linux gcc-5.3.1</th>
      <th>Compiler</th>
    </tr>
    <tr>
      <th>win32</th>
      <th>x64</th>
      <th>i686</th>
      <th>x86_64</th>
      <th>Target</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>1</td>
      <td></td>
      <td>1</td>
      <td>1</td>
      <td>char</td>
    </tr>
    <tr>
      <td>1</td>
      <td></td>
      <td>1</td>
      <td>1</td>
      <td>unsigned char</td>
    </tr>
    <tr>
      <td>2</td>
      <td></td>
      <td>2</td>
      <td>2</td>
      <td>short</td>
    </tr>
    <tr>
      <td>2</td>
      <td></td>
      <td>2</td>
      <td>2</td>
      <td>unsigned short</td>
    </tr>
    <tr>
      <td>4</td>
      <td></td>
      <td>4</td>
      <td>4</td>
      <td>int</td>
    </tr>
    <tr>
      <td>4</td>
      <td></td>
      <td>4</td>
      <td>4</td>
      <td>unsigned int</td>
    </tr>
    <tr>
      <td>4</td>
      <td></td>
      <td>4</td>
      <td>8</td>
      <td>long</td>
    </tr>
    <tr>
      <td>4</td>
      <td></td>
      <td>4</td>
      <td>8</td>
      <td>unsigned long</td>
    </tr>
    <tr>
      <td>4</td>
      <td></td>
      <td>4</td>
      <td>4</td>
      <td>float</td>
    </tr>
    <tr>
      <td>8</td>
      <td></td>
      <td>8</td>
      <td>8</td>
      <td>double</td>
    </tr>
    <tr>
      <td>4</td>
      <td></td>
      <td>4</td>
      <td>8</td>
      <td>long int</td>
    </tr>
    <tr>
      <td>8</td>
      <td></td>
      <td>8</td>
      <td>8</td>
      <td>long long</td>
    </tr>
    <tr>
      <td>8</td>
      <td></td>
      <td>12</td>
      <td>16</td>
      <td>long double</td>
    </tr>
  </tbody>
</table>

### 浮点类型

下表列出了管与标准浮点类型的存储大小、值范围和精度的细节：

| 类型        | 存储大小 | 值范围                 | 精度        |
| ----------- | -------- | ---------------------- | ----------- |
| float       | 4 字节   | 1.2E-38 到 3.4E+38     | 6 位有效位  |
| double      | 8 字节   | 2.3E-308 到 1.7E+308   | 15 位有效位 |
| long double | 16 字节  | 3.4E-4932 到 1.1E+4932 | 19 位有效位 |

### void 类型

void 类型指定没有可用的值。它通常用于以下三种情况：

| 类型与描   |
| -------------- |
| 函数返回为空 <br> C 中有各种函数都不返回值，或者您可以说它们返回空。不返回值的函数的返回类型为空。例如 void exit (int status);  |
| 函数参数为空 <br> C 中有各种函数不接受任何参数。不带参数的函数可以接受一个 void。例如 int rand(void);   |
| 指针指向 void <br> 类型为 void * 的指针代表对象的地址，而不是类型。例如，内存分配函数 void *malloc( size_t size ); 返回指向 void 的指针，可以转换为任何数据类型。 |

### 类型转换

C 语言中有两种类型转换：

隐式类型转换：隐式类型转换是在表达式中自动发生的，无需进行任何明确的指令或函数调用。它通常是将一种较小的类型自动转换为较大的类型，例如，将int类型转换为long类型或float类型转换为double类型。隐式类型转换也可能会导致数据精度丢失或数据截断。

显式类型转换：显式类型转换需要使用强制类型转换运算符（type casting operator），它可以将一个数据类型的值强制转换为另一种数据类型的值。强制类型转换可以使程序员在必要时对数据类型进行更精确的控制，但也可能会导致数据丢失或截断。

```c
int i = 10;
float f = 3.14;
double d = i + f; // 隐式将int类型转换为double类型

double d2 = 3.1415926;
int i = (int)d2; // 显式将double类型转换为int类型
```
