#include <iostream>
#include <string.h>
#include <stack>
#include <vector>
#include <math.h>

using namespace std;
	// Converts IP address to the binary form
vector<int> bina(vector<string> str)
	{
	vector<int> re(32,0);
		int a, b, c, d, i, rem;
		a = b = c = d = 1;
		stack<int> st;

		// Separate each number of the IP address

			a = stoi(str[0]);
			b = stoi(str[1]);
			c = stoi(str[2]);
			d = stoi(str[3]);

		// convert first number to binary
		for (i = 0; i <= 7; i++)
		{
			rem = a % 2;
			st.push(rem);
			a = a / 2;
		}

		// Obtain First octet
		for (i = 0; i <= 7; i++) {
			re[i] = st.top();
			st.pop();
		}

		// convert second number to binary
		for (i = 8; i <= 15; i++) {
			rem = b % 2;
			st.push(rem);
			b = b / 2;
		}

		// Obtain Second octet
		for (i = 8; i <= 15; i++) {
			re[i] = st.top();
			st.pop();
		}

		// convert Third number to binary
		for (i = 16; i <= 23; i++) {
			rem = c % 2;
			st.push(rem);
			c = c / 2;
		}

		// Obtain Third octet
		for (i = 16; i <= 23; i++) {
			re[i] = st.top();
			st.pop();
		}

		// convert fourth number to binary
		for (i = 24; i <= 31; i++) {
			rem = d % 2;
			st.push(rem);
			d = d / 2;
		}

		// Obtain Fourth octet
		for (i = 24; i <= 31; i++) {
			re[i] = st.top();
			st.pop();
		}

		return (re);
	}

	// cls returns class of given IP address
char cls(vector<string> str)
	{
		int a = stoi(str[0]);
		if (a >= 0 && a <= 127)
			return ('A');
		else if (a >= 128 && a <= 191)
			return ('B');
		else if (a >= 192 && a <= 223)
			return ('C');
		else if (a >= 224 && a <= 239)
			return ('D');
		else
			return ('E');
	}

	// Converts IP address
	// from binary to decimal form
vector<int> deci(vector<int> bi)
	{

		vector<int> arr(4,0);
		int a, b, c, d, i, j;
		a = b = c = d = 0;
		j = 7;

		for (i = 0; i < 8; i++) {

			a = a + (int)(pow(2, j)) * bi[i];
			j--;
		}

		j = 7;
		for (i = 8; i < 16; i++) {

			b = b + bi[i] * (int)(pow(2, j));
			j--;
		}

		j = 7;
		for (i = 16; i < 24; i++) {

			c = c + bi[i] * (int)(pow(2, j));
			j--;
		}

		j = 7;
		for (i = 24; i < 32; i++) {

			d = d + bi[i] * (int)(pow(2, j));
			j--;
		}

		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
		return arr;
	}

int main()
	{


		string ipr = "192.168.1.1/24";

		// You can take user input here
		// instead of using default address
		// Ask user to enter IP address of form(x.y.z.t/n)
		cout<<"IP address CIDR format is:"<< ipr;

		// Separate IP address and n
		string str1 = "";
		int idx = 0;
		int len = ipr.size();
		len -= 3;
		while(len--){
			str1 += ipr[idx];
			idx++;
		}
		cout<<endl;
		cout<<"IP Address : " <<str1<<endl;

		string str2 = "";
		idx++;
		str2 += ipr[idx];
		idx++;
		str2 += ipr[idx];
		cout<<"Value of n : "<< str2<<endl;
		// IP address
		string tr = str1;

		// Split IP address into 4 subparts x, y, z, t
		//str = tr.split("\\.");
		vector<string> str;

		string temp;
		int n = tr.size();
		for(int i = 0; i < n; i++){
			if(tr[i] >= 48 && tr[i] <= 57)
				temp +=tr[i];
			else{
				str.push_back(temp);
				temp = "";
			}
		}
		str.push_back(temp);
		//cout<<str[0]<<endl<<str[1]<<endl<<str[2]<<endl<<str[3]<<endl;

		vector<int> b;

		cout<<endl;

		// Convert IP address to binary form
		b = bina(str);

		n = stoi(str2);
		vector<int> ntwk(32,0);
		vector<int> brd(32,0);
		int t = 32 - n;

		// Obtaining network address
		for (int i = 0; i <= (31 - t); i++) {

			ntwk[i] = b[i];
			brd[i] = b[i];
		}

		// Set 32-n bits to 0
		for (int i = 31; i > (31 - t); i--) {

			ntwk[i] = 0;
		}

		// Obtaining Broadcast address
		// by setting 32-n bits to 1
		for (int i = 31; i > (31 - t); i--) {

			brd[i] = 1;
		}

		cout<<endl;

		// Obtaining class of Address
		char c = cls(str);
		cout<<"Class : " << c << endl;

		// Converting network address to decimal
		vector<int> nt = deci(ntwk);

		// Converting broadcast address to decimal
		vector<int> br = deci(brd);

		// Printing in dotted decimal format
		cout<<"First Address : " << nt[0] << "." <<nt[1] <<"." << nt[2] <<"." << nt[3]<<endl;

		// Printing in dotted decimal format
		cout<<"Last Address : " <<br[0] << "." <<br[1] << "." << br[2] <<"." << br[3] << endl;

		//Printing Number of Addresses in Block
		cout<<"Total Number of Addresses :" <<br[3]-nt[3]+1<<endl;

		return 0;
}
