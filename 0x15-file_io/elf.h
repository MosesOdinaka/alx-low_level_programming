#ifndef _ELF_H_
#define _ELF_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *me_ident);
void print_magic(unsigned char *me_ident);
void print_class(unsigned char *me_ident);
void print_data(unsigned char *me_ident);
void print_version(unsigned char *me_ident);
void print_abi(unsigned char *me_ident);
void print_osabi(unsigned char *me_ident);
void print_type(unsigned int me_type, unsigned char *me_ident);
void print_entry(unsigned long int me_entry, unsigned char *me_ident);
void close_elf(int elf);

#endif
