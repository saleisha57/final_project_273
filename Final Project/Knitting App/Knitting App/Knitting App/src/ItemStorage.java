import java.util.ArrayList;


public class ItemStorage {
	static ArrayList<Yarn> allYarn = new ArrayList<Yarn>();
	static ArrayList<Needles> allNeedles = new ArrayList<Needles>();
	static ArrayList<Pattern> allPatterns = new ArrayList<Pattern>();
	
	//set and get methods
	public void setAllYarn(Yarn y){allYarn.add(y);}
	public void setAllNeedles(Needles n){allNeedles.add(n);}
	public void setAllPatterns(Pattern p){allPatterns.add(p);}
	
	public ArrayList<Yarn> getAllYarn(){return allYarn;}
	public ArrayList<Needles> getAllNeedles(){return allNeedles;}
	public ArrayList<Pattern> getAllPatterns(){return allPatterns;}
	}
