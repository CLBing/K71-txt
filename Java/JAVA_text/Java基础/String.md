## String类

String 类代表字符串；例如"abc"字符串使用后双引号标出，String在java.long包下，所以使用时不需要导包

特点
* 字符串不可变，它们的值在创建后不能被更改
* 虽然 String 的值是不可变的，但是它们可以被共享
* 字符串效果上相当于字符数组( char[] )，但是底层原理是字节数组( byte[] )    


### String类的构造方法

|方法名|说明|
|--|--|
|public String()|创建一个空白字符串对象，不含有任何内容|
|public String(char[] chs)|根据字符数组的内容，来创建字符串对象|
|public String(byte[] bys)|根据字节数组的内容，来创建字符串对象|
|String s = “abc”;|直接赋值的方式创建字符串对象，内容就是abc|


示例

    public class StringDemo01 {
    public static void main(String[] args) {

        //public String()：创建一个空白字符串对象，不含有任何内容
        String s1 = new String();
        System.out.println("s1:" + s1);     //s1:

        //public String(char[] chs)：根据字符数组的内容，来创建字符串对象
        char[] chs = {'a', 'b', 'c'};      //字符创建字符串对象
        String s2 = new String(chs);
        System.out.println("s2:" + s2);     //s2:abc

        //public String(byte[] bys)：根据字节数组的内容，来创建字符串对象
        byte[] bys = {97, 98, 99};      //字节创建字符串对象
        String s3 = new String(bys);
        System.out.println("s3:" + s3);     //s3:abc

        //String s = “abc”; 直接赋值的方式创建字符串对象，内容就是abc
        String s4 = "abc";
        System.out.println("s4:" + s4);     //s4:abc

        }
    }


### 创建字符串对象两种方式的区别

* 通过构造方法创建  
通过 new 创建的字符串对象，每一次 new 都会申请一个内存空间，虽然内容相同，但是地址值不同
* 直接赋值方式创建  
以“”方式给出的字符串，只要字符序列相同(顺序和大小写)，无论在程序代码中出现几次，JVM 都只会建立一
个 String 对象，并在字符串池中维护

### 字符串的比较

==号

* 比较基本数据类型：比较的是具体的值
* 比较引用数据类型：比较的是对象地址值

equals

    字符串变量1.equals(字符串变量2)

比较两个字符串内容是否相同、区分大小写

示例

    public class StringDemo02 {
        public static void main(String[] args) {
            //构造方法的方式得到对象
            char[] chs = {'a', 'b', 'c'};
            String s1 = new String(chs);
            String s2 = new String(chs);
            //直接赋值的方式得到对象
            String s3 = "abc";
            String s4 = "abc";
            //比较字符串对象地址是否相同
            System.out.println(s1 == s2);   //false 
            System.out.println(s1 == s3);   //false 
            System.out.println(s3 == s4);   //ture
            System.out.println("--------");
            //比较字符串内容是否相同
            System.out.println(s1.equals(s2));  //ture
            System.out.println(s1.equals(s3));  //ture
            System.out.println(s3.equals(s4));  //ture
        }
    }


### 遍历字符串


键盘录入一个字符串，使用程序实现在控制台遍历该字符串


    思路：
    1:键盘录入一个字符串，用 Scanner 实现
    2:遍历字符串，首先要能够获取到字符串中的每一个字符
    public char charAt(int index)：返回指定索引处的char值，字符串的索引也是从0开始的
    3:遍历字符串，其次要能够获取到字符串的长度
    public int length()：返回此字符串的长度
    数组的长度：数组名.length
    字符串的长度：字符串对象.length()
    4:遍历字符串的通用格式

    public class StringTest02 {
        public static void main(String[] args) {
            //键盘录入一个字符串，用 Scanner 实现
            Scanner sc = new Scanner(System.in);
            System.out.println("请输入一个字符串：");
            String line = sc.nextLine();
            for(int i=0; i<line.length(); i++) {    //line.length()的作用类似与arr.length
            System.out.println(line.charAt(i));     //line.charAt()的作用就类似于数组的arr[]
            }
        }
    }


### 例题：区分字符

键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数(不考虑其他字符)

    思路：
    1:键盘录入一个字符串，用 Scanner 实现
    2:要统计三种类型的字符个数，需定义三个统计变量，初始值都为0
    3:遍历字符串，得到每一个字符
    4:判断该字符属于哪种类型，然后对应类型的统计变量+1
    假如ch是一个字符，我要判断它属于大写字母，小写字母，还是数字，直接判断该字符是否在对应的范
    围即可
    大写字母：ch>='A' && ch<='Z'
    小写字母： ch>='a' && ch<='z'
    数字： ch>='0' && ch<='9'
    5:输出三种类型的字符个数

    public class StringTest03 {
        public static void main(String[] args) {
            //键盘录入一个字符串，用 Scanner 实现
            Scanner sc = new Scanner(System.in);
            System.out.println("请输入一个字符串：");
            String line = sc.nextLine();
            //要统计三种类型的字符个数，需定义三个统计变量，初始值都为0
            int bigCount = 0;
            int smallCount = 0;
            int numberCount = 0;
            //遍历字符串，得到每一个字符
            for(int i=0; i<line.length(); i++) {
                char ch = line.charAt(i);
                //判断该字符属于哪种类型，然后对应类型的统计变量+1
                if(ch>='A' && ch<='Z') {
                    bigCount++;
                } else if(ch>='a' && ch<='z') {
                    smallCount++;
                } else if(ch>='0' && ch<='9') {
                    numberCount++;
                }
            }
            //输出三种类型的字符个数
            System.out.println("大写字母：" + bigCount + "个");
            System.out.println("小写字母：" + smallCount + "个");
            System.out.println("数字：" + numberCount + "个");
        }
    }


### 字符串拼接

定义一个方法，把 int 数组中的数据按照指定的格式拼接成一个字符串返回，调用该方法并在控制台输出结果。例如，数组为 int[] arr = {1,2,3}; ，执行方法后的输出结果为：[1, 2, 3]

    public class code {
        public static void main(String[] args) {
            int[] arr={1,2,3,4};        //静态初始话一个数组
            String s=arrpin(arr);       //将下arrpin的结果赋值给字符串类型s
            System.out.printf(s);       
        }


        public static String arrpin(int[] arr) {
            String s="";                            //定义一个空的字符串
            s+="[";                                 //s+[赋值给s
            for (int i=0;i< arr.length;i++){        
                if(i==arr.length-1){                //判断是不是数组最后一位
                    s+=arr[i];                      //是最后一位的话将数组赋值给s
                }else{
                    s+=arr[i];                      
                    s+=", ";                        //不是最后一位就在每次赋值后再加上个，
                }
            }
            s+="]";                                 //字符串的结尾再添个]
            return s;
        }
    }

### 字符串反转

定义一个方法，实现字符串反转。键盘录入一个字符串，调用该方法后，在控制台输出结果
例如，键盘录入 abc，输出结果 cba


    1:键盘录入一个字符串，用 Scanner 实现
    2:定义一个方法，实现字符串反转。返回值类型 String，参数 String s
    3:在方法中把字符串倒着遍历，然后把每一个得到的字符拼接成一个字符串并返回
    4:调用方法，用一个变量接收结果
    5:输出结果


    package code;
    import java.util.Scanner;
    public class code {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            String line = sc.nextLine();
            String s = arrzhuan(line);
            System.out.printf(s);
        }
        public static String arrzhuan(String line) {    //这里倒着遍历
            String s="";
            for (int i=line.length()-1;i>=0;i--)
            {
                s+=line.charAt(i);                  //倒着遍历，从后向前每个字符赋值给s
            }
            return s;
            }
    }