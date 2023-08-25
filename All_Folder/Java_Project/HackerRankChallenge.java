// import java.io.IOException;
// import java.net.HttpURLConnection;
// import java.net.URL;
// import java.util.Scanner;

// public class HackerRankChallenge {

//     static class Competition {
//         String name;
//         String country;
//         int year;
//         String winner;
//         String runnerup;
//     }

//     static class Match {
//         String team1;
//         String team2;
//         String team1goals;
//         String team2goals;
//     }

//     static String sendGETRequest(String url) throws IOException {
//         URL urlObj = new URL(url);
//         HttpURLConnection connection = (HttpURLConnection) urlObj.openConnection();
//         connection.setRequestMethod("GET");
//         int responseCode = connection.getResponseCode();

//         if (responseCode == HttpURLConnection.HTTP_OK) {
//             Scanner scanner = new Scanner(connection.getInputStream());
//             StringBuilder response = new StringBuilder();

//             while (scanner.hasNextLine()) {
//                 response.append(scanner.nextLine());
//             }

//             scanner.close();
//             return response.toString();
//         } else {
//             return null;
//         }
//     }

//     static int getWinnerTotalGoals(String competition, int year) throws IOException {
//         // First, get competition winner
//         String competitionURL = "https://jsonmock.hackerrank.com/api/football_competitions?name=" +
//                 competition.replace(" ", "%20") + "&year=" + year;
//         String competitionResponse = sendGETRequest(competitionURL);

//         if (competitionResponse == null) {
//             return -1; // Error handling
//         }

//         Competition[] competitions = new Gson().fromJson(competitionResponse, Competition[].class);
//         String winner = competitions[0].winner;

//         // Then, get matches for the winner
//         String matchesURL = "https://jsonmock.hackerrank.com/api/football_matches?competition=" +
//                 competition.replace(" ", "%20") + "&year=" + year + "&team1=" + winner + "&page=1";
//         String matchesResponse = sendGETRequest(matchesURL);

//         if (matchesResponse == null) {
//             return -1; // Error handling
//         }

//         Match[] matches = new Gson().fromJson(matchesResponse, Match[].class);

//         int totalGoals = 0;
//         for (Match match : matches) {
//             totalGoals += Integer.parseInt(match.team1goals);
//         }

//         return totalGoals;
//     }

//     public static void main(String[] args) throws IOException {
//         Scanner scanner = new Scanner(System.in);
//         String competition = scanner.nextLine();
//         int year = scanner.nextInt();

//         int result = getWinnerTotalGoals(competition, year);
//         System.out.println(result);

//         scanner.close();
//     }
// }
