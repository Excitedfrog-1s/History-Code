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
    public partial class Form8 : Form
    {
        public Form8()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string Name = this.textBox1.Text;
            string Publication = this.textBox2.Text;
            string Writer = this.textBox3.Text;
            string Price = this.textBox4.Text;
            string Num = this.textBox5.Text;
            AddBook(Name, Publication, Writer, Price, Num);
        }

        public void AddBook(string Name, string Publication, string Writer, string Price, string Num)
        {

            using (SqlConnection conn = new SqlConnection("Data Source=.; Initial Catalog=BookManagement; User ID=sa;Password=qweasz123H"))
            {
                SqlCommand comm = new SqlCommand("insert into T_Books(Name,Publication,Writer,Price,Num) values(@Name,@Publication,@Writer,@Price,@Num)", conn);
                comm.Parameters.AddWithValue("@Name", Name);
                comm.Parameters.AddWithValue("@Publication", Publication);
                comm.Parameters.AddWithValue("@Writer", Writer);
                comm.Parameters.AddWithValue("@Price", Price);
                comm.Parameters.AddWithValue("@Num", Num);
                conn.Open();
                comm.ExecuteNonQuery();
                conn.Close();
            }
            MessageBox.Show("添加成功！");
            this.Close();
        }
    }
}
