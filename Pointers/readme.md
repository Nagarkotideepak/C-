# POINTERS
*Pointer is a Variable,used for storing the address of data*

*Variables are of two types: -*
* Data Variables
* Address Variables
## Pointers
* Pointer is a address Variable.
* It can store the address of Data
* Pointer are used for accessing heap memory
* Five Arithmetic operations are allowed Pointer
    * p++ => move pointer to next element
    * p-- => move pointer to previous element
    * p+k => gives address of kth element from pointer location to right
    * p-k gives address of kth element from pointer location left
    * q-p gives number of elements between two pointers p and q
* Pointers can be of many levels
* Double Pointer is used for accessing 2D arrays

__Pointers allow you to refer to the same space in memory from multiple locations. This means that you can update memory in one location and the change can be seen from another location in your program. You will also save space by being able to share components in your data structures.__
*Pointer helps main function of program to the heap memory(main memory uses stack memory to access pointer and pointer the access Heap).*

*File Pointer helps to access file of the disk..*

*Network connection is accessed by pointer.*

*KeyBoard,Mouse,Monitor(cout),Printer uses pointer for accessing.*

**Note:-In C#, Java, this doesnt allow to access as in C and C++ directly, it allows by JVM or through common language runtime .**
## Problems Using Pointers
1. Uninitialized pointer
2. Memory Leak
3. Dangling Pointer
### Solution 
#### For Problem 1
*1. p=&x; //pointer to existing variable.*
*2. p=(int *)0x1234; //assign to some address which is typecasted.*
*3. p=new int[5]; // heap memory*

#### For Problem 2 
*Deletion of Pointer after using and making it(assign) null or nullptr(better) or 0.*
#### For Problem 3
*Pointer was initialized in one function but was deallocated and some statement/arguement try to find that pointer. so that is to be avoided*
