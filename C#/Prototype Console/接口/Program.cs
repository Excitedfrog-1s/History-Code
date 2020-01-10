using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 接口
{
    class Program
    {
        static void Main(string[] args)
        {
            //接口就是一个规范 能力。
        }
    }

    public class Person
    {
        public void SayHello()
        {
            Console.WriteLine("我是人类");
        }
    }

    public class NBAPlayer
    {
        public void Koulan()
        {
            Console.WriteLine("扣篮");
        }
    }

    public class Student:Person,IKouLanable //继承接口必须实现接口中的成员
    {

        public void KouLan()
        {
            Console.WriteLine("我也可以扣篮");
        }
    }

    public interface IKouLanable //此处声明了一个接口
    {
        void KouLan();
    }
}
