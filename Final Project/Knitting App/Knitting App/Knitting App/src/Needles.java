import java.awt.Image;

public class Needles extends StashBase {
	private boolean circular = false;
	private boolean doublePointed = false;
	private boolean straight = false;
	private boolean alreadyOwn;
	private boolean interchangable = false;
	private int length = -1;
	private int size;
	private String brand = "";
	private String material = "";
	
	
	
	//constructors for Needles
	Needles(){;}
	Needles(int s, int l, String n){
		super(n);
		size = s;
		length = l;
		
	}
	Needles(int s, int l, boolean ao, String n){
		super(n);
		size = s;
		length = l;
		alreadyOwn = ao;

	}
	Needles(int s, boolean ao, String n){
		super(n);
		size = s;
		alreadyOwn = ao;
	}
	
	
	//set methods for all variables
	public void setCircular(boolean c){circular = c;}
	public void setDoublePointed(boolean dpn){doublePointed = dpn;}
	public void setStraight(boolean s){straight = s;}
	public void setLength(int l){length = l;}
	public void setSize(int s){size = s;}
	public void setBrand(String b){brand = b;}
	public void setMaterial(String m){material =m;}
	public void setInterchangable(boolean i){interchangable = i;}
	
	
	
	//get methods for all variables
	public boolean getCircular(){return circular;}
	public boolean getDoublePointed(){return doublePointed;}
	public boolean getStraight(){return straight;}
	public int getLength(){return length;}
	public int getSize(){return size;}
	public String getBrand(){return brand;}
	public String getMaterial(){return material;}
	public boolean getInterchangable(){return interchangable;}
	
	
}
