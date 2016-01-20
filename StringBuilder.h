#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H


// DataType 
typedef struct SingleLinkedList
{
    char character; 
    struct SingleLinkedList* next; 
}StringBuilder; 

// <<<<<<<<<<<<<<< METHODS PROTOTYPE >>>>>>>>>>>>>>>>>> // 
/**
 * create() - create a StringBuilder
 * @param const char* first - first character into our StringBuilder 
 * 
 * @return StringBuilder - return a reference to our new created string 
 */
 StringBuilder* create(const char firt);
 
 /**
  * append() - append character to our string 
  * 
  * @param char* character - the character to append to the end of our String
  * @param StringBuilder* head - a reference to head of our string 
  */
void append(char character, StringBuilder* head);


/**
 * print_string() - print the content of our string
 * 
 * @param StringBuilder* head - a reference to our string 
 */
void print_string(StringBuilder* head);


/**
 * destroy() - free memory allocated by the string 
 * 
 * @param StringBuilder* head - a reference to the string we going to destroy
 */
 void destroy(StringBuilder* head);




#endif 