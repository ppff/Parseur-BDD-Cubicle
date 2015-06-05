#ifndef CUB_PARSER_H
#define CUB_PARSER_H

/**
 *
 * In order to use the CUB_parser_parse_file function,
 * you need to implement this header in CUB_parser_def.h:
 *
 * #include <stdint.h>
 * #include <stdbool.h>
 *
 * bool CUB_parser_get_next_line(char buff[64], void *arg);
 * void CUB_parser_list_add(void *list, uint32_t x, uint32_t y, uint32_t z);
 *
 *
 * Usage example:
 * list *l;
 * list_init(l);
 * FILE *f = fopen(filename);
 * int status = CUB_parser_parse_file(list, f);
 * fclose(file);
 */


#include "CUB_parser_def.h"
#define MAX_SUPPORTED_VERSION 1

int CUB_parser_parse_file(void *CUB_parser_get_next_line_arg, void *list_add_arg);

#endif
