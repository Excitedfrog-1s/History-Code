using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 装箱和拆箱
    //应当尽量避免出现装箱和拆箱，会影响性能
{
    class Program
    {
        static void Main(string[] args)
        {
            //int n = 10;
            //object o = n; //装箱
            //int nn = (int)o; //拆箱
            //List<int> list =new List<int>();
            ////这个循环发生了1000万次装箱操作
            //Stopwatch sw = new Stopwatch();
            //sw.Start();
            //for (int i = 0; i < 10000000; i++)
            //{
            //    list.Add(i);
            //}
            //sw.Stop();
            //Console.WriteLine(sw.Elapsed);
            //Console.ReadKey();

            //这个地方没有发生任何的装箱拆箱
            //string str = "123";
            //int n = Convert.ToInt32(str);

            int n = 10;
            IComparable i = n;

        }
    }
}
