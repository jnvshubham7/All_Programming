#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter POC, COA, DST, UMC, DMS" << endl;

    float poc, coa, dst, umc, dms,poe;

    cin >> poc >> coa >> dst >> umc >> dms;

    cout << "Enter POE" << endl;

    cin >> poe;

    float cgp = 4*(poc+coa+dst+umc+dms) + 2*(poe);

    cout << cgp/22 <<endl;

    return 0;
}