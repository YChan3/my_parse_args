#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
	char ** args = calloc(sizeof(char*), 25);
  int i = 0;

  line = strdup(line);

	while(args[i] = strsep(&line, " "))
	{
		i++;
	}

  return args;
}

int main(){
  printf("Args: ls -a -l -r -t\n");
	char ** args = parse_args("ls -a -l -r -t");
	execvp(args[0], args);

  return 0;
}
