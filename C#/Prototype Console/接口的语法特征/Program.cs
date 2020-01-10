using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 接口的语法特征
{
    class Program
    {
        static void Main(string[] args)
        {

        }
    }

    public interface IFlyable
    {
        //接口中的成员不允许添加访问修饰符，默认就是public（类中默认是private）
        void Fly();

        //接口中没有方法体，也不能有
        string Test();
        
        //接口不能有字段，字段是存数据用的，接口没有这个功能
        //string _name;

        //接口可以有自动属性，但其中的get和set不能有方法体
        string Name
        {
            get;
            set;
        }

        //接口也可以有索引器，但索引器，属性等都是方法。所以总的来说接口中只能有方法
    }
}
