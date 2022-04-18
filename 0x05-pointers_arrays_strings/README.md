0x05. C - Pointers, arrays and strings

Question #0
What is the size of a pointer to a char (on a 64-bit architecture)

8 bytes

Question #1
What is the size of a pointer to an int (on a 64-bit architecture)

8 bytes

Question #2
If we have a variable called var of type int, how can we get its address in memory?

&var

Question #3
What is the identifier to print an address with printf?

%p

Question #4
The process of getting the value that is stored in the memory location pointed to by a pointer is called:

Dereferencing

Question #5
Is it possible to declare a pointer to a pointer?

Yes

Question #6
What happens when one tries to access an illegal memory location?

Segmentation fault

Question #7
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

98

Question #8
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

p = 402;

98

Question #9
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

*p = 402;

402

Question #10
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

*p++;

98

Question #11
We declare the following variable

int arr[5];
What is the size in memory of the variable arr?

20 bytes

Question #12
We declare the following variable

int arr[5];
What is the equivalent of typing arr[2]?

*(arr + 2)

