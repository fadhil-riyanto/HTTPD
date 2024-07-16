#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "server.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

static int getopt_parse(struct server_prop *p, 
                        int argc, char *argv[])
{
        int c;

        while ((c = getopt (argc, argv, "a:")) != -1) {
                switch (c) {
                case 'a':
                        printf("opt %s", optarg);
                        break;
                }
        }
    

        return 0;
}

int main(int argc, char *argv[])
{
        struct server_prop server_prop;

        return getopt_parse(&server_prop, argc, argv);
}

