#ifndef CUSTOM_MAIN_H
#define CUSTOM_MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t custom_read_textfile(const char *filename, size_t letters);
int custom_create_file(const char *filename, char *text_content);
int custom_append_text_to_file(const char *filename, char *text_content);

#endif
