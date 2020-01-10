using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 简单工厂设计模式
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("请输入笔记本品牌：");
            string brand = Console.ReadLine();
            NoteBook nb = GetNoteBook(brand);
            nb.SayHello();
            Console.ReadKey();
        }

        public static NoteBook GetNoteBook(string brand)
        {
            NoteBook nb = null;
            switch (brand)
            {
                case "Lenovo": nb = new Lenovo();
                    break;
                case "IBM": nb = new IBM();
                    break;
                case "Acer": nb = new Acer();
                    break;
                case "DELL": nb = new DELL();
                    break;
            }
            return nb;
        }
    }

    public abstract class NoteBook
    {
        public abstract void SayHello();
    }

    public class Lenovo : NoteBook
    {
        public override void SayHello()
        {
            Console.WriteLine("Lenovo");
        }
    }

    public class Acer : NoteBook
    {
        public override void SayHello()
        {
            Console.WriteLine("Acer");
        }
    }

    public class DELL : NoteBook
    {
        public override void SayHello()
        {
            Console.WriteLine("DELL");
        }
    }

    public class IBM : NoteBook
    {
        public override void SayHello()
        {
            Console.WriteLine("IBM");
        }
    }


}
