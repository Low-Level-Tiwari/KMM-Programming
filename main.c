#include "editor.h"

void main()
{
	char fname[] = "test.txt";
	file.build = Build;
	file.build(fname);

	file.view();
}
