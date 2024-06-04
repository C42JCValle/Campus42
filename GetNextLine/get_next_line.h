#ifndef GET_NEXT_LINE_H                 //if not defined
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 900

char *get_next_line (int fd);
 #endif
#endif

   // if not defined

