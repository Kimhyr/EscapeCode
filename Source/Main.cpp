#include <stdio.h>

#include "Style.hpp"

using namespace Terminal;

int main() {
	printf("\e[%im \n", Foreground::BRIGHT_WHITE);
	getchar();
	return 0;
}
