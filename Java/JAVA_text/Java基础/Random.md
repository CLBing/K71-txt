## Random

作用：产生一个随机数

使用步骤

1. 导包

    import java.util.Random;
    导包需要出现再类定义上面

2. 创建对象
   
    Random r = new Random();  
    r是变量名可以变，其他不允许变

3. 产生随机数

    int num = r.nextInt(10);  
    //解释： 10代表的是一个范围，如果括号写10，产生的随机数就是0-9，括号写20，参数的随机数则是0-

例如:

    Random i=new Random();
    int num=i.nextInt(10);
    System.out.println(num);




猜随机数游戏

    while (true) {
            Random i = new Random();
            int num = i.nextInt(100);
            while (true) {
                Scanner k = new Scanner(System.in);
                int cai = k.nextInt();
                if (cai > num) {
                    System.out.println("猜的数字大了");
                } else if (cai < num) {
                    System.out.println("猜的数字小了");
                } else {
                    System.out.println("猜的刚刚好");
                    break;
                }
            }
            System.out.println("随机数是：" + num);
        }
