using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 重写ToSting方法
{
    class Program
    {
        static void Main(string[] args)
        {
            Person p = new Person();
            Console.WriteLine(p.ToString()); //这样打印出来的是命名空间。重写后就是hello world
            Console.ReadKey();
        }
    }
  public class Person
  {
      public override string ToString() //在父类中重写了ToString
      {
          return "Hello World";
      }
  }
}
