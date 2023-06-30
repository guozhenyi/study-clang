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

各种类型的存储大小与系统位数有关，但目前通用的以64位系统为主。

以下列出了32位系统与64位系统的存储大小的差别（windows 相同）：

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





















