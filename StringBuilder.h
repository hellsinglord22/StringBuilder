#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H


// DataType 
typedef struct SingleLinkedList
{
    char* character; 
    struct SingleLinkedList* next; 
}StringBuilder; 

// <<<<<<<<<<<<<<< METHODS PROTOTYPE >>>>>>>>>>>>>>>>>> // 
/**
 * create() - create a StringBuilder
 * @param const char* first - first character into our StringBuilder 
 * 
 * @return StringBuilder - return a reference to our new created string 
 */
 StringBuilder* create(const char* firt);
 
 /**
  * append() - append character to our string 
  * 
  * @param char* character - the character to append to the end of our String
  * @param const StringBuilder* head - a reference to head of our string 
  */
void append(char* character, const StringBuilder* head);



#endif 