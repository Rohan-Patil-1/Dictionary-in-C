//Need to follow naming convention for functions as given in dict.h header file


#include <alloca.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict.h"

#define error(args...) do { fprintf(stderr, args); exit(1); } while (0)
#define BUFLEN 1024

char* readline(FILE*);

void print_dict(const char* key, const char* val, void* arg)
{
    printf("%s:%s\n", key, val);
}

void save_dict(const char* key, const char* val, void* arg)
{
    FILE* f = (FILE*)arg;
    if (f) {
        fprintf(f, "%s:%s\n", key, val);
    } else {
        puts("No file provided for saving.");
    }
}

int main(int argc, char* argv[]) {
    dict_t* dict = dict_create();
    char* line;

    printf("> ");
    while ((line = readline(stdin)) != NULL) {
        char* command = line;
        while (*command == ' ') command++;

        printf("> ");
while ((line = readline(stdin)) != NULL) {
    char* command = line;
    while (*command == ' ') command++;

    // TODO: Implement command handling for "put" operation
    // TODO: Implement command handling for "get" operation
    // TODO: Implement command handling for "del" operation
    // TODO: Implement command handling for "clr" operation
    // TODO: Implement command handling for "siz" operation
    // TODO: Implement command handling for "dmp" operation
    // TODO: Implement command handling for "svf" operation
    // TODO: Implement command handling for "ldf" operation
    // TODO: Handle unknown commands

    free(line);
    printf("> ");
}

dict_destroy(dict);
return 0;  // Add explicit return

        free(line);
        printf("> ");
    }

    dict_destroy(dict);
    return 0;  // Add explicit return
}

char* readline(FILE* f){
    size_t alloc_size = BUFLEN;
    size_t len = 0;
    char* buffer = malloc(alloc_size);
    if(!buffer) return NULL;

    int c;
    while((c = fgetc(f)) != '\n' && c != EOF)
    {
        if (len >= alloc_size - 1)
        {
            alloc_size *= 2;
            char* new_buffer = realloc(buffer, alloc_size);
            if(!new_buffer)
            {
                free(buffer);
                return NULL;
            }
            buffer = new_buffer;
        }
        buffer[len++] = (char)c;
    }

    if(len == 0 && c == EOF)
    {
        free(buffer);
        return NULL;
    }

    buffer[len] = '\0';
    return buffer;
}
