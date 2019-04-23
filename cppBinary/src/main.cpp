
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "main.h"
#include "hello.h"

int main (int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout,"%s Version %d.%d\n",
                argv[0],
                MainBinary_VERSION_MAJOR,
                MainBinary_VERSION_MINOR);
        fprintf(stdout,"Usage: %s name.\n",argv[0]);
        return 1;
    }

    std::string name = argv[1];
    std::string helloWithName = buildHello( name );
    fprintf(stdout, "%s", helloWithName.c_str() );
    return 0;
}
