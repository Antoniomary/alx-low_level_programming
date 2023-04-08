# 0x09. C - Static libraries
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm
### Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.
## Tasks
### [0. A library is not a luxury but one of the necessities of life](libmy.a)
Create the static library libmy.a containing all the functions listed below:
1. int _putchar(char c);
2. int _islower(int c);
3. int _isalpha(int c);
4. int _abs(int n);
5. int _isupper(int c);
6. int _isdigit(int c);
7. int _strlen(char *s);
8. void _puts(char *s);
9. char *_strcpy(char *dest, char *src);
10. int _atoi(char *s);
11. char *_strcat(char *dest, char *src);
12. char *_strncat(char *dest, char *src, int n);
13. char *_strncpy(char *dest, char *src, int n);
14. int _strcmp(char *s1, char *s2);
15. char *_memset(char *s, char b, unsigned int n);
16. char *_memcpy(char *dest, char *src, unsigned int n);
17. char *_strchr(char *s, char c);
18. unsigned int _strspn(char *s, char *accept);
19. char *_strpbrk(char *s, char *accept);
20. char *_strstr(char *haystack, char *needle);
### 1. [Without libraries what have we? We have no past and no future](create_static_lib.sh)
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
