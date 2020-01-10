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
    public partial class Form9 : Form
    {
        public Form9()
        {
            InitializeComponent();
        }

        private void Form9_Load(object sender, EventArgs e)
        {
            using (SqlConnection conn = new SqlConnection("Data Source=.; Initial Catalog=BookManagement; User ID=sa;Password=qweasz123H"))
            {
                SqlCommand comm = new SqlCommand("select * from T_Books", conn);
                SqlDataReader reader1 = null;
                conn.Open();
                reader1 = comm.ExecuteReader();
                while (reader1.Read())
                {
                    string Name = reader1["Name"].ToString();
                    this.listView1.Items.Add(Name);
                }
                conn.Close();
            }
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string Name = this.textBox1.Text;
            string Publication = this.textBox2.Text;
            string Writer = this.textBox3.Text;
            string Price = this.textBox4.Text;
            string Num = this.textBox5.Text;

        }

        public void Update()
        {
            using (SqlConnection conn = new SqlConnection("Data Source=.; Initial Catalog=BookManagement; User ID=sa;Password=qweasz123H"))
            {
                string sqlStr = string.Format("update T_Books set Name='{0}',Publication='{1}',Writer={2},Price={3},Num={4}");
                SqlCommand comm = new SqlCommand(sqlStr, conn);
                SqlDataReader reader1 = null;
                conn.Open();
                conn.Close();
            }
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }
    }
}
