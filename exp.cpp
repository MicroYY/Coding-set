//给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。



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