import java.util.ArrayList;

import javax.swing.*;

public class myJButton extends JButton {
	private Yarn yarn;
	private String string;
	private Needles needles;
	private Pattern pattern;
	private ArrayList<JCheckBox> ckbx = new ArrayList<JCheckBox>();
	private ArrayList<JRadioButton> rdbn = new ArrayList<JRadioButton>();
	
	myJButton(){;}
	myJButton(String s){
		setString(s);
		this.setText(string);
		}
	myJButton(String s, Needles n){
		setString(s);
		setNeedles(n);
		this.setText(string);
	}
	myJButton(String s, Yarn y){
		setString(s);
		setYarn(y);
		this.setText(string);
	}
	myJButton(String s, Pattern p){
		setString(s);
		setPattern(p);
		this.setText(string);
	}
	
	//set methods
	public void setYarn(Yarn y){yarn = y;}
	public void setNeedles(Needles n){needles = n;}
	public void setPattern(Pattern p){pattern = p;}
	public void setString(String s){string = s;}
	public void addChkBx(JCheckBox chbox){ckbx.add(chbox);}
	public void addRdioBx(JRadioButton rdiobx){rdbn.add(rdiobx);}
	
	//get methods
	public Yarn getYarn(){return yarn;}
	public Needles getNeedleS(){return needles;}
	public Pattern getPattern(){return pattern;}
	public String getString(){return string;}
	public ArrayList<JRadioButton> getRdioBx(){return rdbn;}
	public ArrayList<JCheckBox> getchbx(){return ckbx;}
}
