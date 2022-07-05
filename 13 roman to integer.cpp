#include<bits/stdc++.h>
using namespace std;

    int romanToInt(string s) {
        unordered_map<char, int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

	int result = mpp[s[s.length()-1]];  // V's 5 will store
		
	for(int i = s.length()-2; i >= 0; i--) {
		if(mpp[s[i]] < mpp[s[i+1]])
			result -= mpp[s[i]];
		else
			result += mpp[s[i]];
		//cout << "Result = " << result<< endl;
	}
  		return result;

    }
int main()
{
	cout << romanToInt("MCMXCIV");
	return 0;
}

