import javax.swing.*;
import java.awt.BorderLayout;
import java.awt.GridBagLayout;
import java.awt.GridBagConstraints;
import java.awt.Insets;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Scanner;

public class YarnWindow extends JComponent implements ActionListener{
	
	private myJButton btnYarn;
	private JButton btnAddYarn;
	private JCheckBox chckbxFavorite;
	private JCheckBox chckbxCurrentlyInUse; 
	private JTextField txtFiber;
	private JTextField txtColor;
	private JTextField txtWeight;
	private JTextField txtBrand;
	private JTextField txtYards;
	private JTextField txtNumber;
	static ItemStorage is;
	static int count = 1;
	ArrayList<myJButton> yarnList = new ArrayList<myJButton>();
	YarnWindow(ItemStorage IS){
		is = IS;
		
		this.populateButton(IS.getAllYarn());
		Yarn default2Yarn = new Yarn("Blue", "Acrylic", 4, "Default2");
		
		JFrame yarnFrame = new JFrame("Yarn Window");
		yarnFrame.getContentPane().setLayout(new BorderLayout(0, 0));
		yarnFrame.setSize(553,  290);
		yarnFrame.setVisible(true);
		yarnFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		
		JPanel panel = new JPanel();
		yarnFrame.getContentPane().add(panel, BorderLayout.NORTH);
		
		btnAddYarn = new JButton("Add Yarn ");
		panel.add(btnAddYarn);
		btnAddYarn.addActionListener(this);
		
		JPanel panel_1 = new JPanel();
		yarnFrame.getContentPane().add(panel_1, BorderLayout.WEST);
		GridBagLayout gbl_panel_1 = new GridBagLayout();
		gbl_panel_1.columnWidths = new int[]{63, 2, 17, 0};
		gbl_panel_1.rowHeights = new int[]{48, 0, 0, 0, 0, 0, 0};
		gbl_panel_1.columnWeights = new double[]{0.0, 0.0, 0.0, Double.MIN_VALUE};
		gbl_panel_1.rowWeights = new double[]{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
		panel_1.setLayout(gbl_panel_1);
			
		JScrollPane scrollPane = new JScrollPane();
		GridBagConstraints gbc_scrollPane = new GridBagConstraints();
		gbc_scrollPane.anchor = GridBagConstraints.WEST;
		gbc_scrollPane.insets = new Insets(0, 0, 5, 5);
		gbc_scrollPane.gridx = 1;
		gbc_scrollPane.gridy = 0;
		panel_1.add(scrollPane, gbc_scrollPane);
		
		JScrollBar scrollBar = new JScrollBar();
		GridBagConstraints gbc_scrollBar = new GridBagConstraints();
		gbc_scrollBar.gridheight = 6;
		gbc_scrollBar.anchor = GridBagConstraints.NORTHWEST;
		gbc_scrollBar.gridx = 2;
		gbc_scrollBar.gridy = 0;
		panel_1.add(scrollBar, gbc_scrollBar);
		
		JPanel panel_2 = new JPanel();
		yarnFrame.getContentPane().add(panel_2, BorderLayout.CENTER);
		GridBagLayout gbl_panel_2 = new GridBagLayout();
		gbl_panel_2.columnWidths = new int[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		gbl_panel_2.rowHeights = new int[]{0, 0, 0, 0, 0, 0, 0, 0};
		gbl_panel_2.columnWeights = new double[]{0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
		gbl_panel_2.rowWeights = new double[]{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
		panel_2.setLayout(gbl_panel_2);
		
		JLabel lblFiber = new JLabel("Fiber");
		GridBagConstraints gbc_lblFiber = new GridBagConstraints();
		gbc_lblFiber.anchor = GridBagConstraints.EAST;
		gbc_lblFiber.insets = new Insets(0, 0, 5, 5);
		gbc_lblFiber.gridx = 1;
		gbc_lblFiber.gridy = 1;
		panel_2.add(lblFiber, gbc_lblFiber);
		
		txtFiber = new JTextField();
		txtFiber.setText("Fiber");
		GridBagConstraints gbc_txtFiber_1 = new GridBagConstraints();
		gbc_txtFiber_1.gridwidth = 2;
		gbc_txtFiber_1.insets = new Insets(0, 0, 5, 5);
		gbc_txtFiber_1.fill = GridBagConstraints.HORIZONTAL;
		gbc_txtFiber_1.gridx = 2;
		gbc_txtFiber_1.gridy = 1;
		panel_2.add(txtFiber, gbc_txtFiber_1);
		txtFiber.setColumns(10);
		txtFiber.addActionListener(this);
		
		chckbxFavorite = new JCheckBox("Favorite");
		GridBagConstraints gbc_chckbxFavorite = new GridBagConstraints();
		gbc_chckbxFavorite.insets = new Insets(0, 0, 5, 5);
		gbc_chckbxFavorite.gridx = 7;
		gbc_chckbxFavorite.gridy = 1;
		panel_2.add(chckbxFavorite, gbc_chckbxFavorite);
		chckbxFavorite.addActionListener(this);
		
		JLabel lblColor = new JLabel("Color");
		GridBagConstraints gbc_lblColor = new GridBagConstraints();
		gbc_lblColor.insets = new Insets(0, 0, 5, 5);
		gbc_lblColor.gridx = 1;
		gbc_lblColor.gridy = 2;
		panel_2.add(lblColor, gbc_lblColor);
		
		txtColor = new JTextField();
		txtColor.setText("Color");
		GridBagConstraints gbc_txtColor = new GridBagConstraints();
		gbc_txtColor.gridwidth = 2;
		gbc_txtColor.insets = new Insets(0, 0, 5, 5);
		gbc_txtColor.fill = GridBagConstraints.HORIZONTAL;
		gbc_txtColor.gridx = 2;
		gbc_txtColor.gridy = 2;
		panel_2.add(txtColor, gbc_txtColor);
		txtColor.setColumns(10);
		txtColor.addActionListener(this);
		
		chckbxCurrentlyInUse = new JCheckBox("Currently In Use");
		GridBagConstraints gbc_chckbxCurrentlyInUse = new GridBagConstraints();
		gbc_chckbxCurrentlyInUse.insets = new Insets(0, 0, 5, 5);
		gbc_chckbxCurrentlyInUse.gridx = 7;
		gbc_chckbxCurrentlyInUse.gridy = 2;
		panel_2.add(chckbxCurrentlyInUse, gbc_chckbxCurrentlyInUse);
		chckbxCurrentlyInUse.addActionListener(this);
		chckbxCurrentlyInUse.setSelected(true);
		
		JLabel lblWeight = new JLabel("Weight");
		GridBagConstraints gbc_lblWeight = new GridBagConstraints();
		gbc_lblWeight.insets = new Insets(0, 0, 5, 5);
		gbc_lblWeight.gridx = 1;
		gbc_lblWeight.gridy = 3;
		panel_2.add(lblWeight, gbc_lblWeight);
		
		txtWeight = new JTextField();
		txtWeight.setText("Weight");
		GridBagConstraints gbc_txtWeight = new GridBagConstraints();
		gbc_txtWeight.gridwidth = 2;
		gbc_txtWeight.insets = new Insets(0, 0, 5, 5);
		gbc_txtWeight.fill = GridBagConstraints.HORIZONTAL;
		gbc_txtWeight.gridx = 2;
		gbc_txtWeight.gridy = 3;
		panel_2.add(txtWeight, gbc_txtWeight);
		txtWeight.setColumns(10);
		txtWeight.addActionListener(this);
		
		JLabel lblBrand = new JLabel("Brand");
		GridBagConstraints gbc_lblBrand = new GridBagConstraints();
		gbc_lblBrand.insets = new Insets(0, 0, 5, 5);
		gbc_lblBrand.gridx = 1;
		gbc_lblBrand.gridy = 4;
		panel_2.add(lblBrand, gbc_lblBrand);
		
		txtBrand = new JTextField();
		txtBrand.setText("Brand");
		GridBagConstraints gbc_txtBrand = new GridBagConstraints();
		gbc_txtBrand.gridwidth = 2;
		gbc_txtBrand.insets = new Insets(0, 0, 5, 5);
		gbc_txtBrand.fill = GridBagConstraints.HORIZONTAL;
		gbc_txtBrand.gridx = 2;
		gbc_txtBrand.gridy = 4;
		panel_2.add(txtBrand, gbc_txtBrand);
		txtBrand.setColumns(10);
		txtBrand.addActionListener(this);
		
		JLabel lblYards = new JLabel("Yards");
		GridBagConstraints gbc_lblYards = new GridBagConstraints();
		gbc_lblYards.insets = new Insets(0, 0, 5, 5);
		gbc_lblYards.gridx = 1;
		gbc_lblYards.gridy = 5;
		panel_2.add(lblYards, gbc_lblYards);
		
		txtYards = new JTextField();
		txtYards.setText("Yards");
		GridBagConstraints gbc_txtYards = new GridBagConstraints();
		gbc_txtYards.gridwidth = 2;
		gbc_txtYards.insets = new Insets(0, 0, 5, 5);
		gbc_txtYards.fill = GridBagConstraints.HORIZONTAL;
		gbc_txtYards.gridx = 2;
		gbc_txtYards.gridy = 5;
		panel_2.add(txtYards, gbc_txtYards);
		txtYards.setColumns(10);
		txtYards.addActionListener(this);
		
		JLabel lblNumberOfSkeins = new JLabel("Number of Skeins");
		GridBagConstraints gbc_lblNumberOfSkeins = new GridBagConstraints();
		gbc_lblNumberOfSkeins.insets = new Insets(0, 0, 0, 5);
		gbc_lblNumberOfSkeins.gridx = 1;
		gbc_lblNumberOfSkeins.gridy = 6;
		panel_2.add(lblNumberOfSkeins, gbc_lblNumberOfSkeins);
		
		txtNumber = new JTextField();
		txtNumber.setText("Number");
		GridBagConstraints gbc_txtNumber = new GridBagConstraints();
		gbc_txtNumber.gridwidth = 2;
		gbc_txtNumber.insets = new Insets(0, 0, 0, 5);
		gbc_txtNumber.fill = GridBagConstraints.HORIZONTAL;
		gbc_txtNumber.gridx = 2;
		gbc_txtNumber.gridy = 6;
		panel_2.add(txtNumber, gbc_txtNumber);
		txtNumber.setColumns(10);
		txtNumber.addActionListener(this);
		
		btnYarn = new myJButton("Yarn Example", default2Yarn);
		GridBagConstraints gbc_btnYarn = new GridBagConstraints();
		gbc_btnYarn.anchor = GridBagConstraints.WEST;
		gbc_btnYarn.insets = new Insets(0, 0, 5, 5);
		gbc_btnYarn.gridx = 0;
		gbc_btnYarn.gridy = 0;
		panel_1.add(btnYarn, gbc_btnYarn);
		btnYarn.addActionListener(this);
		btnYarn.addChkBx(chckbxFavorite);
		btnYarn.addChkBx(chckbxCurrentlyInUse);
		
		for(int i = 0; i < yarnList.size(); i++){
			panel_1.add(yarnList.get(i));
			
		}
	}

	
	/*myJButton btnYarn;
	JButton btnAddYarn;
	JCheckBox chckbxFavorite;
	JCheckBox chckbxCurrentlyInUse; 
	private JTextField txtFiber;
	private JTextField txtColor;
	private JTextField txtWeight;
	private JTextField txtBrand;
	private JTextField txtYards;
	private JTextField txtNumber;*/
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource() == btnYarn){
			btnYarn.getYarn().getName();
			txtFiber.setText(btnYarn.getYarn().getFiber());
			txtColor.setText(btnYarn.getYarn().getColor());
			txtWeight.setText(Integer.toString(btnYarn.getYarn().getWeight()));
			txtBrand.setText(btnYarn.getYarn().getBrand());
			txtYards.setText(Integer.toString(btnYarn.getYarn().getYardage()));
			txtNumber.setText(Integer.toString(btnYarn.getYarn().getYardage()));
		}
		if(e.getSource() == chckbxFavorite){
			if(chckbxFavorite.isSelected() == false )
				btnYarn.getYarn().setFavorite(true);
			else
				btnYarn.getYarn().setFavorite(false);
		}
		if(e.getSource() == chckbxCurrentlyInUse){
			if(chckbxCurrentlyInUse.isSelected() == false )
				btnYarn.getYarn().setInUse(true);
			else
				btnYarn.getYarn().setInUse(false);
		}
		if(e.getSource() == txtColor){
			btnYarn.getYarn().setColor(txtColor.getText());
		}
		if(e.getSource() == txtWeight){
			btnYarn.getYarn().setWeight(Integer.parseInt((txtWeight.getText())));
		}
		if(e.getSource() == txtBrand){
			btnYarn.getYarn().setBrand(txtBrand.getText());
		}
		if(e.getSource() == txtYards){
			btnYarn.getYarn().setWeight(Integer.parseInt((txtYards.getText())));
		}
		if(e.getSource() == txtNumber){
			btnYarn.getYarn().setWeight(Integer.parseInt((txtNumber.getText())));
		}

		if(e.getSource() == yarnList.get(0)){
			yarnList.get(0).getYarn().getName();
			txtFiber.setText(yarnList.get(0).getYarn().getFiber());
			txtColor.setText(yarnList.get(0).getYarn().getColor());
			txtWeight.setText(Integer.toString(btnYarn.getYarn().getWeight()));
			txtBrand.setText(yarnList.get(0).getYarn().getBrand());
			txtYards.setText(Integer.toString(yarnList.get(0).getYarn().getYardage()));
			txtNumber.setText(Integer.toString(yarnList.get(0).getYarn().getYardage()));
		}
		if(e.getSource() == yarnList.get(1)){
			yarnList.get(1).getYarn().getName();
			txtFiber.setText(yarnList.get(1).getYarn().getFiber());
			txtColor.setText(yarnList.get(1).getYarn().getColor());
			txtWeight.setText(Integer.toString(btnYarn.getYarn().getWeight()));
			txtBrand.setText(yarnList.get(1).getYarn().getBrand());
			txtYards.setText(Integer.toString(yarnList.get(1).getYarn().getYardage()));
			txtNumber.setText(Integer.toString(yarnList.get(1).getYarn().getYardage()));
		}
		if(e.getSource() == btnAddYarn){
			Scanner scanner = new Scanner(System.in);
			System.out.printf("Please enter the color of your yarn.\n");
			String C = scanner.nextLine();
			System.out.printf("Please enter the fiber of your yarn.\n");
			String F = scanner.nextLine();
			System.out.printf("Please enter the weight of your yarn as an integer.\n");
			int W = scanner.nextInt();
			System.out.printf("Please enter the name of your yarn.\n");
			String N = scanner.nextLine();
			
			Yarn y = new Yarn(C, F, W, N);
			is.getAllYarn().add(y);
			
			myJButton newButton = new myJButton(y.getName(), y);
			
			refreshButtonList(is.getAllYarn());
		}
	}
	
	public void populateButton(ArrayList<Yarn> an){
		for(int i = 0; i < an.size(); i++){
			myJButton jb = new myJButton(an.get(i).getName(), an.get(i));
			jb.addActionListener(this);
			jb.addChkBx(chckbxFavorite);
			jb.addChkBx(chckbxCurrentlyInUse);
			yarnList.add(jb);
		}
	}
	
	public void refreshButtonList(ArrayList<Yarn> an){
		for(int i = 0; i < an.size(); i++){
			if(an.get(i).getButtonified() != true)
			{
				myJButton jb = new myJButton(an.get(i).getName(), an.get(i));
				jb.addActionListener(this);
				jb.addChkBx(chckbxFavorite);
				jb.addChkBx(chckbxCurrentlyInUse);
				an.get(i).setButtonified(true);
				jb.setVisible(true);
				yarnList.add(jb);
				
			}
		}
	}
	
}
