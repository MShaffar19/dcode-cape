/* 
 * File:   memory.h
 * Author: roberto
 *
 * Created on April 14, 2014, 11:54 AM
 */

#ifndef MEMORY_H
#define MEMORY_H

/**
 * The function allocates memory of size bytes
 * 
 * @param size size in bytes
 * @param file the source code file (__FILE__) or NULL to not print this info
 * @param line the source code line (__LINE__) or 0
 * @return return a pointer to the allocated memory
 */
extern void *allocate(size_t size, const char *file, int line);

/**
 * The function reallocate memory for a 
 * @param self the pointer to be reallocated
 * @param size size in bytes
 * @param file the source code file (__FILE__) or NULL to not print this info
 * @param line the source code line (__LINE__) or 0
 * @return return a pointer to the reallocated memory
 */
extern void *reallocate(void *self, size_t size, const char *file, int line);

#endif /* MEMORY_H */

