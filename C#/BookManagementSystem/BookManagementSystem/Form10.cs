using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BookManagementSystem
{
    public partial class Form10 : Form
    {
        public Form10()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string Name = this.textBox1.Text;
            string Sex = "";
            if(radioButton1.Checked)
            {
                Sex = "男";
            }
            if(radioButton2.Checked)
            {
                Sex = "女";
            }
            string Age = this.textBox2.Text;
            string Job = this.textBox3.Text;
            int Num = 0;
            int Cash = 0;
            string Password = "";
            if(this.textBox4.Text!=this.textBox5.Text)
            {
                MessageBox.Show("两次输入的密码不同，请重新输入！");
            }
            else
            {
                Password = this.textBox4.Text;
            }

            AddUser(Name, Sex, Age, Job, Num, Cash, Password);

        }

        public void AddUser(string Name,string Sex,string Age,string Job,int Num,int Cash,string Password)
        {
            using (SqlConnection conn = new SqlConnection("Data Source=.; Initial Catalog=BookManagement; User ID=sa;Password=qweasz123H"))
            {
                SqlCommand comm = new SqlCommand("insert into T_Users(Name,Sex,Age,Job,Num,Cash,Password) values(@Name,@Sex,@Age,@Job,@Num,@Cash,@Password)", conn);
                comm.Parameters.AddWithValue("@Name", Name);
                comm.Parameters.AddWithValue("@Sex", Sex);
                comm.Parameters.AddWithValue("@Age", Age);
                comm.Parameters.AddWithValue("@Job", Job);
                comm.Parameters.AddWithValue("@Num", Num);
                comm.Parameters.AddWithValue("@Cash", Cash);
                comm.Parameters.AddWithValue("@Password", Password);
                conn.Open();
                comm.ExecuteNonQuery();
                conn.Close();
            }
            MessageBox.Show("添加成功！");
            this.Close();
        }
    }
}
