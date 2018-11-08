package sub;
import java.util.Scanner;
/**
 *
 * @author MD. NAFIUL JAMI
 */
public class SUB {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

               Scanner ob=new Scanner(System.in);
       String st=ob.next();
       int a=st.indexOf('=');
       int b=st.indexOf('-');
       String f=st.substring(0,a);
       String g=st.substring(a+1,b);
       String h=st.substring(b+1);

           System.out.println("SUB  "+f+","+g+","+h);
    }

}
