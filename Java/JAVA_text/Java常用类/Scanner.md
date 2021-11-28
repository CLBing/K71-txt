## Scanner类常见用法

**Scanner 类在java.util包下**

- import java.util.Scanner;

### 数据输入

1;创建Scanner对象。

    Scanner sc = new Scanner(System.in);// 创建Scanner对象，sc表示变量名，其他均不可变

2;接收数据

    int i = sc.nextInt(); // 表示将键盘录入的值作为int数返回。这时候i就是你键盘输入的值

   