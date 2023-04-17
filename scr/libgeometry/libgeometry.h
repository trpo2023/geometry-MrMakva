#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_error(int column, int status, int is_file, FILE* file)
void to_lower_string(char* string)
void del_space(int* column, FILE* file)
double get_number(int* column, int is_file, FILE* file)
bool expect(char expect, int* column, int status, int is_file, FILE* file)
bool unexpect(char unexpect, int* column, int status, int is_file, FILE* file)
void get_point(Point* point, int* column, int is_file, FILE* file)
void end_of_line(int* column, int is_file, FILE* file)
void take_info_circle(Circle* circle, int* column, int is_file, FILE* file)
void show_info_circle(Circle* circle)
void parser_stdin(FILE* stdin)
void parser_file(FILE* file)
