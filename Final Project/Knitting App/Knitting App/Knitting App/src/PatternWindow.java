import javax.swing.*;
import java.awt.BorderLayout;
import java.awt.GridBagConstraints;
import java.awt.Insets;
import java.awt.GridBagLayout;

public class PatternWindow {
	public PatternWindow(ItemStorage IS) {
		patternFrame.getContentPane().setLayout(new BorderLayout(0, 0));
		patternFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		patternFrame.setSize(500,  300);
		patternFrame.setVisible(true);
		
		JPanel panel = new JPanel();
		patternFrame.getContentPane().add(panel, BorderLayout.NORTH);
		
		JButton btnAddPattern = new JButton("Add Pattern");
		panel.add(btnAddPattern);
		
		JButton btnViewPattern = new JButton("View Pattern");
		panel.add(btnViewPattern);
		
		JPanel panel_1 = new JPanel();
		patternFrame.getContentPane().add(panel_1, BorderLayout.WEST);
		GridBagLayout gbl_panel_1 = new GridBagLayout();
		gbl_panel_1.columnWidths = new int[]{77, 17, 2, 0};
		gbl_panel_1.rowHeights = new int[]{104, 0, 48, 0};
		gbl_panel_1.columnWeights = new double[]{0.0, 0.0, 0.0, Double.MIN_VALUE};
		gbl_panel_1.rowWeights = new double[]{0.0, 0.0, 0.0, Double.MIN_VALUE};
		panel_1.setLayout(gbl_panel_1);
		
		JButton btnPattern = new JButton("Pattern 1");
		GridBagConstraints gbc_btnPattern = new GridBagConstraints();
		gbc_btnPattern.insets = new Insets(0, 0, 5, 5);
		gbc_btnPattern.gridx = 0;
		gbc_btnPattern.gridy = 1;
		panel_1.add(btnPattern, gbc_btnPattern);
		
		JScrollBar scrollBar = new JScrollBar();
		GridBagConstraints gbc_scrollBar = new GridBagConstraints();
		gbc_scrollBar.gridheight = 3;
		gbc_scrollBar.insets = new Insets(0, 0, 0, 5);
		gbc_scrollBar.gridx = 1;
		gbc_scrollBar.gridy = 0;
		panel_1.add(scrollBar, gbc_scrollBar);
		
		JScrollPane scrollPane = new JScrollPane();
		GridBagConstraints gbc_scrollPane = new GridBagConstraints();
		gbc_scrollPane.gridx = 2;
		gbc_scrollPane.gridy = 2;
		panel_1.add(scrollPane, gbc_scrollPane);
		
		JPanel panel_2 = new JPanel();
		patternFrame.getContentPane().add(panel_2, BorderLayout.CENTER);
		GridBagLayout gbl_panel_2 = new GridBagLayout();
		gbl_panel_2.columnWidths = new int[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		gbl_panel_2.rowHeights = new int[]{0, 0, 0, 0, 0, 0};
		gbl_panel_2.columnWeights = new double[]{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Double.MIN_VALUE};
		gbl_panel_2.rowWeights = new double[]{0.0, 0.0, 1.0, 1.0, 0.0, Double.MIN_VALUE};
		panel_2.setLayout(gbl_panel_2);
		
		JLabel lblEndProduct = new JLabel("End Product");
		GridBagConstraints gbc_lblEndProduct = new GridBagConstraints();
		gbc_lblEndProduct.anchor = GridBagConstraints.EAST;
		gbc_lblEndProduct.insets = new Insets(0, 0, 5, 5);
		gbc_lblEndProduct.gridx = 1;
		gbc_lblEndProduct.gridy = 1;
		panel_2.add(lblEndProduct, gbc_lblEndProduct);
		
		textField = new JTextField();
		GridBagConstraints gbc_textField = new GridBagConstraints();
		gbc_textField.insets = new Insets(0, 0, 5, 5);
		gbc_textField.fill = GridBagConstraints.HORIZONTAL;
		gbc_textField.gridx = 2;
		gbc_textField.gridy = 1;
		panel_2.add(textField, gbc_textField);
		textField.setColumns(10);
		
		JCheckBox chckbxInProgress = new JCheckBox("In Progress");
		GridBagConstraints gbc_chckbxInProgress = new GridBagConstraints();
		gbc_chckbxInProgress.insets = new Insets(0, 0, 5, 0);
		gbc_chckbxInProgress.gridx = 12;
		gbc_chckbxInProgress.gridy = 1;
		panel_2.add(chckbxInProgress, gbc_chckbxInProgress);
		
		JLabel lblNeedles = new JLabel("Needles");
		GridBagConstraints gbc_lblNeedles = new GridBagConstraints();
		gbc_lblNeedles.insets = new Insets(0, 0, 5, 5);
		gbc_lblNeedles.gridx = 1;
		gbc_lblNeedles.gridy = 2;
		panel_2.add(lblNeedles, gbc_lblNeedles);
		
		JList list = new JList();
		GridBagConstraints gbc_list = new GridBagConstraints();
		gbc_list.gridwidth = 2;
		gbc_list.insets = new Insets(0, 0, 5, 5);
		gbc_list.fill = GridBagConstraints.BOTH;
		gbc_list.gridx = 2;
		gbc_list.gridy = 2;
		panel_2.add(list, gbc_list);
		
		JLabel lblYarn = new JLabel("Yarn");
		GridBagConstraints gbc_lblYarn = new GridBagConstraints();
		gbc_lblYarn.insets = new Insets(0, 0, 5, 5);
		gbc_lblYarn.gridx = 4;
		gbc_lblYarn.gridy = 2;
		panel_2.add(lblYarn, gbc_lblYarn);
		
		JList list_2 = new JList();
		GridBagConstraints gbc_list_2 = new GridBagConstraints();
		gbc_list_2.insets = new Insets(0, 0, 5, 5);
		gbc_list_2.fill = GridBagConstraints.BOTH;
		gbc_list_2.gridx = 5;
		gbc_list_2.gridy = 2;
		panel_2.add(list_2, gbc_list_2);
		
		JList list_1 = new JList();
		GridBagConstraints gbc_list_1 = new GridBagConstraints();
		gbc_list_1.insets = new Insets(0, 0, 5, 5);
		gbc_list_1.fill = GridBagConstraints.BOTH;
		gbc_list_1.gridx = 6;
		gbc_list_1.gridy = 2;
		panel_2.add(list_1, gbc_list_1);
		
		JLabel lblGauge = new JLabel("Gauge");
		GridBagConstraints gbc_lblGauge = new GridBagConstraints();
		gbc_lblGauge.anchor = GridBagConstraints.EAST;
		gbc_lblGauge.insets = new Insets(0, 0, 5, 5);
		gbc_lblGauge.gridx = 1;
		gbc_lblGauge.gridy = 3;
		panel_2.add(lblGauge, gbc_lblGauge);
		
		textField_1 = new JTextField();
		GridBagConstraints gbc_textField_1 = new GridBagConstraints();
		gbc_textField_1.insets = new Insets(0, 0, 5, 5);
		gbc_textField_1.fill = GridBagConstraints.HORIZONTAL;
		gbc_textField_1.gridx = 2;
		gbc_textField_1.gridy = 3;
		panel_2.add(textField_1, gbc_textField_1);
		textField_1.setColumns(10);
		GridBagConstraints gbc_scrollPane_1 = new GridBagConstraints();
		gbc_scrollPane_1.anchor = GridBagConstraints.WEST;
		gbc_scrollPane_1.insets = new Insets(0, 0, 5, 5);
		gbc_scrollPane_1.gridx = 1;
		gbc_scrollPane_1.gridy = 0;
	}
	JFrame patternFrame = new JFrame("Pattern Library");
	private JTextField textField;
	private JTextField textField_1;
	
	
	
}
