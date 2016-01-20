/**
 * Created 4 testing purpose
 */

// libraries to include 
#include <stdio.h>
#include <stdlib.h>
#include "StringBuilder.h"

int main(int argc,char ** argv)
{
    // sanity check 
    if (argc != 1) 
    {
        printf("./Usage: run <file_name>");
        return 1; 
    }

    // Starting the testing program
    StringBuilder* head = create('a');
    append('b', head);
    append('c', head);
    
    print_string(head);


    return 0; 
}
