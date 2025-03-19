//Need to follow naming convention for functions as given in dict.h header file

#include <alloca.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define error(args...) do { fprintf(stderr, args); exit(1); } while (0)
#define BUFLEN 1024
#define HASH_SIZE 1024

typedef struct dict_list {
    char* key;
    char* val;
    struct dict_list* next;
} node_t;

typedef struct {
    node_t** table;
    size_t size;
} dict_t;

unsigned int hash(const char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = hash * 31 + *key;
        key++;
    }
    return hash % HASH_SIZE;
}

dict_t* dict_create() {
    // TODO: Implement dict_create function
}

node_t* node_create(const char* key, const char* val) {
    node_t* node = malloc(sizeof(node_t));
    node->key = strdup(key);
    node->val = strdup(val);
    node->next = NULL;
    return node;
}

void node_destroy(node_t* node) {
    free(node->key);
    free(node->val);
    free(node);
}

void dict_put(dict_t* dict, const char* key, const char* val) {
    // TODO: Implement dict_put function
}

char* dict_get(const dict_t* dict, const char* key) {
    // TODO: Implement dict_get function
}

void dict_del(dict_t* dict, const char* key) {
    // TODO: Implement dict_del function
}

size_t dict_size(const dict_t* dict) {
    return dict->size;
}

void dict_clear(dict_t* dict) {
    // TODO: Implement dict_clear function
}

void dict_destroy(dict_t* dict) {
    // TODO: Implement dict_destroy function
}

void dict_apply(const dict_t* dict, void (*fun)(const char*, const char*, void*), void* arg) {
    // TODO: Implement dict_apply function
}
