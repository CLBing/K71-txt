## ArrayList


Class Arraylist<E> // E:为列表中元素的类型

Arraylist<E>

- 可调节大小的数组实现
- <E>:特殊数据类型---泛型

| 方法                                 | 说明                                   |
| ------------------------------------ | -------------------------------------- |
| public ArrayList()                   | 创建一个空的集合对象                   |
| public boolean remove(Object o)      | 删除指定的元素，返回删除是否           |
| public E remove(int index)           | 删除指定索引处的元素，返回被删除的     |
| public E set(int index,E element)    | 修改指定索引处的元素，返回被修改的元素 |
| public E get(int index)              | get(int index) 返回指定索引处的元素    |
| public int size()                    | 返回集合中的元素的个数                 |
| public boolean add(E e)              | 将指定的元素追加到此集合的末尾         |
| public void add(int index,E element) | 在此集合中的指定位置插入指定的元素     |

### ArrayList 类常用方法

创建与添加

        //创建一个Arraylist集合array，存储String类型
        ArrayList<String> array = new ArrayList<String>();  
        //数组添加元素,并会返回是否成功
        array.add("");
        //数组中元素删除,并会返回是否成功
        array.remove("");          //删除某一元素
        array.remove(int index);   //删除索引处的元素并返回是否成功
        array.get(int index)       //获取指定索引处的元素
        array.size()               //返回数组中元素的个数

