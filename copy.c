/*******************************************************************************
 * File: copy.c
 * Created: 2022-08-03
 * 
 * Authors: 
 *   Tyler Matijevich
 * 
 * License:
 *   This file copy.c is part of the IecString project 
 *   released under the MIT license agreement.
 ******************************************************************************/

#ifndef IECSTRING_STANDALONE
#include <IecString.h>
#else
#include "type.h"
#endif
#include <stdint.h>
#include <string.h>

/* Copy source to destination up to size of destination or source length */
int32_t IecStringCopy(char *destination, uint32_t size, char *source) {
    
#ifndef IECSTRING_NOCHECK
    /* Gaurd null pointers */
    if (!destination || !source)
        return IECSTRING_ERROR_NULL;
    
    /* Check for zero size */
    if (!size)
        return IECSTRING_ERROR_SIZE;
    
    /* Check if source overlaps destination size */
    if (destination <= source && source < destination + size)
        return IECSTRING_ERROR_OVERLAP;

    /* Check if destination overlaps source length */
    if (source <= destination && destination <= source + strlen(source))
        return IECSTRING_ERROR_OVERLAP;
#endif
    
    /* Decrement size first to ensure byte for null terminator */
    /* Copy characters */
    while (--size && *source)
        *destination++ = *source++;
    
    /* Add null terminator */
    *destination = '\0';
    
    /* Output is truncated is source characters remain after
    writing size bytes to desitnation */
    return IECSTRING_WARNING_TRUNCATE * (*source && !size);
}

/* Copy without safety checks for private use */
char* FastCopy(char *destination, uint32_t size, char *source) {
    /* Skip:
       - Null pointer checks
       - Destination size check
       - Memory overlap check
       - Truncation warning check
    */
    
    /* Copy and decrement size first to ensure byte for null terminator */
    while (--size && *source != '\0')
        *destination++ = *source++;
    
    /* Null terminator */
    *destination = '\0';
    return destination;
}
