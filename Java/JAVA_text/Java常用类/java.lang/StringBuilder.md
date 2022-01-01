## StringBuilder 类

String 类型字符串中的值是不可以变得，如果进行增改，会重新开辟一块地址，这时候就需要 StringBuilder 类，StringBuilder 是一个可变的字符串类

String：内容不可变
StringBuilder ：内容可变

## StringBuilder 定义

| 方法名                           | 说明                                       |
| -------------------------------- | ------------------------------------------ |
| public StringBuilder()           | 创建一个空白可变字符串对象，不含有任何内容 |
| public StringBuilder(String str) | 根据字符串的内容，来创建可变字符串对象     |

        //public StringBuilder()：创建一个空白可变字符串对象，不含有任何内容
        StringBuilder a1 = new StringBuilder();


        //public StringBuilder(String str)：根据字符串的内容，来创建可变字符串对象
        StringBuilder a2 = new StringBuilder("hello");

## StringBuilder 拼接与反转

| 方法名                                | 说明                 |
| ------------------------------------- | -------------------- |
| public StringBuilder append(任意类型) | 添加数据，并返回对象 |
| public StringBuilder reverse()        | 返回相反的字符序列   |

        //public StringBuilder append(任意类型)：添加数据，并返回对象本身
        StringBuilder Obj= new StringBuilder(); //无参构造
        StringBuilder Obj= Obj.append("hello"); //有参构造

        // Obj.append("word");      //拼接字符串
        //sb.append("hello").append("world").append("java").append(100);   //链式编程

        //public StringBuilder reverse()：返回相反的字符序列
        Obj.reverse();

### String 与 StringBuilder 相互转化

| 方法名                         | 说明                                                                  |
| ------------------------------ | --------------------------------------------------------------------- |
| Public String toString()       | 通过 toString()方法返回 String 类型，用于 StringBuilder 转换为 String |
| Public StringBuilder(String s) | 通过 StringBuilder()方法将 String 类型转为 StringBuilder              |


