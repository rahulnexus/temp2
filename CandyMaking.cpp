#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class CandyMaking {
public:
	double findSuitableDensity(vector <int> containerVolume, vector <int> desiredWeight) {
		double mn=1e19;
		vector<int> cv=containerVolume;
		vector<int> dw=desiredWeight;
		int n=cv.size();
		vector<double> d;
		for(int i=0;i<n;i++)
		{
			d.push_back((dw[i]*1.0)/cv[i]);
		}
		double ans=0;
		double aans=1e19;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				ans+=abs(dw[j]-cv[j]*d[i]);
			}
			aans=min(aans,ans);
		}
		return aans;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, double p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}";
	cout << "]" << endl;
	CandyMaking *obj;
	double answer;
	obj = new CandyMaking();
	clock_t startTime = clock();
	answer = obj->findSuitableDensity(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = fabs(p2 - answer) <= 1e-9 * max(1.0, fabs(p2));
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <int> p0;
	vector <int> p1;
	double p2;
	
	{
	// ----- test 0 -----
	int t0[] = {5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1000};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 0.0;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {10,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1000,2000};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1000.0;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {10,20,40};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {4000,2000,1000};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 5250.0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1234,1541,3321,1234,123,123,3414,123,12,2442,1421,1223,3232,1123,2121};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3213,1231,232143,44312,132132,142424,123123,41341,41244,21312,232131,2312,2322,11,2223};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 983673.2727272725;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {30621,30620,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,1,1000000};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 999999.9999673415;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
