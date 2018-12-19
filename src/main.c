#include "Comp195Config.h"

int usage(int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stdout, "%s Version %d.%d\n",
			argv[0],
			Comp195_VERSION_MAJOR,
			Comp195_VERSION_MINOR);

		fprintf(stdout, "Usage: %s TODO", argv[0]);
	}

	return 0;
}

int main(int argc, char *argv[]) {

	usage(argc, argv[]);

	return 0;
}
