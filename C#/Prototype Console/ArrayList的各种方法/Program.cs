using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;
using System.Threading.Tasks;

namespace ArrayList的各种方法
{
    class Program
    {
        static void Main(string[] args)
        {
            ArrayList list=new ArrayList ();
            //添加单个元素
            list.Add(true);
            list.Add(1);
            list.Add("张三");
            //添加集合元素
            list.AddRange(new int[]{1,2,3,4,5,6,7,8,9});
            list.AddRange(list);
            
            //bool b=list.Contains(1);判断是否包含指定的元素
            //list.InsertRange(0,new string[]{"张三","李四"});在指定的位置插入集合
            //list.Insert(1,"插入的");在指定下标处插入元素
            //list.Reverse();反转
            //list.Sort();升序排列
            //list.RemoveRange(0, 3);根据下标去移除一定范围的元素
            //list.RemoveAt(0);根据下标去删除元素
            //list.Clear();清空所有元素
            //list.Remove(true);删除单个元素，写谁就删谁
            for (int i = 0; i < list.Count; i++)
			{
			 Console.WriteLine(list[i]);
			}
            Console.ReadKey();
        }
    }
}
