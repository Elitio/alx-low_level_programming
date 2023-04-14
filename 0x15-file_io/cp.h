#ifndef CP_H
#define CP_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int cp(const char *file_from, const char *file_to);

#endif /* CP_H */

