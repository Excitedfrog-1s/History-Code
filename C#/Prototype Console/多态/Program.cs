using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 多态之虚方法
{
    class Program
    {
        static void Main(string[] args)
        {
            //让一个对象能够表现出多种类型（状态）
            //实现多态有三种手段：1.虚方法 2.抽象类 3.接口

            Chinese cn1 = new Chinese("韩梅梅");
            Chinese cn2 = new Chinese("李雷");
            Japanese j1 = new Japanese("树下君");
            Japanese j2 = new Japanese("井边子");
            Korea k1 = new Korea("金秀贤");
            Korea k2 = new Korea("金贤秀");
            American a1 = new American("科比布莱恩特");
            American a2 = new American("奥尼尔");
            Person[] pers = { cn1, cn2, j1, j2, k1, k2, a1, a2, new English("格林"), new English("玛利亚") };

            for (int i = 0; i < pers.Length; i++)
            {
                //{
                //    if(pers[i] is Chinese)
                //    {
                //        ((Chinese)pers[i]).SayHello();
                //    }
                //    else if(pers[i] is Japanese)
                //    {
                //        ((Japanese)pers[i]).SayHello();
                //    }
                //    else if(pers[i] is Korea)
                //    {
                //        ((Korea)pers[i]).SayHello();
                //    }
                //    else
                //    {
                //        ((American)pers[i]).SayHello();
                //    }
                pers[i].SayHello();
            }
            Console.ReadKey();
        }
    }
    public class Person
    {
        private string _name;
        public string Name
        {
            get { return _name; }
            set { _name = value; }
        }

        public Person(string name)
        {
            this.Name = name;
        }

        public virtual void SayHello() //这个函数可以被子类重写遍
        {
            Console.WriteLine("我是人类");
        }
    }

    public class Chinese : Person
    {
        public Chinese(string name)
            : base(name)
        {

        }

        public override void SayHello()
        {
            Console.WriteLine("我是中国人，我叫{0}", this.Name);
        }
    }

    public class Japanese : Person
    {
        public Japanese(string name)
            : base(name)
        {

        }

        public override void SayHello()
        {
            Console.WriteLine("我是日本人，我叫{0}", this.Name);
        }
    }

    public class Korea : Person
    {
        public Korea(string name)
            : base(name)
        {

        }

        public override void SayHello()
        {
            Console.WriteLine("我是韩国人，我叫{0}", this.Name);
        }
    }

    public class American : Person
    {
        public American(string name)
            : base(name)
        {

        }

        public override void SayHello()
        {
            Console.WriteLine("我是美国人，我叫{0}", this.Name);
        }
    }

    public class English : Person
    {
        public English(string name)
            : base(name)
        {

        }

        public override void SayHello()
        {
            Console.WriteLine("我是英国人，我叫{0}", this.Name);
        }
    }
}
