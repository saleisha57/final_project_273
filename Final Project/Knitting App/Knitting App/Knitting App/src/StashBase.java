import java.awt.Image;

public class StashBase {
	private boolean buttonified = false;
	private Image image;
	private boolean favorite = false;
	private boolean inUse = false;
	private String addNotes = "";
	private String name;
	
	public void setAddNotes(String an){addNotes = an;}
	public void setFavorite(boolean f) {favorite = f;}
	public void setInUse(boolean iu){inUse = iu;}
	public void setImage(Image i){image = i;}
	public void setButtonified(boolean b){buttonified = b;}
	public void setName(String n){name = n;}
	
	public String getAddNotes(){return addNotes;}
	public boolean getFavorite(){return favorite;}
	public boolean getInUse(){return inUse;}
	public Image getImage(){return image;}
	public boolean getButtonified(){return buttonified;}
	public String getName(){return name;}
	
	//constructor
	StashBase(){;}
	StashBase(String n){name = n;}
}
