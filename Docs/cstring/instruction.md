# CSTRING
By Default C did not have ***string*** data type(*keyword*) though we can can use charecter array easily.But just to make it easy to eye I added string data type(*keyword*) in this library with some extra features. :relieved:

### How to declear :
You can declear it just how you declear a variabel for an example look bellow :
``` string my_variable; ```

### function str_len(__s)
    size = str_len(my_variable);
This function return the size of your *string* variabel

### function str_setsize(__s, __size)
    str_setsize(my_varaibel, 10);
set the size in the memory for your string variabel can be used in some areas

### function str_reallocsize(__s, __size)
    str_reallocsize(my_varaibel, 20);
May be in some certain condition you want to increase the size of you string variable this function can be helpful

### function str_resize(__s)
    str_resize(my_varaibel);
This function fit the size of the string according to how much data it have

# OTHER
[Learn about bool](../cbool/instruction.md) :relieved: <br> 
[Learn about Linked List](../linkedlist/instruction.md) :relieved: