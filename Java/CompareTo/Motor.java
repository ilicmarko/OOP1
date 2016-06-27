/**
 * Created by Maverick on 6/26/2016.
 */
public class Motor implements Comparable {
    protected String naziv;
    protected double brojSatiRada,faktorIstrosenosti;

    public Motor(){this("",0.0,0.0);}

    public Motor(String ime, double sati,double faktor){
        naziv = ime;
        brojSatiRada = sati;
        faktorIstrosenosti = faktor;
    }

    public Motor(final Motor drugi){
        this(drugi.naziv,drugi.brojSatiRada,drugi.faktorIstrosenosti);
    }

    public String getNaziv(){
        return naziv;
    }
    protected double getStepenZamoraMotora(){
        return brojSatiRada * faktorIstrosenosti;
    }
    @Override
    public String toString(){
        return "Motor: " + naziv + "\n" + "Sati rada: " + brojSatiRada + "\n" + "Zamor: " + getStepenZamoraMotora() +"\n";
    }

    @Override
    public int compareTo(final Object m1){
        // Ovde mora m1 da se prebaci u Motor zato sto je m1 tipa Object
        if(this.getStepenZamoraMotora() == ((Motor) m1).getStepenZamoraMotora()) {
            return 0;
        }else if(this.getStepenZamoraMotora() > ((Motor) m1).getStepenZamoraMotora()){
            return 1;
        } else{
            return -1;
        }
    }
}
