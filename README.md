# Dictionary-in-C

A simple dictionary implementation in C using a hash table with chaining.


## System Details

OS: OracleLinux 8.10 x86_64

CPU Model: Intel(R) Xeon(R) Gold 6134 CPU @ 3.20GHz

vCPU Count: 2

RAM: 4 GB


## Features

 • Add key-value pairs (put)
  
 • Retrieve values (get)
  
 • Delete keys (del)
  
 • Clear dictionary (clr)
  
 • Get dictionary size (siz)
  
 • Dump dictionary contents (dmp)
  
 • Save dictionary to file (svf)
  
 • Load dictionary from file (ldf)


## Files

• dict.c - Implementation of the dictionary functions

• dict.h - Header file for dictionary operations

• main.c - Main program to interact with the dictionary


## Compilation

To compile the program, use:

 ``` _gcc -o dictionary main.c dict.c_ ```
 

## Usage

Run the program:

 ``` ./dictionary ```
 

### Commands:

• put <key>:<value> - Adds or updates a key-value pair.

• get <key> - Retrieves the value for a key.

• del <key> - Deletes a key-value pair.

• clr - Clears the dictionary.

• siz - Displays the number of stored key-value pairs.

• dmp - Dumps dictionary contents.

• svf <filename> - Saves dictionary to a file.

• ldf <filename> - Loads dictionary from a file.


## Example Usage

```
> put name:John
> get name
John
> siz
1
> dmp
BEGIN_DUMP
name:John
END_DUMP
> del name
> siz
0
```


## Memory Management

• dict_create() initializes a dictionary.

• dict_destroy() frees allocated memory.


## License

MIT License

