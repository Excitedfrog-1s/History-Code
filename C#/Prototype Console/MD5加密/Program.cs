using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace MD5加密
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = GetMD5("123");
            Console.WriteLine(s);
            Console.ReadKey();
        }

        public static string GetMD5(string str)
        {
            //创建MD5对象
            MD5 md5 = MD5.Create();
            //开始加密
            //需要将字符串转换成字节数组
            byte[] buffer = Encoding.UTF8.GetBytes(str);
            //返回一个加密好的字符数组
            byte[] MD5Buffer = md5.ComputeHash(buffer);
            //将字节数组转换成字符串
            //字节数组--字符串，三种方式：
            //1.将字节数组中每个元素按照指定的编码格式解析成字符串
            //2.直接将数组ToString(); 直接pass掉
            //3.将字节数组中的每个元素ToString();
            //第一种方法（不正确）：return Encoding.UTF8.GetString(MD5Buffer);
            string strNew = "";
            for (int i = 0; i < MD5Buffer.Length; i++)
            {
                strNew += MD5Buffer[i].ToString("x2"); //转换为16进制
            }
            return strNew;
        }
    }
}
