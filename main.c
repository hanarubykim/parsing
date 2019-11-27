#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char *line){
  char ** args = malloc(5 * sizeof(char));
  int i = 0;
  while(line){
    args[i] = strsep(&line, " ");
    i++;
  }
  return args;
}

int main(int argc, char *argv[]){
  char toad[100];
  char *toadP = toad;
  if (argc <= 1){
    printf("Program invocation: ");
    fgets(toadP, 100, stdin);
    toadP[strlen(toadP) - 1] = '\0';
  }
  else{
    strcpy(toadP, argv[1]);
  }

  int i = 0;
  char ** args = parse_args(toadP);
  //execvp(args[0], args);
}
