/**
 * Created by Maverick on 6/26/2016.
 */
public class MotorSaTurbinom extends Motor {
    protected double zamorTurbine;

    public MotorSaTurbinom(){this("",0.0,0.0,0.0);}
    public MotorSaTurbinom(String ime, double sati,double faktor, double turbina){
        super(ime,sati,turbina);
        zamorTurbine = turbina;
    }
    protected double getStepenZamoraMotora(){
        return super.getStepenZamoraMotora() + zamorTurbine ;
    }
    @Override
    public String toString(){
        return super.toString() + "Turbina: " + zamorTurbine +"\n";
    }
}
