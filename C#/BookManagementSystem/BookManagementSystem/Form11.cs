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
    public partial class Form11 : Form
    {
        public Form11()
        {
            InitializeComponent();
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void Form11_Load(object sender, EventArgs e)
        {
            using (SqlConnection conn = new SqlConnection("Data Source=.; Initial Catalog=BookManagement; User ID=sa;Password=qweasz123H"))
            {
                SqlCommand comm = new SqlCommand("select * from T_Users", conn);
                SqlDataReader reader2 = null;
                conn.Open();
                reader2 = comm.ExecuteReader();
                while (reader2.Read())
                {
                    string Name = reader2["Name"].ToString();
                    this.listView1.Items.Add(Name);
                }
                conn.Close();
            }
        }
    }
}
