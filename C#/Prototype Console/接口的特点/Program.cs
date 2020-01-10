using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 接口的特点
{
    class Program
    {
        static void Main(string[] args)
        {
            //IFlyable fly = new IFlyable(); 接口不能实例化
            IFlyable fly = new Person();
            fly.Fly();
            Console.ReadKey();
        }
    }

    public class Person : IFlyable
    {
        public void Fly()
        {
            Console.WriteLine("人类在飞");
        }
    }

    public class Bird : IFlyable //实现接口的子类必须实现该接口的全部成员
    {
        public void Fly()
        {
            Console.WriteLine("鸟在飞");
        }
    }

    public class Student : Person, IFlyable //若同时继承类与接口，语法上必须先继承类
    {
        public void Fly()
        {
            Console.WriteLine("学生在飞");
        }
    }

    public interface IFlyable //接口只能继承接口，不能继承类
    {
        //不允许有访问修饰符，默认public
        void Fly();
    }
}
