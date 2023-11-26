#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b) {
	if (b == NULL)
		return 0;

	unsigned int result = 0;

	while (*b != '\0') {
		if (*b == '0' || *b == '1') {
			result = result * 2 + (*b - '0');
			b++;
		} else {
			return 0;
		}
	}
	return result;
}

int main() {
	const char *binary_str = "110101";
	unsigned int result = binary_to_uint(binary_str);

	if (result == 0 && binary_str[0] != '0') {
		printf("Invalid binary string\n");
	} else {
		printf("Decimal equivalent of binary %s is %u\n", binary_str, result);
	}
	return 0;
}
