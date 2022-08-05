int solution(vector<int> hoop1, vector<int> hoop2) {


// There are two solid hoops coloured in black. A hoop is the area between two concentric circles with radius r and R (r < R). The two hoops lie on a completely white plane.

// A colourful transition is a closed continuous line through which there should be a change of colour. Given co-ordinates of the two hoops, find the total possible number of circular colourful transitions.

// Input :

// Input contains 2 lines: description of each hoop.
// Each line contains 4 space-separated integers:

// x, y, r, R

// ( - 100 ≤ x, y ≤ 100; 1 ≤ r < R ≤ 100).

// where x, y are the co-ordinates of the centre of the hoop. r and R are the radii of the smaller and larger concentric circles of the hoop respectively.

// Output
// A single integer: total possible number of circular colourful transitions

// Example

// Input :
// 60 60 45 55
// 80 60 15 25

// Output :
// 4

// Explanation: In the following figure, red lines denote the colourful transition



// Input :
// 60 60 45 55
// 80 80 8 32

// Output :
// 1

// Explanation:



// Input :
// -25 10 20 40
// 4 17 10 69

// Output :
// 0

// [execution time limit] 1 seconds (cpp)

// [input] array.integer hoop1

// Contains 4 integers: x1, y1, r1, R1 - description of first hoop

// [input] array.integer hoop2

// Contains 4 integers: x2, y2, r2, R2 - description of second hoop

// [output] integer

// Total possible number of circular colourful transitions




// Your code here!


int n=hoop1.size();
int m=hoop2.size();
int dp[n][m];











}
