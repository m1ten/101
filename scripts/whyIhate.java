// if you found this java file in a folder called scripts, then enjoy!
import java.util.ArrayList;

package scripts;

public class whyIhate {
    public static void main(String[] args) {
        System.out.println("This is the first reason why I hate java.");
        System.out.println("who thought having long identifiers was a good idea?");
        System.out.println("no one wants to type System.out.println(\"Hello World!\");");
        System.out.println("Here I am typing it every time");

        var reasonTwo = new List<String>();

        reasonTwo.add("This is the second reason why I hate java.");
        reasonTwo.add("Java is slow and has a lot of overhead.");
        reasonTwo.add("if you say otherwise, you are wrong.");
        reasonTwo.add("I mean just use C or C++ or even Rust for a day and find out.");
        reasonTwo.add("ok fine if you compare it to Python it's fast but I can use C functions in python so take that");

        for (var reason : reasonTwo) {
            System.out.println(reason);
        }

        List<String> reasonThree = Stream.of("This is another reason why I hate java", "idk why I am doing this", "it's really not fun").collect(Collectors.toList());

        while (reasonThree.size() > 0) {
            System.out.println(reasonThree.remove(0));
        }

        List<String> reasonFour = new ArrayList<String>();

        reasonFour.add("Just use C# and if you really need JVM, use kotlin.");
        reasonFour.add("\"You might just be a Java troll. I’ve heard they exist.\"");
        reasonFour.add("This just proves my point even more.");

        reasonFour.forEach(System.out::println);
    }
}

/* on a serious note, I don't even know Java. 
   well I do only like jre 8 because it's so old and most used (probably)
   or it might jre 11 or 16 because they are newer.
*/



