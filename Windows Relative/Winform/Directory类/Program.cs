using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Directory类
{
    class Program
    {
        static void Main(string[] args)
        {
            //File操作文件 Path操作路径 FileStream操作流 StreamReader StreamWriter操作字节流
            //Directory 操作文件夹 目录
            //创建文件夹
            //Directory.CreateDirectory(@"E:\1");
            //Console.WriteLine("创建成功");

            //删除文件夹
            Directory.Delete(@"E:\1",true);
            Console.WriteLine("删除成功");
            Console.ReadKey();

            //其他功能如Move剪切，GetFiles获得指定文件夹下的所有文件的全路径
        }
    }
}
