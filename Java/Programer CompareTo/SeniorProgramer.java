package zad4;

public class SeniorProgramer extends Programer{
	private double bonus;
	
	public SeniorProgramer(){
		super();
		bonus = 0;
	}
	
	public SeniorProgramer(String _ime, double _plataPoSatu, int _brojSati, double _bonus){
		super(_ime,_plataPoSatu,_brojSati);
		bonus = _bonus;		
	}
	
	public SeniorProgramer(Programer a, double _bonus){
		super(a);
		bonus = _bonus;
	}
	
	@Override
	public double getPlata(){
		return super.getPlata() + bonus;
	}
	
	public Object clone() throws CloneNotSupportedException{
		return new SeniorProgramer(this,bonus);		
	}	
}
