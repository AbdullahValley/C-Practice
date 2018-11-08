1. Write a class named Light
2. Write a variable named status of type Boolean.
3. Write a constructor to initialize the light to Off.
 4. Write a method switchOn( ) to turn light on.
5. Write a method switchOff( ) to turn light off.
6. Write a method ifOn( ) to return the state of light.
7. Write a method toString( ) to print On if light is on and Off if light is Off.
8. Write a main program to test each of your methods above.
Below is a template to help write your code.
 /////////////////////////////////////////////////////////////////
 // base class Light
 /////////////////////////////////////////////////////////////////
 public class Light {
/** write a variable status for light */
 /* Write a constructor to initialize to false the light */
/* Write a method to switchOn( ) */
/* Write a method to switchOff( ) */
/* Write a method ifOn( ) to return state of light */
/* Write a method toString( ) to print On if light is on and Off if light is off */ }
 /////////////////////////////////////////////////////////////
// Test Program
 /////////////////////////////////////////////////////////////
 public class LightTest {
 public static void main(String[] args) {
 /* Create a variable "L" of object Light and initialize it by calling the constructor */
 /* Print the current status of the light */
 System.out.println( " The light is created and set to " ________________);
 /* Turn on the light L */ /* Print the current status of the light */
 System.out.println( " The light is turned " ______________________);
 /* Turn off the light L */
 /* Print the current status of the light */
 System.out.println( " The light is turned " ________________________); } }

 PART 2:
9. Once you got Part 1 working. Extend a class named ColoredLight from class Light.
10. Write a variable named color of type String.
 11. Write a constructor to initialize the color and state of light (invoke the Light constructor).
 12. Write a method getColor( ) to get the color.
 13. Write a method toString( ) to print the color if light is on and can not print the color if light is off. Hint: Invoke the toString( ) method of the base class.
 14. Modifiy the LightTest main program to include testing for ColoredLight.
public class ColoredLight _______________ Light
 { /* Write a variable named color of type char */
/* Write a constructor to initialize color and state of light */
 /* Write a method getColor( ) */ /* Write a method toString( ) */ }
 public class LightTest { public static void main(String[] args) {
 /* Instantiate the class ColoredLight with a variable named C and initialize it by calling the constructor */
 /* Print the current status of the light */
 System.out.println( " The colored light is created and set to " ______________);
 /* Turn on the light C */
 /* Print the current status of the light */
 System.out.println( " The light is turned " + ___________________________); }
