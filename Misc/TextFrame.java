import java.awt.*;
import java.awt.event.*;

class TextFrame extends Frame implements ActionListener
{
    TextField txtName;
    TextField txtRollNo;
    TextArea areaDisplay;
    Label lblName, lblRollNo,lblDisplay;
    Button btnSubmit;
    public TextFrame()
    {
        txtName = new TextField(20);
        txtRollNo = new TextField(6);
        lblRollNo = new Label("enter your roll no. here");
        areaDisplay = new TextArea(5,25);
        lblName = new Label("enter your name here");
        btnSubmit = new Button ("submit");
        lblDisplay = new Label("you have entered the following details");
        setLayout(new FlowLayout());
        add(lblName);
        add(txtName);
        add(lblRollNo);
        add(txtRollNo);
        add(btnSubmit);
        add(lblDisplay);
        add(areaDisplay);
        btnSubmit.addActionListener(this);
        addWindowListener(new MyWindowAdapter(this));
    }

    public void actionPerformed(ActionEvent e)
    {
        areaDisplay.setText("Name: "+ txtName.getText()+ "\nRoll Number: "+ txtRollNo.getText());
    }
    public static void main(String args[])
    {
        TextFrame frame = new TextFrame();
        frame.setSize(400,400);
        frame.setVisible(true);
    }
}

class MyWindowAdapter extends WindowAdapter
{
    TextFrame frame;
    MyWindowAdapter(TextFrame frame)
    {
        this.frame = frame;
    }
    public void windowClosing(WindowEvent evt)
    {
        frame.dispose();
        System.exit(0);
    }
}