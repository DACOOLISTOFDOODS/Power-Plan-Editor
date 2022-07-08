namespace PowerPlanEditor
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void helpToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hi");
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void folderBrowserDialog1_HelpRequest(object sender, EventArgs e)
        {

        }

        private void itemB_Click(object sender, EventArgs e)
        {
            //check if an item has been modified when applying, check if items has already been generated and recheck every setting every time
            itemBrowser.InitialDirectory = System.Reflection.Assembly.GetEntryAssembly().Location.Substring(0, System.Reflection.Assembly.GetEntryAssembly().Location.Length - 20) + "\\Items";
            itemBrowser.ShowDialog();
            itemB.Text = itemBrowser.FileName; //make sure this is always one file
        }

        private void itemBrowser_FileOk(object sender, System.ComponentModel.CancelEventArgs e)
        {

        }
    }
}