//
//  copy v2.c
//  CS50
//
//  Created by Nelson Cruz on 3/5/25.
//

#include <stdio.h>
#include "stdint.h"

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./copy source destination\n");
        return 1;
    }
    
    FILE *src = fopen(argv[1], "r");
    if (!src) // Check if file opened successfully.
    {
        printf("Error: cannot open %s\n", argv[1]);
        return 1;
    }
    
    FILE *dst = fopen(argv[2], "w");
    if (!dst)
    {
        printf("Error: Cannot open %s\n", argv[2]);
        fclose(src);
        return 1;
    }
    
    BYTE b;
    
    while (fread(&b, sizeof(b), 1, src))
    {
        fwrite(&b, sizeof(b), 1, dst);
    }
    
    fclose(dst);
    fclose(src);
    
    return 0;
}
