//����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���



double Power(double base, int exponent) {
	double res = 1.0;
	while (exponent > 0) {
		res *= base;
		exponent--;
	}
	while (exponent < 0) {
		res /= base;
		exponent++;
	}
	return res;
}

int main()
{
	auto res = Power(2, 3);
}