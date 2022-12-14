# 0x13. C - More singly linked lists

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
How to use linked lists

## Requirements

## General

- Allowed editors: vi, vim, emacs. 
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89. 
- All your files should end with a new line. 
- A README.md file, at the root of the folder of the project is mandatory. 
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl. 
- You are not allowed to use global variables. 
- No more than 5 functions per file. 
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden. 
- You are allowed to use \_putchar. 
- You don’t have to push \_putchar.c, we will use our file. If you do it won’t be taken into account 
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will   use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples. 
- The prototypes of all your functions and the prototype of the function \_putchar should be included in your header file called lists.h 
- Don’t forget to push your header file 
- All your header files should be include guarded 


## Tasks

### Task 0
Repo:

- **GitHub repository**: alx-low\_level\_programming. 
- **Directory**: 0x13-more\_singly\_linked\_lists. 
- **File**: 0-print\_listint.c. 

Write a function that prints all the elements of a listint\_t list. 

- **Prototype**: size\_t print\_listint(const listint\_t \*h)  
- **Return**: the number of nodes.  
- **Format**: see example.  
- You are allowed to use printf.  
	
### Task 1

Repo: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 1-listint\_len.c 

Write a function that returns the number of elements in a linked listint\_t list. 

- **Prototype**: size\_t listint\_len(const listint\_t \*h); 

### Task 2

Repo: 

**GitHub repository**: alx-low\_level\_programming 
**Directory**: 0x13-more\_singly\_linked\_lists 
**File**: 2-add\_nodeint.c 


### Task 3

Repo: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 3-add\_nodeint\_end.c 

Write a function that adds a new node at the end of a listint\_t list. 

- **Prototype**: listint\_t \*add\_nodeint\_end(listint\_t \*\*head, const int n); 
- **Return**: the address of the new element, or NULL if it failed 

### Task 4

Repo:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 4-free\_listint.c 

Write a function that frees a listint\_t list. 

- **Prototype**: void free\_listint(listint\_t \*head); 

### Task 5

Repo: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 5-free\_listint2.c 

Write a function that frees a listint\_t list. 

- **Prototype**: void free\_listint2(listint\_t \*\*head); 
- The function sets the head to NULL 

### Task 6

Repo: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 6-pop\_listint.c 

Write a function that deletes the head node of a listint\_t linked list, and returns the head node’s data (n). 

- **Prototype**: int pop\_listint(listint\_t \*\*head); 
- if the linked list is empty return 0 

### Task 7

Repo: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 7-get\_nodeint.c 

Write a function that returns the nth node of a listint\_t linked list. 

- **Prototype**: listint\_t \*get\_nodeint\_at\_index(listint\_t \*head, unsigned int index); 
- where index is the index of the node, starting at 0 
- if the node does not exist, return NULL 

### Task 8

Repo: 

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 8-sum\_listint.c  

Write a function that returns the sum of all the data (n) of a listint\_t linked list. 

- **Prototype**: int sum\_listint(listint\_t \*head); 
- if the list is empty, return 0 


### Task 9

Repo:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 9-insert\_nodeint.c 

Write a function that inserts a new node at a given position. 

- **Prototype**: listint\_t \*insert\_nodeint\_at\_index(listint\_t \*\*head, unsigned int idx, int n); 
- where idx is the index of the list where the new node should be added. Index starts at 0 
- **Returns**: the address of the new node, or NULL if it failed 
- if it is not possible to add the new node at index idx, do not add the new node and return NULL 

### Task 10

Repo:

- **GitHub repository**: alx-low\_level\_programming 
- **Directory**: 0x13-more\_singly\_linked\_lists 
- **File**: 10-delete\_nodeint.c 

Write a function that deletes the node at index index of a listint\_t linked list. 

- **Prototype**: int delete\_nodeint\_at\_index(listint\_t \*\*head, unsigned int index); 
- where index is the index of the node that should be deleted. Index starts at 0 
- **Returns**: 1 if it succeeded, -1 if it failed 

### Task 11
### Task 12
### Task 13
### Task 14

