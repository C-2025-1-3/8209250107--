int fun(int x, int y) {
	int min, i, max, t;
	if (x < y) {
		min = x;
	}
	else min = y;
	for (i = min; i >= 1; i--) {
		if (x % i == 0 && y % i == 0) break;
	}
	cout << "最大公约数" << i << endl;
	if (x < y) {
		max = y;
	}
	else max = x;
	for (t = max; t <= x * y; t++) {
		if (t % x == 0 && t % y == 0) break;
	}
	cout << "最小公倍数" << t << endl;
	return 0;
}
int main() {
	int m, n;
	cin >> m >> n;
	fun(m, n);
	return 0;
}