#include <iostream>

int calculator() {
	char request;
	std::cout << "Choose: +, -, /, or *\n";
	std::cin >> request;
	if (request == '+') {
			double a, b, sum;
			std::cout << "Enter first digit\n";
			std::cin >> a;
			std::cout << "Enter second digit\n";
			std::cin >> b;
			sum = a + b;
			std::cout << a << request << b << '=' << sum << "\n";
}
	if (request == '-') {
			double a, b, difference;
			std::cout << "Enter first digit\n";
			std::cin >> a;
			std::cout << "Enter second digit\n";
			std::cin >> b;
			difference = a - b;
			std::cout << a << request << b << '=' << difference << "\n";
}
	if (request == '/') {
			double a, b, result;
			std::cout << "Enter numerator\n";
			std::cin >> a;
			std::cout << "Enter denominator\n";
			std::cin >> b;
			result = a / b;
			std::cout << a << request << b << '=' << result << "\n";
}
	if (request == '*') {
			double a, b, result;
			std::cout << "Enter first digit\n";
			std::cin >> a;
			std::cout << "Enter second digit\n";
			std::cin >> b;
			result = a * b;
			std::cout << a << request << b << '=' << result << "\n";
}
	return 0;
}

int main() {
	int i = 0;
	while (i < 100) {
		calculator();
		i++;
		int remaining = 100 - i;
		std::cout << remaining << "/100 uses remaining\n";
		std::cout << "Restarting calculator\n";
}
	std::cout << "Relaunch for more calculations\n";
	return 0;
}
