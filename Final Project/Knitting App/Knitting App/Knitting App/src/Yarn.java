import java.awt.Image;


//cloud address = cs1.whitworth.edu/jabbott19/name_of_file.jpg
public class Yarn extends StashBase {
	private String brand = "";
	private int yardage = -1;
	private int howManySkeins = -1;
	private int lotNumber = -1;
	private int weight;
	private String color;
	private String fiber;
	
	
	
	Yarn(){}
	Yarn(String c, String f, int w, String n){
		super(n);
		color = c;
		fiber = f;
		weight = w;
		
	}
	
	public void setBrand(String b){brand = b;}
	public void setYardage(int y){yardage = y;}
	public void setLotNumber(int ln){lotNumber = ln;}
	public void setWeight(int w){weight = w;}
	public void setColor(String c){color = c;}
	public void setFiber(String f){fiber = f;}
	public void setHowManySkeins(int hms){howManySkeins = hms;}
	
	
	
	public String getBrand(){return brand;}
	public int getYardage(){return yardage;}
	public int getLotNumber(){return lotNumber;}
	public int getWeight(){return weight;}
	public String getColor(){return color;}
	public String getFiber(){return fiber;}
	public int getHowManySkeins(){return howManySkeins;}
	
	
}
