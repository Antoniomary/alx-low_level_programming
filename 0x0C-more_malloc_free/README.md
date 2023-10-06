# 0x0C-more_malloc_free
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General
- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them
## Tasks
### [0. Trust no one](0-malloc_checked.c)
Write a function that allocates memory using malloc.
* Prototype: void *malloc_checked(unsigned int b);
* Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
### [1. string_nconcat](1-string_nconcat.c)
Write a function that concatenates two strings.
* Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string
### [2. _calloc](2-calloc.c)
Write a function that allocates memory for an array, using malloc.
* Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL
