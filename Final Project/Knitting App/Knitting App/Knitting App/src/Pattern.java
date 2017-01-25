import java.awt.Image;
import java.io.File;


public class Pattern extends StashBase {
	private boolean inProgress= false;
	private double gauge = -1;
	private String endProduct = "";
	private Needles needles;
	private Yarn yarn;
	//file that the pattern text file is stores
	private File patternText;

	
	//set methods for all variables
	public void setInProgress(boolean ip){inProgress =ip;}
	public void setGauge(double g){gauge = g;}
	public void setEndProduct(String ep){endProduct =ep;}
	public void setNeedles(Needles n){needles = n;}
	public void setYarn(Yarn y){yarn = y;}
	public void setPatternText(File pt){patternText = pt;}
	
	
	
	//get methods for all variables
	public boolean getInProgress(){return inProgress;}
	public double getGauge(){return gauge;}
	public String getEndProduct(){return endProduct;}
	public Needles getNeedles(){return needles;}
	public Yarn getYarn(){return yarn;}
	public File getPatternText(){return patternText;}
	
		
	//constructors
	Pattern(){;}
	
	Pattern(String fn){
		super(fn);
	}
	
	
	
}
