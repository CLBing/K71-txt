## Scanner 类常见用法

**Scanner 类在 java.util 包下**

- import java.util.Scanner;

### 数据输入

1;创建 Scanner 对象。

    Scanner sc = new Scanner(System.in);// 创建Scanner对象，sc表示变量名，其他均不可变

2;接收数据

    sc.next();      //接收键盘输入的字符串
    sc.nextLine();  //接收键盘输入的字符串，但空格不在认为是多个字符串的间隔，而是字符串的一部分
    sc.nextInt();   // 表示将键盘录入的值作为int数返回。

    sc.nextDouble();//作为double数
    sc.nextShort(); //作为short数
    sc.nextFloat(); //作为float数
    sc.nextBoolean();//作为boolean数
    sc.nextByte();  //作为byte数
