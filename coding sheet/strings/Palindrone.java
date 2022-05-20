import java.util.*;


public class Palindrone

{
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
        str = str.toLowerCase();
        String temp = "";
		//System.out.println(str.toLowerCase());
        for(int i =0; i<str.length(); i++){
        if(str.charAt(i) >='a' && str.charAt(i) <='z'){
                    temp += str.charAt(i);                 
        }
        
    }
    System.out.println(temp);

        int s =0;
        int e = temp.length()-1;
        while(s<=e){
            
            if(temp.charAt(s) == temp.charAt(e)){
                s++;
                e--;
            }
            else{
                System.out.println("Not Palindrone");
                break;
            }
        }
        if(s >= e){
            System.out.println("Panlindrone");
        }
    }

}
