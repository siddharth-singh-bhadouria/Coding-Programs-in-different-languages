public class sid {
    public static void main(String[] args){

        String s= "Akash";
        
        // System.out.println(s.length());
        
        String c= "";

    for(int i=0; i< s.length();i++){
    // char ch = s.charAt(i);

            // Check if the character is not 'a' or 'A' before appending
            if (s.charAt(i) != 'a' && s.charAt(i) != 'A') {
                c = c + s.charAt(i);
            }
    }

System.out.println(c);

    }
}