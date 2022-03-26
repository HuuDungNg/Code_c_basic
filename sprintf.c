#include <stdio.h>
 
 
int main()
{
    char  buffer[78], s[] = "computer", c = 'l';
    int   i = 35, j;
    float fp = 1.7320534f;
 
    // Format and print various data: 
    j  = sprintf( buffer,     "   String:    %s\n", s ); 
    j += sprintf( buffer + j, "   Character: %c\n", c );
    j += sprintf( buffer + j, "   Integer:   %d\n", i );
    j += sprintf( buffer + j, "   Real:      %f\n", fp );
    // Note: sprintf is deprecated; consider using sprintf_s instead
 
    printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );
 
    return 0;
}