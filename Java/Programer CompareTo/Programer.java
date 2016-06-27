package zad4;

public class Programer implements Comparable<Programer>, Cloneable{
	private String ime;
	private double plataPoSatu;
	private int brojSati;
	protected final int ID;
	private static int IDC = 1;
	
	public Programer(){
		this("",0,0);
	}
	
	public Programer(String _ime, double _plataPoSatu, int _brojSati){
		ime = _ime;
		plataPoSatu = _plataPoSatu;
		brojSati = _brojSati;
		ID = IDC++;
	}
	
	public Programer(Programer a){
		this(a.ime,a.plataPoSatu,a.brojSati);
	}
	
	public String getIme(){ return ime; }
	
	public double getPlata(){
		return plataPoSatu * brojSati;
	}
	
	@Override
	public int compareTo(Programer d){
		double r = getPlata() - d.getPlata();
		if (r>0) return 1;
		if (r<0) return -1;
		return 0;
	}
	
	@Override
	public Object clone() throws CloneNotSupportedException{
		//ovako sam ga ja radio, msm da treba malo drugacije
		return new Programer(ime,plataPoSatu,brojSati);
	}	
}
