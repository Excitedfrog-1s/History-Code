using System;
using System.Collections.Generic;
using System.Linq;
using Prototype;
using System.Text;
using System.Threading.Tasks;

namespace 命名空间
{
    class Program
    {
        static void Main(string[] args)
        {
            Person zsPerson = new Person();
            zsPerson.Name = "张三";
            Console.WriteLine(zsPerson.Name);
            Console.ReadKey();
        }
    }
}
