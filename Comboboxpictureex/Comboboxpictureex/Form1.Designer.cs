namespace Comboboxpictureex
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.animalsComboBox = new System.Windows.Forms.ComboBox();
            this.animalPictureBox = new System.Windows.Forms.PictureBox();
            this.animalsListBox = new System.Windows.Forms.ListBox();
            ((System.ComponentModel.ISupportInitialize)(this.animalPictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // animalsComboBox
            // 
            this.animalsComboBox.FormattingEnabled = true;
            this.animalsComboBox.Items.AddRange(new object[] {
            "Cat",
            "Dog",
            "Rabbit"});
            this.animalsComboBox.Location = new System.Drawing.Point(124, 42);
            this.animalsComboBox.Name = "animalsComboBox";
            this.animalsComboBox.Size = new System.Drawing.Size(206, 24);
            this.animalsComboBox.TabIndex = 0;
            this.animalsComboBox.SelectedIndexChanged += new System.EventHandler(this.animalsComboBox_SelectedIndexChanged);
            // 
            // animalPictureBox
            // 
            this.animalPictureBox.Image = global::Comboboxpictureex.Properties.Resources.Rabbit;
            this.animalPictureBox.Location = new System.Drawing.Point(357, 42);
            this.animalPictureBox.Name = "animalPictureBox";
            this.animalPictureBox.Size = new System.Drawing.Size(206, 265);
            this.animalPictureBox.TabIndex = 1;
            this.animalPictureBox.TabStop = false;
            this.animalPictureBox.Click += new System.EventHandler(this.animalPictureBox_Click);
            // 
            // animalsListBox
            // 
            this.animalsListBox.FormattingEnabled = true;
            this.animalsListBox.ItemHeight = 16;
            this.animalsListBox.Items.AddRange(new object[] {
            "Cat",
            "Dog",
            "Rabbit"});
            this.animalsListBox.Location = new System.Drawing.Point(47, 137);
            this.animalsListBox.Name = "animalsListBox";
            this.animalsListBox.Size = new System.Drawing.Size(283, 164);
            this.animalsListBox.TabIndex = 2;
            this.animalsListBox.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 379);
            this.Controls.Add(this.animalsListBox);
            this.Controls.Add(this.animalPictureBox);
            this.Controls.Add(this.animalsComboBox);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.animalPictureBox)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ComboBox animalsComboBox;
        private System.Windows.Forms.PictureBox animalPictureBox;
        private System.Windows.Forms.ListBox animalsListBox;
    }
}

