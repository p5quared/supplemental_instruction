## Topics:
- [x]  Stack vs Heap
- [x]  The 'new' operator
- [x]  Constructors
- [x]  Destructors
- [ ]  Linked-Lists
- [ ]  file operation functions like 'seekg' and 'seekp'



### Stack vs Heap

Stack:
* Anything declared without the 'new' operator is stored on the stack
* Stack memory is automatically freed when the function returns
* Stack memory is also freed when leaving scope


Heap:
* Anything declared with the 'new' operator is stored on the heap
* "More long term"
* Must be manually freed with the 'delete' operator