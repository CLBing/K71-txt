## Arrays 类的常见用法

**Arrays 属于 java.util 包下**

-- import java.util.Arrays;

例如有个数组 arrays[]

### 对数组进行升序

    Arrays.sort(arrays);       //arr为数组名,后面不用跟`[]`,最简单用法。
    Arrays.sort(arrays,0,4);   //对arr[]数组中前5位元素进行升序

### 数组元素填充相同的值

    Arrays.fill(arrays,71)         //将arr[]数组内的每个元素全部换成71
    Arrays.fill(arrays,2,5,71)     //将arr[]数组内的第三个到第六个元素换成71

### 返回数组的字符串形式

Arrays.toString(arrys) //常用于`System.out.println(Arrays.toString(arr));`输出数组的字符串形式
Arrays.deepToString(arrays) //返回二维数组的字符串形式
