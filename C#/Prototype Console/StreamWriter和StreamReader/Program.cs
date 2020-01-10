using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace StreamWriter和StreamReader
{
    class Program
    {
        static void Main(string[] args)
        {
         using (StreamReader sr=new StreamReader(@"E:\1.txt",Encoding.Default))
         {
             while(sr.EndOfStream)
             {
                 Console.WriteLine(sr.ReadLine());
             }
         }
         Console.ReadKey();
        }
    }
}
