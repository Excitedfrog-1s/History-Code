using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 显示实现接口
{
    class Program
    {
        static void Main(string[] args)
        {
            //显示实现接口就是为了解决方法的重名问题
            IFlyable fly = new Bird();
            fly.Fly();
            Bird bird = new Bird();
            bird.Fly();
            Console.ReadKey();
        }
    }

    public class Bird : IFlyable
    {
        public void Fly()
        {
            Console.WriteLine("鸟会飞");
        }

        void IFlyable.Fly() //显示实现接口的飞，否则会因重名问题导致编译器认为上面的fly函数是接口中的函数
        {
            Console.WriteLine("接口的飞");
        }
    }

    public interface IFlyable
    {
        void Fly();
    }
}
