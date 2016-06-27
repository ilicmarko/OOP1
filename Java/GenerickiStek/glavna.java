import java.io.IOException;
@SuppressWarnings("unchecked")

public class glavna {
    public static void main(String[] args) {
        int random = 1 + (int)(Math.random() * ((1000 - 1) + 1));
        Stack<Integer> stek = new Stack<Integer>(1000);

        for(int i =0;i<1000;i++){
            try {
                stek.push(i + random);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        for(int i =0;i<1000;i++) {
            try{
                System.out.println(stek.pop());
            } catch (IOException e){
                e.printStackTrace();
            }
        }

    }
}
