namespace ComboBox
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
            ((System.ComponentModel.ISupportInitialize)(this.animalPictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // animalsComboBox
            // 
            this.animalsComboBox.FormattingEnabled = true;
            this.animalsComboBox.Items.AddRange(new object[] {
            "Cat",
            "Dog",
            "Rabbit",
            "Pig",
            "Bird"});
            this.animalsComboBox.Location = new System.Drawing.Point(55, 85);
            this.animalsComboBox.Name = "animalsComboBox";
            this.animalsComboBox.Size = new System.Drawing.Size(165, 24);
            this.animalsComboBox.TabIndex = 0;
            this.animalsComboBox.SelectedIndexChanged += new System.EventHandler(this.animalsComboBox_SelectedIndexChanged);
            // 
            // animalPictureBox
            // 
            this.animalPictureBox.Image = global::ComboBox.Properties.Resources.Cat;
            this.animalPictureBox.Location = new System.Drawing.Point(277, 85);
            this.animalPictureBox.Name = "animalPictureBox";
            this.animalPictureBox.Size = new System.Drawing.Size(227, 300);
            this.animalPictureBox.TabIndex = 1;
            this.animalPictureBox.TabStop = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(544, 450);
            this.Controls.Add(this.animalPictureBox);
            this.Controls.Add(this.animalsComboBox);
            this.Name = "Form1";
            this.Text = "Animals";
            ((System.ComponentModel.ISupportInitialize)(this.animalPictureBox)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ComboBox animalsComboBox;
        private System.Windows.Forms.PictureBox animalPictureBox;
    }
}

