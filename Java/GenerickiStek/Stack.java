import java.io.IOException;

public class Stack<T> {
    private int velicina;
    private int vrh;
    private T[] elementi ;

    public Stack(int s){
        velicina = s;
        vrh = 0;
        elementi = (T[]) new Object[velicina]; // Ovde moze da dodje do greske zbog ne sigurnog kastovanja u tom slucaju @SuppressWarnings("unchecked")
    }

    // Moze i da se napise metoda da se stack dinamicki siri

//    private void prosiri(){
//        if (vrh == velicina){
//            T[] stari = elementi;
//            elementi = (T[]) new Object[velicina*2];
//            for (int i=0; i<velicina; i++) elementi[i] = stari[i];
//        }
//    }

    public void push(T vrednost) throws IOException{
        if(vrh == velicina) throw new IOException("Stack je pun");
        elementi[vrh++] = vrednost;
    }

    public T pop() throws IOException{
        if(vrh == 0) throw new IOException("Stack je prazan");
        T tmp = elementi[--vrh];
        elementi[vrh] = null;
        return tmp;
    }
}
