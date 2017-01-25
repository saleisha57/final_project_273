import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.*;


public class MainWindow extends JComponent implements ActionListener {
	private JButton btnYarn;
	private JButton btnPatterns;
	private JButton btnNeedles;
	private ItemStorage is;
	MainWindow(ItemStorage IS){
	is = IS;
		try{
	JFrame mainWindow = new JFrame("Knitting App");
	
	mainWindow.getContentPane().setLayout(new BorderLayout());
	mainWindow.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	
	JPanel panel = new JPanel();
	mainWindow.getContentPane().add(panel, BorderLayout.WEST);
	GridBagLayout gbl_panel = new GridBagLayout();
	gbl_panel.columnWidths = new int[]{55, 0};
	gbl_panel.rowHeights = new int[]{23, 0, 0, 0, 0, 0, 0, 0, 0};
	gbl_panel.columnWeights = new double[]{0.0, Double.MIN_VALUE};
	gbl_panel.rowWeights = new double[]{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
	panel.setLayout(gbl_panel);
	
	btnYarn = new JButton("Yarn");
	GridBagConstraints gbc_btnYarn = new GridBagConstraints();
	gbc_btnYarn.insets = new Insets(0, 0, 5, 0);
	gbc_btnYarn.gridx = 0;
	gbc_btnYarn.gridy = 1;
	panel.add(btnYarn, gbc_btnYarn);
	btnYarn.addActionListener(this);
	
	btnPatterns = new JButton("Patterns");
	GridBagConstraints gbc_btnPatterns = new GridBagConstraints();
	gbc_btnPatterns.insets = new Insets(0, 0, 5, 0);
	gbc_btnPatterns.gridx = 0;
	gbc_btnPatterns.gridy = 3;
	panel.add(btnPatterns, gbc_btnPatterns);
	btnPatterns.addActionListener(this);
	
	btnNeedles = new JButton("Needles");
	GridBagConstraints gbc_btnNeedles = new GridBagConstraints();
	gbc_btnNeedles.insets = new Insets(0, 0, 5, 0);
	gbc_btnNeedles.gridx = 0;
	gbc_btnNeedles.gridy = 5;
	panel.add(btnNeedles, gbc_btnNeedles);
	btnNeedles.addActionListener(this);
	
	JButton btnNotions = new JButton("Notions");
	GridBagConstraints gbc_btnNotions = new GridBagConstraints();
	gbc_btnNotions.gridx = 0;
	gbc_btnNotions.gridy = 7;
	panel.add(btnNotions, gbc_btnNotions);
		
	mainWindow.setSize(300, 300);
	mainWindow.setVisible(true);
		}
	catch(Exception ex){
		System.out.printf("The computer is mad at you and your images.\n\t %s\n", ex.getMessage());
		}
	}

	
	

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource() == btnYarn){
			YarnWindow yw = new YarnWindow(is);
			System.out.printf("Yarn was pressed.\n");
			yw.setVisible(true);
						
			}
		if(e.getSource() == btnPatterns){
			System.out.printf("Patterns was pressed.\n");
			PatternWindow pw = new PatternWindow(is);
			

		}
		if(e.getSource() == btnNeedles){
			System.out.printf("Needles was pressed.\n");
			NeedleWindow nw = new NeedleWindow(is);
			
			
			
		}
		
	}
		
}
