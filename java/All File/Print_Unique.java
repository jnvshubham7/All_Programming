
public class Print_Unique {

    static void printUniqueWords(String str) {

        int count;

        String[] words = str.split("\\W");

        for (int i = 0; i < words.length; i++) {

            count = 1;

            for (int j = i + 1; j < words.length; j++) {
                if (words[i].equalsIgnoreCase(words[j])) {

                    count++;

                    words[j] = "";
                }
            }

            if (count == 1 && words[i] != "")

                System.out.println(words[i]);
        }
    }

    public static void main(String[] args) {

        String str = "Java is great. Python is also great";

        printUniqueWords(str);
    }
}
