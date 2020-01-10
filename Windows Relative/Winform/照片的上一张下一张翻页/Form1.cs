using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 照片的上一张下一张翻页
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile(@"F:\WallPaper\030422iwc30tzccqd0awcw.jpg");
        }

        string[] path = Directory.GetFiles(@"F:\WallPaper");
        int i = 0;

        /// <summary>
        /// 点击更换下一张图片
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button2_Click(object sender, EventArgs e)
        {
            i++;
            if(i==path.Length)
            {
                i = 0;
            }
            pictureBox1.Image = Image.FromFile(path[i]);

        }

        /// <summary>
        /// 上一张图片
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button1_Click(object sender, EventArgs e)
        {
            i--;
            if(i<0)
            {
                i = path.Length - 1;
            }
            pictureBox1.Image = Image.FromFile(path[i]);
        }
    }
}
