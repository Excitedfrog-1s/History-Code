using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 键值对集合
{
    class Program
    {
        static void Main(string[] args)
        {
            //创建了一个键值对集合对象
            Hashtable ht = new Hashtable();
            ht.Add(1, "张三");
            ht.Add(2, true);
            ht.Add(3, '男');
            ht.Add(false, "错误的");
            ht[6] = "新来的";
            ht[1] = "把张三干掉";
            foreach (var item in ht.Keys)
            {
                Console.WriteLine("键是-----{0}------值是{1}",item,ht[item]);
            }

            //在键值对集合中是根据键去找值
            //Console.WriteLine(ht[1]);
            //Console.WriteLine(ht[2]);
            //Console.WriteLine(ht[3]);
            //Console.WriteLine(ht[false]);

            Console.ReadKey();
        }
    }
}
