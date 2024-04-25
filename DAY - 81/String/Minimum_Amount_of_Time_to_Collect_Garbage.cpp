#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O()
int garbageCollection(vector<string>& garbage, vector<int>& travel) {

	int pickP, pickG, pickM;
	pickP = pickG = pickM = 0;

	int travelP, travelG, travelM;
	travelP = travelG = travelM = 0;

	int lastP, lastG, lastM;
	lastP = lastG = lastM = 0;

	// calculate pick time and travel time
	for (int i = 0; i < garbage.size(); i++) {

		string curr = garbage[i];
		for (auto ch : curr) {

			if (ch == 'P') {
				pickP++;
				lastP = i;
			}
			else if (ch == 'G') {
				pickG++;
				lastG = i;
			}
			else if (ch == 'M') {
				pickM++;
				lastM = i;
			}
		}
	}

	// calculate travel time
	for (int i = 0; i < lastP; i++)
		travelP += travel[i];

	for (int i = 0; i < lastG; i++)
		travelG += travel[i];

	for (int i = 0; i < lastP; i++)
		travelM += travel[i];

	int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
	return ans;
}

int main() {
	vector<string> garbage{ "G", "P", "GP", "GG" };
	vector<int> travel{ 2, 4, 3 };

	cout << "The Minimum time to collect garbage is: ";
	cout << garbageCollection(garbage, travel) << endl;

	return 0;
}