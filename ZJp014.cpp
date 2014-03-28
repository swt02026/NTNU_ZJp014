#include<algorithm>
#include <iostream>
using namespace std;
struct node {
	int num;
	int time;
	int cent;
	double bi;
} shoe[1005];
bool cmp(node a, node b) {
	return (a.bi < b.bi) || ((a.bi == b.bi) && (a.num < b.num));
}
int main() {
	int t, n;
	for (cin >> t; cin >> n, t--;) {
		for (int i = 0; i < n; i++) {
			shoe[i].num = i + 1;
			cin >> shoe[i].time >> shoe[i].cent;
			shoe[i].bi = shoe[i].time * 1. / shoe[i].cent;
		}
		sort(shoe, shoe + n, cmp);  //排序
		cout << endl << shoe[0].num;  //输出
		for (int i = 1; i < n;)
			printf(" %d", shoe[i++].num);
		(t) && (cout << endl);
	}
	return 0;
}
