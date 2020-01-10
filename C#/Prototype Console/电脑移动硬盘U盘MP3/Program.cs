using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 电脑移动硬盘U盘MP3
{
    class Program
    {
        static void Main(string[] args)
        {
            //用多态来实现将移动硬盘 U盘 MP3插到电脑上进行读写数据
            MobileStorage ms = new MobileDisk();
            Computer cpu = new Computer();
            cpu.CpuRead(ms);
            cpu.CpuWrite(ms);
            Console.ReadKey();
        }
    }

    public abstract class MobileStorage
    {
        public abstract void Read();
        public abstract void Write();
    }

    public class MP3 : MobileStorage
    {
        public override void Read()
        {
            Console.WriteLine("MP3在读取数据");
        }

        public override void Write()
        {
            Console.WriteLine("MP3在写入数据");
        }

        public void PlayMusic()
        {
            Console.WriteLine("MP3自己可以播放音乐");
        }
    }

    public class UDisk : MobileStorage
    {
        public override void Read()
        {
            Console.WriteLine("U盘在读取数据");
        }

        public override void Write()
        {
            Console.WriteLine("U盘在写入数据");
        }
    }

    public class MobileDisk : MobileStorage
    {
        public override void Read()
        {
            Console.WriteLine("移动硬盘在读取数据");
        }

        public override void Write()
        {
            Console.WriteLine("移动硬盘在写入数据");
        }
    }

    public class Computer
    {
        public void CpuRead(MobileStorage ms)
        {
            ms.Read();
        }

        public void CpuWrite(MobileStorage ms)
        {
            ms.Write();
        }
    }
}
