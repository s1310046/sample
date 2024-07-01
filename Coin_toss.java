import java.util.Random;

public class Coin_toss{
    public static void main(String[] args){
        int headCount = 0;
        int tailsCount = 0;
        Random random = new Random();

        System.out.println("Tossing a coin...");
        for(int i =1;i<=3;i++){
            String result = tossCoin(random);
            System.out.println("Round "+round+": "+result);
            if(result.equals("Heads")){
                
            }

        }
    }
}