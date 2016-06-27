public class Tacka{
	
	private int x,y;

	Tacka(int a, int b){
		x = a;
		y = b;
	}

	private final static Tacka okvir[] = new Tacka[4];

	// Blok za inicijalizaciju static polja

	static{

		okvir[0] = new Tacka(0,0);
		okvir[1] = new Tacka(0,400);
		okvir[2] = new Tacka(600,0);
		okvir[3] = new Tacka(600,400);
	
	}
}
