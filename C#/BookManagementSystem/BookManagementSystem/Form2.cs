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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        int s = 0;

        private void button1_Click(object sender, EventArgs e)
        {
            string Name = this.textBox1.Text;
            string Password = this.textBox2.Text;
            s++;
            if (s < 3)
            {
                Login(Name, Password);
            }
            else
            {
                this.Close();
            }

        }

        public void Login(string Name, string Password)
        {
            using (SqlConnection conn = new SqlConnection("Data Source=.; Initial Catalog=BookManagement; User ID=sa;Password=qweasz123H"))
            {
                string sqlStr = string.Format("select count(1) from T_Users where Name='{0}' and Password='{1}'", Name, Password);
                SqlCommand comm = new SqlCommand(sqlStr, conn);
                int result = 0;
                conn.Open();
                result = (int)comm.ExecuteScalar();
                conn.Close();
                if (result != 1)
                {
                    MessageBox.Show("你是非法用户！");
                }
                else
                {
                    this.Close();
                    Form4 frm4 = new Form4();
                    frm4.Show();
                }
            }
        }

    }
}
