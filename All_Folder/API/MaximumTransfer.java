// package All_Folder.API;
// import java.util.ArrayList;
// import java.util.List;
// import org.json.JSONArray;
// import org.json.JSONObject;

// // Assume that you have imported the necessary packages for HTTP requests

// public class MaximumTransfer {
//     public static void main(String[] args) {
//         String base_url = "https://jsonmock.hackerrank.com/api/transactions";
//         String name = "Bob Martin";
//         String city = "Bourg";

//         // Make API requests and handle JSON responses similarly to the Python code
//         // ...

//         List<JSONObject> transactions = new ArrayList<>();
//         // ...

//         double ans1 = 0.0;
//         double ans2 = 0.0;

//         for (JSONObject transaction : transactions) {
//             JSONObject location = transaction.getJSONObject("location");
//             if (location.getString("city").equals(city)) {
//                 String txnType = transaction.getString("txnType");
//                 double amount = Double.parseDouble(
//                     transaction.getString("amount").replace("$", "").replace(",", "")
//                 );
//                 if (txnType.equals("credit") && ans1 < amount) {
//                     ans1 = amount;
//                 } else if (txnType.equals("debit") && ans2 < amount) {
//                     ans2 = amount;
//                 }
//             }
//         }

//         System.out.println(ans1);
//         System.out.println(ans2);
//     }
// }
