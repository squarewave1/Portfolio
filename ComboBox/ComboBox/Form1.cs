using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
//Pag 625

namespace ComboBox
{
    public partial class Form1 : Form 
    {
        private string[]ANIM = {"Cat, Dog, Rabbit, Pig, Bird"}; //Arreglo
        public Form1()
        {
          InitializeComponent();

          animalsComboBox.SelectedIndex = 0; // es como un seter
            
            
        }
        
        private void animalsComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {


         int idx = animalsComboBox.SelectedIndex;// int idx = animalsComboBox.SelectedIndex; // es como un getter atrapa cual es el indice que se escogio

         ///MessageBox.Show(String.Format("{0}", idx));
         animalPictureBox.Image = (Image)Properties.Resources.ResourceManager.GetObject(ANIM[idx]);

            //animalPictureBox.Image = (Image)Properties.Resources.ResourceManager.GetObject(ANIMALS[idx]);
            //animalPictureBox.Show();

        }

        
        }
    }




        

