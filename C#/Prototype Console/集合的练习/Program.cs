﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 集合的练习
{
    class Program
    {
        static void Main(string[] args)
        {
            //创建一个集合，里面添加一些数字，求平均值与和,最大值
            //ArrayList list=new ArrayList();
            //list.AddRange(new int[] { 1, 2, 3, 4, 5, 6, 7, 8 });
            //int sum = 0;
            //int max = (int)list[0];
            //for (int i = 0; i < list.Count; i++)
            //{
            //    if((int)list[i]>max)
            //    {
            //        max = (int)list[i];
            //    }
            //    sum += (int)list[i];
            //}
            //Console.WriteLine(max);
            //Console.WriteLine(sum);
            //Console.WriteLine(sum / list.Count);
            //Console.ReadKey();

            //写一个长度为10的集合，要求在里面随机的存放10个数字（0-9），不重复
            ArrayList list = new ArrayList();
            Random r = new Random();
            for (int i = 0; i < 10; i++)
            {
                int rNumber = r.Next(0, 10);
                //集合中没有这个随机数
                if(!list.Contains(rNumber))
                {
                    list.Add(rNumber);
                }
                //集合中有这个随机数
                else
                {
                    i--;//一旦产生了重复的随机数，这次循环不算数
                }
            }
            for (int i = 0; i < list.Count; i++)
            {
                Console.WriteLine(list[i]);
            }
            Console.ReadKey();
        }
    }
}
