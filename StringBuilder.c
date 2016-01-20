/**
 * @author       : H
 * @date         : 20/1/16
 * @functionality: Create a dynamic sized String
 */
 
 // librariee to include 
 #include <stdio.h>
 #include <stdlib.h>
 #include "StringBuilder.h"
 
// <<<<<<<<<< Methods Implementation >>>>>>>>>>>>>>>>>//
/**
 * create() - create a StringBuilder
 * @param const char* first - first character into our StringBuilder 
 * 
 * @return StringBuilder - return a reference to our new created string and NULL if an error occur.
 */
StringBuilder* create(const char first)
{
    // Create our StringBuilder and give all it's value NULL 
    StringBuilder* created = calloc(1, sizeof(StringBuilder));
    
    // Sanity Check 
    if (created == NULL)
    {
     return NULL; 
    }
    
    // a pointer to our newly created String
    StringBuilder* pointer = created; 
    
    // Add the value of our newly created String 
    pointer->character = first;
 
    // lets celebrate this with returning a reference of our string new string 
    return created; 
     
}
 
 /**
  * append() - append character to our string 
  * 
  * @param char* character - the character to append to the end of our String
  * @param StringBuilder* head - a reference to head of our string 
  */
void append(char character, StringBuilder* head)
{
    // a pointer to manipulate things
    StringBuilder* pointer = head; 
    
    // sanity check 
    if (pointer == NULL)
    {
        // this mean we didn't create a linked list 
        printf("Didn't create a StringBuilder");
        return; 
    }
    
    // lets go to the end 
    while(pointer->next != NULL)
    {
        pointer = pointer->next; 
    }
    
    // here out pointer, point to the end 
    pointer->next = calloc(1, sizeof(StringBuilder));
    
    // now the pointer to the newly added node
    pointer = pointer->next; 
    
    // add a char to this node 
    pointer->character = character;
    
}


/**
 * print_string() - print the content of our string
 * 
 * @param StringBuilder* head - a reference to our string 
 */
void print_string(StringBuilder* head)
{
    //TODO
}


/**
 * destroy() - free memory allocated by the string 
 * 
 * @param StringBuilder* head - a reference to the string we going to destroy
 */
 void destroy(StringBuilder* head)
 {
     //TODO
 }
