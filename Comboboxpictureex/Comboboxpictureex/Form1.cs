using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Comboboxpictureex
{
    public partial class Form1 : Form
    {
        private string[] ANIMALS = { "Cat", "Dog", "Rabbit" };
        public Form1()
        {
            InitializeComponent();

            animalsComboBox.SelectedIndex = 0;
            animalsListBox.SelectedIndex = 0;//subraya primera lienea en lista
        }

        private void animalsComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

            int idx = animalsComboBox.SelectedIndex;

            animalPictureBox.Image = (Image)Properties.Resources.ResourceManager.GetObject(ANIMALS[idx]);
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            int idx = animalsListBox.SelectedIndex;

            animalPictureBox.Image = (Image)Properties.Resources.ResourceManager.GetObject(ANIMALS[idx]);
        }

        private void animalPictureBox_Click(object sender, EventArgs e)
        {

        }
    }
}


