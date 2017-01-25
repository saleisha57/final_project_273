import javax.swing.*;
import java.awt.BorderLayout;
import java.awt.GridBagLayout;
import java.awt.GridBagConstraints;
import java.awt.Insets;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class NeedleWindow implements ActionListener {
	private JTextField lengthTextField;
	private JTextField SizeTextField;
	private JTextField BrandTextField;
	private JTextField MaterialTextField;
	
	
	private JButton btnAddNeedles;
	private myJButton btnNeedle;
	private JRadioButton rdbtnCircular;
	private JCheckBox chckbxFavorite;
	private JRadioButton rdbtnStraight;
	private JCheckBox chckbxInUse;
	private JRadioButton rdbtnDoublePointed;
	private JCheckBox chckbxInterchangable;
	private ArrayList<myJButton> needleList = new ArrayList<myJButton>();
	
	NeedleWindow(ItemStorage IS){
		ButtonGroup typeGroup = new ButtonGroup();
	
	this.populateButton(IS.getAllNeedles());	
		
	JFrame needleFrame = new JFrame("Needle Stash");
	needleFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	needleFrame.setSize(500,  300);
	needleFrame.setVisible(true);
	
	JPanel panel = new JPanel();
	needleFrame.getContentPane().add(panel, BorderLayout.NORTH);
	
	btnAddNeedles = new JButton("Add Needles");
	panel.add(btnAddNeedles);
	btnAddNeedles.addActionListener(this);
	
	JPanel panel_1 = new JPanel();
	needleFrame.getContentPane().add(panel_1, BorderLayout.WEST);
	GridBagLayout gbl_panel_1 = new GridBagLayout();
	gbl_panel_1.columnWidths = new int[]{82, 2, 0};
	gbl_panel_1.rowHeights = new int[]{14, 0, 0, 0, 0};
	gbl_panel_1.columnWeights = new double[]{1.0, 0.0, Double.MIN_VALUE};
	gbl_panel_1.rowWeights = new double[]{0.0, 0.0, 0.0, 1.0, Double.MIN_VALUE};
	panel_1.setLayout(gbl_panel_1);
	
	JLabel lblNeedleCollection = new JLabel("Needle Collection");
	GridBagConstraints gbc_lblNeedleCollection = new GridBagConstraints();
	gbc_lblNeedleCollection.anchor = GridBagConstraints.NORTHWEST;
	gbc_lblNeedleCollection.insets = new Insets(0, 0, 5, 5);
	gbc_lblNeedleCollection.gridx = 0;
	gbc_lblNeedleCollection.gridy = 0;
	panel_1.add(lblNeedleCollection, gbc_lblNeedleCollection);
	
	JScrollPane scrollPane = new JScrollPane();
	GridBagConstraints gbc_scrollPane = new GridBagConstraints();
	gbc_scrollPane.insets = new Insets(0, 0, 5, 0);
	gbc_scrollPane.anchor = GridBagConstraints.WEST;
	gbc_scrollPane.gridx = 1;
	gbc_scrollPane.gridy = 0;
	panel_1.add(scrollPane, gbc_scrollPane);
	
	JScrollPane scrollPane_1 = new JScrollPane();
	GridBagConstraints gbc_scrollPane_1 = new GridBagConstraints();
	gbc_scrollPane_1.gridheight = 3;
	gbc_scrollPane_1.insets = new Insets(0, 0, 0, 5);
	gbc_scrollPane_1.fill = GridBagConstraints.BOTH;
	gbc_scrollPane_1.gridx = 0;
	gbc_scrollPane_1.gridy = 1;
	panel_1.add(scrollPane_1, gbc_scrollPane_1);
	
	JScrollBar scrollBar = new JScrollBar();
	scrollPane_1.setRowHeaderView(scrollBar);
	
	JPanel panel_2 = new JPanel();
	scrollPane_1.setViewportView(panel_2);
	GridBagLayout gbl_panel_2 = new GridBagLayout();
	gbl_panel_2.columnWidths = new int[]{0, 0};
	gbl_panel_2.rowHeights = new int[]{0, 0};
	gbl_panel_2.columnWeights = new double[]{0.0, Double.MIN_VALUE};
	gbl_panel_2.rowWeights = new double[]{0.0, Double.MIN_VALUE};
	panel_2.setLayout(gbl_panel_2);
	
	btnNeedle = new myJButton("Needle 1", IS.getAllNeedles().get(0));
	GridBagConstraints gbc_btnNeedle = new GridBagConstraints();
	gbc_btnNeedle.gridx = 0;
	gbc_btnNeedle.gridy = 0;
	panel_2.add(btnNeedle, gbc_btnNeedle);
	btnNeedle.addActionListener(this);
	
	for(int i = 0; i < needleList.size(); i++){
		GridBagConstraints gbc_newNeedle = new GridBagConstraints();
		gbc_newNeedle.gridx = 0;
		gbc_newNeedle.gridy = i;
		panel_2.add(needleList.get(i));//, gbc_newNeedle);
		
	}
	
	JPanel panel_3 = new JPanel();
	needleFrame.getContentPane().add(panel_3, BorderLayout.CENTER);
	GridBagLayout gbl_panel_3 = new GridBagLayout();
	gbl_panel_3.columnWidths = new int[]{0, 0, 0, 0, 0, 0, 0, 0, 0};
	gbl_panel_3.rowHeights = new int[]{0, 0, 0, 0, 0, 0};
	gbl_panel_3.columnWeights = new double[]{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
	gbl_panel_3.rowWeights = new double[]{0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
	panel_3.setLayout(gbl_panel_3);
	
	JLabel lblLength = new JLabel("Length");
	GridBagConstraints gbc_lblLength = new GridBagConstraints();
	gbc_lblLength.anchor = GridBagConstraints.EAST;
	gbc_lblLength.insets = new Insets(0, 0, 5, 5);
	gbc_lblLength.gridx = 1;
	gbc_lblLength.gridy = 1;
	panel_3.add(lblLength, gbc_lblLength);
	
	lengthTextField = new JTextField();
	GridBagConstraints gbc_lengthTextField = new GridBagConstraints();
	gbc_lengthTextField.insets = new Insets(0, 0, 5, 5);
	gbc_lengthTextField.fill = GridBagConstraints.HORIZONTAL;
	gbc_lengthTextField.gridx = 2;
	gbc_lengthTextField.gridy = 1;
	panel_3.add(lengthTextField, gbc_lengthTextField);
	lengthTextField.setColumns(10);
	lengthTextField.addActionListener(this);
	
	rdbtnCircular = new JRadioButton("Circular");
	GridBagConstraints gbc_rdbtnCircular = new GridBagConstraints();
	gbc_rdbtnCircular.insets = new Insets(0, 0, 5, 5);
	gbc_rdbtnCircular.gridx = 5;
	gbc_rdbtnCircular.gridy = 1;
	panel_3.add(rdbtnCircular, gbc_rdbtnCircular);
	rdbtnCircular.addActionListener(this);
	
	chckbxFavorite = new JCheckBox("Favorite");
	GridBagConstraints gbc_chckbxFavorite = new GridBagConstraints();
	gbc_chckbxFavorite.insets = new Insets(0, 0, 5, 0);
	gbc_chckbxFavorite.gridx = 7;
	gbc_chckbxFavorite.gridy = 1;
	panel_3.add(chckbxFavorite, gbc_chckbxFavorite);
	chckbxFavorite.addActionListener(this);
	
	JLabel lblSize = new JLabel("Size");
	GridBagConstraints gbc_lblSize = new GridBagConstraints();
	gbc_lblSize.anchor = GridBagConstraints.EAST;
	gbc_lblSize.insets = new Insets(0, 0, 5, 5);
	gbc_lblSize.gridx = 1;
	gbc_lblSize.gridy = 2;
	panel_3.add(lblSize, gbc_lblSize);
	
	SizeTextField = new JTextField();
	GridBagConstraints gbc_SizeTextField = new GridBagConstraints();
	gbc_SizeTextField.insets = new Insets(0, 0, 5, 5);
	gbc_SizeTextField.fill = GridBagConstraints.HORIZONTAL;
	gbc_SizeTextField.gridx = 2;
	gbc_SizeTextField.gridy = 2;
	panel_3.add(SizeTextField, gbc_SizeTextField);
	SizeTextField.setColumns(10);
	SizeTextField.addActionListener(this);
	
	rdbtnStraight = new JRadioButton("Straight");
	GridBagConstraints gbc_rdbtnStraight = new GridBagConstraints();
	gbc_rdbtnStraight.insets = new Insets(0, 0, 5, 5);
	gbc_rdbtnStraight.gridx = 5;
	gbc_rdbtnStraight.gridy = 2;
	panel_3.add(rdbtnStraight, gbc_rdbtnStraight);
	rdbtnStraight.addActionListener(this);
	
	chckbxInUse = new JCheckBox("In Use");
	GridBagConstraints gbc_chckbxInUse = new GridBagConstraints();
	gbc_chckbxInUse.insets = new Insets(0, 0, 5, 0);
	gbc_chckbxInUse.gridx = 7;
	gbc_chckbxInUse.gridy = 2;
	panel_3.add(chckbxInUse, gbc_chckbxInUse);
	chckbxInUse.addActionListener(this);
	
	JLabel lblBrand = new JLabel("Brand");
	GridBagConstraints gbc_lblBrand = new GridBagConstraints();
	gbc_lblBrand.anchor = GridBagConstraints.EAST;
	gbc_lblBrand.insets = new Insets(0, 0, 5, 5);
	gbc_lblBrand.gridx = 1;
	gbc_lblBrand.gridy = 3;
	panel_3.add(lblBrand, gbc_lblBrand);
	
	BrandTextField = new JTextField();
	GridBagConstraints gbc_BrandTextField = new GridBagConstraints();
	gbc_BrandTextField.insets = new Insets(0, 0, 5, 5);
	gbc_BrandTextField.fill = GridBagConstraints.HORIZONTAL;
	gbc_BrandTextField.gridx = 2;
	gbc_BrandTextField.gridy = 3;
	panel_3.add(BrandTextField, gbc_BrandTextField);
	BrandTextField.setColumns(10);
	
	rdbtnDoublePointed = new JRadioButton("Double Pointed");
	GridBagConstraints gbc_rdbtnDoublePointed = new GridBagConstraints();
	gbc_rdbtnDoublePointed.insets = new Insets(0, 0, 5, 5);
	gbc_rdbtnDoublePointed.gridx = 5;
	gbc_rdbtnDoublePointed.gridy = 3;
	panel_3.add(rdbtnDoublePointed, gbc_rdbtnDoublePointed);
	rdbtnDoublePointed.addActionListener(this);
	
	JLabel lblMaterial = new JLabel("Material");
	GridBagConstraints gbc_lblMaterial = new GridBagConstraints();
	gbc_lblMaterial.anchor = GridBagConstraints.EAST;
	gbc_lblMaterial.insets = new Insets(0, 0, 0, 5);
	gbc_lblMaterial.gridx = 1;
	gbc_lblMaterial.gridy = 4;
	panel_3.add(lblMaterial, gbc_lblMaterial);
	
	MaterialTextField = new JTextField();
	GridBagConstraints gbc_MaterialTextField = new GridBagConstraints();
	gbc_MaterialTextField.insets = new Insets(0, 0, 0, 5);
	gbc_MaterialTextField.fill = GridBagConstraints.HORIZONTAL;
	gbc_MaterialTextField.gridx = 2;
	gbc_MaterialTextField.gridy = 4;
	panel_3.add(MaterialTextField, gbc_MaterialTextField);
	MaterialTextField.setColumns(10);
	
	chckbxInterchangable = new JCheckBox("Interchangable");
	GridBagConstraints gbc_chckbxInterchangable = new GridBagConstraints();
	gbc_chckbxInterchangable.insets = new Insets(0, 0, 0, 5);
	gbc_chckbxInterchangable.gridx = 5;
	gbc_chckbxInterchangable.gridy = 4;
	panel_3.add(chckbxInterchangable, gbc_chckbxInterchangable);
	
	typeGroup.add(rdbtnStraight);
	typeGroup.add(rdbtnCircular);
	typeGroup.add(rdbtnDoublePointed);
	}

	public void populateButton(ArrayList<Needles> an){
		for(int i = 0; i < an.size(); i++){
			myJButton jb = new myJButton(an.get(i).getName(), an.get(i));
			jb.addActionListener(this);
			jb.addChkBx(chckbxFavorite);
			jb.addChkBx(chckbxInUse);
			jb.addChkBx(chckbxInterchangable);
			jb.addRdioBx(rdbtnCircular);
			jb.addRdioBx(rdbtnDoublePointed);
			jb.addRdioBx(rdbtnStraight);
			needleList.add(jb);
		}
	}
	
	public void refreshButtonList(ArrayList<Needles> an){
		for(int i = 0; i < an.size(); i++){
			if(an.get(i).getButtonified() != true)
			{
				myJButton jb = new myJButton(an.get(i).getName(), an.get(i));
				jb.addActionListener(this);
				jb.addChkBx(chckbxFavorite);
				jb.addChkBx(chckbxInUse);
				jb.addChkBx(chckbxInterchangable);
				jb.addRdioBx(rdbtnCircular);
				jb.addRdioBx(rdbtnDoublePointed);
				jb.addRdioBx(rdbtnStraight);
				needleList.add(jb);
				an.get(i).setButtonified(true);
			}
		}
	}
	/*JButton btnAddNeedles;
	myJButton btnNeedle;
	JRadioButton rdbtnCircular;
	JCheckBox chckbxFavorite;
	JRadioButton rdbtnStraight;
	JCheckBox chckbxInUse;
	JRadioButton rdbtnDoublePointed;
	JCheckBox chckbxInterchangable;*/
	
	
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource() == rdbtnCircular){
			btnNeedle.getNeedleS().setCircular(true);
			btnNeedle.getNeedleS().setStraight(false);
			btnNeedle.getNeedleS().setDoublePointed(false);
		}
		if(e.getSource() == rdbtnStraight){
			btnNeedle.getNeedleS().setCircular(false);
			btnNeedle.getNeedleS().setStraight(true);
			btnNeedle.getNeedleS().setDoublePointed(false);
			
		}
		if(e.getSource() == rdbtnDoublePointed){
			btnNeedle.getNeedleS().setCircular(false);
			btnNeedle.getNeedleS().setStraight(false);
			btnNeedle.getNeedleS().setDoublePointed(true);
			
		}
		if(e.getSource() == chckbxInUse){
			if(chckbxInUse.isSelected() == false )
				btnNeedle.getNeedleS().setInUse(true);
			else
				btnNeedle.getNeedleS().setInUse(false);
			
			/*private JTextField lengthTextField;
	private JTextField SizeTextField;
	private JTextField BrandTextField;
	private JTextField MaterialTextField;*/
		}
		if(e.getSource() == chckbxFavorite){
			myJButton tempNeedle = new myJButton();
			tempNeedle =(myJButton)e.getSource();
			if(chckbxFavorite.isSelected() == false )
				tempNeedle.getNeedleS().setFavorite(true);
			else
				tempNeedle.getNeedleS().setFavorite(false);
		}
		if(e.getSource() instanceof myJButton){
			myJButton mb= (myJButton)e.getSource();
			SizeTextField.setActionCommand(Integer.toString(mb.getNeedleS().getSize()));
			
		}
		if(e.getSource() == btnAddNeedles){
			
			
		}
		if(e.getSource() == chckbxInterchangable){
			myJButton tempNeedle = new myJButton();
			tempNeedle =(myJButton)e.getSource();
			if(chckbxInterchangable.isSelected() == false )
				tempNeedle.getNeedleS().setInterchangable(true);
			else
				tempNeedle.getNeedleS().setInterchangable(false);
		}
	}
}
