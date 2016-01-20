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
 
 

#endif 