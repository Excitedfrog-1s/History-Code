using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 文件流
{
    class Program
    {
        static void Main(string[] args)
        {
            //使用FileStream读取数据
            //FileStream fsRead = new FileStream(@"E:\1.txt", FileMode.OpenOrCreate, FileAccess.Read);
            //byte[] buffer = new byte[1024 * 1024 * 5];
            ////返回实际读取到的有效字节数
            //int r = fsRead.Read(buffer, 0, buffer.Length);
            ////将字节数组中每一个元素按照指定的编码格式解码成字符串
            //string s = Encoding.Default.GetString(buffer,0,r);
            ////关闭流
            //fsRead.Close();
            ////释放流所占用的资源
            //fsRead.Dispose();
            //Console.WriteLine(s);
            //Console.ReadKey();

            //使用FileStream写入数据
            using (FileStream fsWrite = new FileStream(@"E:\1.txt", FileMode.OpenOrCreate, FileAccess.Write))
            {
                string str = "覆盖！";
                byte[] buffer = Encoding.UTF8.GetBytes(str);
                fsWrite.Write(buffer, 0, buffer.Length);
            }
            Console.WriteLine("写入成功");
            Console.ReadKey();

        }
    }
}
