#include<iostream>
#include<string>
using namespace std;
void deci_bin(int a)
{
	int index = 0;
	int b[10];
	while (a > 0)
	{
		if (a == 1)         // when a value is 1 loop becomes infinite 
		{
			b[index] = 1;
			break;
		}
		b[index] = a % 2;
		a = a / 2;
		index++;

	}
	for (int i = index;i >= 0;i--)
	{
		cout << b[i] << " ";
	}
}
void deci_octal(int a)
{
	int index = 0;
	int b[10];
	while (a > 0)
	{

		b[index] = a % 8;
		a = a / 8;
		index++;

	}
	for (int i = index - 1;i >= 0;i--)
	{
		cout << b[i] << " ";
	}
}

void deciToHex(int decimal) {
	char hex[100];                                 // Array to store hexadecimal digits
	int index = 0;                                // Index to keep track of the array

	while (decimal > 0) {
		int remainder = decimal % 16;

		if (remainder < 10) { 
			hex[index] = '0' + remainder;       // Convert remainder to character '0' to '9'
		}
		else {
			hex[index] = 'A' + (remainder - 10);  // Convert remainder to character 'A' to 'F'
		}

		decimal /= 16;
		index++;
	}

	cout << "Hexadecimal representation: ";
	for (int i = index - 1; i >= 0; i--) {
		cout << hex[i];
	}
	cout << endl;
}
// Function to convert a binary number to octal
int binaryToOctal(int binary) {
	int octal = 0, decimal = 0, base = 1;

	while (binary > 0) {
		int digit = binary % 10;
		decimal += digit * base;
		binary /= 10;
		base *= 2;
	}

	base = 1;
	while (decimal > 0) {
		int digit = decimal % 8;
		octal += digit * base;
		decimal /= 8;
		base *= 10;
	}

	return octal;
}


int binaryToDecimal(int binary) {
	int decimal = 0, base = 1;

	while (binary > 0) {
		int digit = binary % 10;
		decimal += digit * base;
		binary /= 10;
		base *= 2;
	}

	return decimal;
}

string binaryToHexadecimal(int binary)
{
	string hexadecimal = "";
	int decimal = binaryToDecimal(binary);
	int temp;

	while (decimal > 0)
	{
		temp = decimal % 16;
		if (temp < 10) {
			hexadecimal = char('0' + temp) + hexadecimal;
		}
		else {
			hexadecimal = char('A' + temp - 10) + hexadecimal;
		}
		decimal /= 16;
	}

	return hexadecimal;
}

int octalToBinary(int octal) {
	int binary = 0, decimal = 0, base = 1;

	while (octal > 0) {
		int digit = octal % 10;
		decimal += digit * base;
		octal /= 10;
		base *= 8;
	}

	base = 1;
	while (decimal > 0) {
		int digit = decimal % 2;
		binary += digit * base;
		decimal /= 2;
		base *= 10;
	}

	return binary;
}


int octalToDecimal(int octal) {
	int decimal = 0, base = 1;

	while (octal > 0) {
		int digit = octal % 10;
		decimal += digit * base;
		octal /= 10;
		base *= 8;
	}

	return decimal;
}


std::string octalToHexadecimal(int octal) {
	int decimal = octalToDecimal(octal);
	std::string hexadecimal = "";
	int temp;

	while (decimal > 0) {
		temp = decimal % 16;
		if (temp < 10) {
			hexadecimal = char('0' + temp) + hexadecimal;
		}
		else {
			hexadecimal = char('A' + temp - 10) + hexadecimal;
		}
		decimal /= 16;
	}

	return hexadecimal;
}
int main()
{
	
	int choice;
	int number;

	cout << "Select a conversion \n (1 for Octal-binary \n  2 for octal- Decimal \n 3 for octal-Hexadecimal " << endl;
	cout << "4 for  binary-Octal \n 5 for binary - Decimal \n 6 for binary-Hexadecimal \n " << endl;
	cout << "7 for  decimal-binary \n 8 for decimal - octal \n  9 for decimal to hexadecimal \n " << endl;

	cin >> choice;
	cout << "Enter the number: ";
	cin >> number;

	switch (choice) {
	case 1:
		std::cout << "Binary: " << octalToBinary(number) << std::endl;
		break;
	case 2:
		std::cout << "Decimal: " << octalToDecimal(number) << std::endl;
		break;
	case 3:
		std::cout << "Hexadecimal: 0x" << octalToHexadecimal(number) << std::endl;
		break;

	case 4:
		cout << "Octal: " << binaryToOctal(number ) << endl;
		break;
	case 5:
		cout << "Decimal: " << binaryToDecimal(number) << endl;
		break;
	case 6:
		cout << "Hexadecimal:  " << binaryToHexadecimal(number) << endl;
		break;
	case 7:
		cout << "binary value :  " << endl;
		deci_bin(number);
		break;
	case 8:
		cout << "octal  value :  " << endl;
		deci_octal(number);
		break;
	case 9:
		cout << "hexa decimal  value :  " << endl;
		deciToHex(number);
		break;
	default:
		std::cerr << "Invalid choice. Please select 1, 2, 3, 4, 5,6,7,8 or 9" << std::endl;
		break;



	

		return 0;
	}
}


