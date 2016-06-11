import java.util.*;

public class  QuiteProblem{
    public static void main(String[] args){
        String line;
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            line = sc.nextLine();
            line = line.toLowerCase();
            if(line.contains("problem")){
                System.out.println("yes");
            }
            else
                System.out.println("no");
        }
    }
}