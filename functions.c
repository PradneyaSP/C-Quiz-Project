#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "Headers/global.h"
#include "Headers/functions.h"

C_Programming p1;
Engineering_Visualisation e1;
Data_Structure d1;
Computer_Systems c1;
System_Programming s1;
General g1;
Question q;

int Guess;
int Total;
int Life1;
int Life2;
double elapsed;
double time_taken;

time_t start_time, end_time;

int questions[10];

void setValues(Question *q, char qt[], char a1[], char a2[], char a3[], char a4[], int ca, int pa, int s1, int s2, char h[])
{
    strcpy(q->Question_Text, qt);
    strcpy(q->Option_1, a1);
    strcpy(q->Option_2, a2);
    strcpy(q->Option_3, a3);
    strcpy(q->Option_4, a4);
    q->Correct_Answer = ca;
    q->Question_Score = pa;
    q->show1 = s1;
    q->show2 = s2;
    strcpy(q->Hint, h);
}

void setQuestions(int n)
{
    switch (n)
    {
    case 1:
        setValues(&p1.p_q[0], "Which of the following is the correct syntax to declare a variable in C?", "1) int variableName;", "2) variableName int;", "3) var variableName;", "4) variableName = int;", 1, 10, 1, 3, "The data type is usually mentioned before the variable name in C.");
        setValues(&p1.p_q[1], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nprintf(\"%d\", sizeof(float));\nreturn 0;\n}", "1) 4", "2) 8", "3) 2", "4) Compiler Error", 1, 10, 1, 4, "The sizeof operator returns the size in bytes of a data type.");
        setValues(&p1.p_q[2], "Which of the following is NOT a valid identifier in C?", "1) myVariable", "2) _variable", "3) 123variable", "4) variable123", 3, 10, 2, 3, "An identifier cannot start with a digit.");
        setValues(&p1.p_q[3], "What is the purpose of the \"break\" statement in C?", "1) To exit the current loop or switch statement", "2) To skip the current iteration of a loop", "3) To continue to the next iteration of a loop", "4) To print a line break in the output", 1, 10, 1, 3, "The \"break\" statement is used to terminate the execution of a loop or switch statement.");
        setValues(&p1.p_q[4], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 5;\nprintf(\"%d\", ++x);\nreturn 0;\n}", "1) 4", "2) 5", "3) 6", "4) Compiler Error", 3, 10, 2, 3, "The prefix increment operator (++x) increments the value of x before it is used in the printf statement.");
        setValues(&p1.p_q[5], "Which of the following is the correct way to define a constant in C?", "1) constant int PI = 3.14;", "2) const int PI = 3.14;", "3) #define PI 3.14", "4) Both 2) and 3)", 4, 10, 2, 4, "Constants can be defined using either the \"const\" keyword or the preprocessor directive \"#define\".");
        setValues(&p1.p_q[6], "What is the purpose of the \"sizeof\" operator in C?", "1) To calculate the size of a data type", "2) To calculate the sum of two numbers", "3) To determine if a variable is initialized", "4) To convert one data type to another", 1, 10, 1, 4, "The \"sizeof\" operator returns the size in bytes of a data type or variable.");
        setValues(&p1.p_q[7], "Which of the following is the correct way to read a character from the user in C?", "1) scanf(\"%c\", &ch);", "2) scanf(\"%s\", &ch);", "3) scanf(\"%d\", &ch);", "4) getchar(ch);", 1, 10, 1, 2, "The \"%c\" format specifier is used to read a character, and the \"&\" operator is used to get the address of the variable.");
        setValues(&p1.p_q[8], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 10;\nint y = 5;\nprintf(\"%d\", x > y ? x : y);\nreturn 0;\n}", "1) 10", "2) 5", "3) 15", "4) Compiler Error", 1, 10, 1, 3, "The ternary operator (?:) returns the value of x if x > y, otherwise it returns the value of y.");
        setValues(&p1.p_q[9], "What is the purpose of the \"continue\" statement in C?", "1) To exit the current loop", "2) To skip the remaining code in the current iteration ", "3) To return a value from a function", "4) To transfer control to another part of the program", 2, 10, 2, 4, "The \"continue\" statement is used to skip the remaining code in a loop and move to the next iteration.");
        setValues(&p1.p_q[10], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 10;\nint y = 5;\nprintf(\"%d\", x & y);\nreturn 0;\n}", "1) 10", "2) 5", "3) 15", "4) 0", 4, 10, 2, 4, "The bitwise AND operator (&) performs a bitwise AND operation on the binary representations of x and y.");
        setValues(&p1.p_q[11], "Which of the following is the correct way to define a function in C?", "1) functionName;", "2) functionName();", "3) functionName() {}", "4) function functionName() {}", 3, 10, 2, 3, "A function definition consists of the return type, function name, parentheses, and function body enclosed in curly braces.");
        setValues(&p1.p_q[12], "What is the purpose of the \"strcpy\" function in C?", "1) To concatenate two strings", "2) To compare two strings", "3) To copy one string to another", "4) To convert a string to uppercase", 3, 10, 3, 1, "The \"strcpy\" function is used to copy the contents of one string to another.");
        setValues(&p1.p_q[13], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nchar str[] = \"Hello\";\nprintf(\"%c\", str[3]);\nreturn 0;\n}", "1) H", "2) e", "3) l", "4) l", 4, 10, 1, 4, "Arrays in C are zero-indexed, so str[3] represents the fourth character in the array.");
        setValues(&p1.p_q[14], "What is the purpose of the \"scanf\" function in C?", "1) To print output to the console", "2) To read input from the user", "3) To format strings", "4) To perform mathematical calculations", 2, 10, 2, 3, "The \"scanf\" function is used to read input from the user based on the specified format.");
        setValues(&p1.p_q[15], "What is the output of the following code snippet?\n#include <stdio.h>\nint main() {\nint x = 5;\nint y = 2;\nprintf(\"%d\", x / y);\nreturn 0;\n}", "1) 2.5", "2) 2", "3) 2.0", "4) Compiler Error", 2, 10, 2, 3, "The division operator (/) performs integer division, which truncates the decimal part of the result.");
        setValues(&p1.p_q[16], "Which of the following is the correct syntax to define a structure in C?", "1) struct MyStruct { int x; };", "2) MyStruct { int x; };", "3) structure MyStruct { int x; };", "4) MyStruct = structure { int x; }", 1, 10, 1, 4, "The keyword \"struct\" is used to define a structure, followed by the structure name and the definition inside curly braces.");
        setValues(&p1.p_q[17], "What is the purpose of the \"fwrite\" function in C?", "1) To write data to a file", "2) To read data from a file", "3) To copy a file", "4) To delete a file", 1, 10, 1, 2, "The \"fwrite\" function is used to write data from memory to a file.");
        setValues(&p1.p_q[18], " What is the purpose of the \"malloc\" function in C?", "1) To allocate memory for an array", "2) To deallocate memory", "3) To compare two strings", "4) To copy one string to another", 1, 10, 1, 3, "The \"malloc\" function is used to dynamically allocate memory during runtime.");
        setValues(&p1.p_q[19], "Which of the following is the correct way to access the value of a structure member in C?", "1) structureName.memberName", "2) structureName->memberName", "3) structureName[memberName]", "4) structureName.memberName()", 2, 10, 2, 4, "The arrow operator (->) is used to access structure members when using a pointer to the structure.");
        setValues(&p1.p_q[20], "What is the purpose of the \"fclose\" function in C?", "1) To open a file", "2) To write data to a file", "3) To close a file", "4) To delete a file", 3, 10, 1, 3, "The \"fclose\" function is used to close an open file.");
        setValues(&p1.p_q[21], "Which of the following is the correct way to define a constant pointer in C?", "1) const int *ptr;", "2) int *const ptr;", "3) const int *const ptr;", "4) All of the above", 4, 10, 2, 4, "Constants can be applied to the pointer, the pointed-to value, or both.");
        setValues(&p1.p_q[22], "What is the purpose of the \"strcmp\" function in C?", "1) To concatenate two strings", "2) To compare two strings", "3) To copy one string to another", "4) To convert a string to uppercase", 2, 10, 1, 2, "The \"strcmp\" function is used to compare two strings lexicographically.");
        setValues(&p1.p_q[23], "Which of the following is the correct syntax to define a two-dimensional array in C?", "1) int array[rows][columns];", "2) int array[columns][rows];", "3) int array[rows, columns];", "4) int array[columns, rows];", 1, 10, 1, 3, "The number of rows is mentioned first, followed by the number of columns.");
        setValues(&p1.p_q[24], "What is the purpose of the \"fprintf\" function in C?", "1) To read input from a file", "2) To write formatted output to a file", "3) To copy a file", "4) To delete a file", 2, 10, 2, 3, "The \"fprintf\" function is used to write formatted data to a file.");

        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            askQuestion(&p1.p_q[questions[i]]);
            end_time = time(NULL);
            elapsed = difftime(end_time, start_time);
            printf("Time taken: %.2f seconds\n", elapsed);

            printf("\bPress Enter to Continue.");
            getchar();
            getchar();
            time_taken += elapsed;
            system("cls");
        }

        printf("The Total Score is %d out of 100.\n", Total);

        FILE *file_1 = fopen("Scores\\scores_P.txt", "a");
        setScore(file_1, Total, Name);
        fclose(file_1);

        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        setValues(&d1.d_q[0], "Which data structure is based on the \"First-In-First-Out\" (FIFO) principle?", "1) Stack", "2) Queue", "3) Heap", "4) Linked List", 2, 10, 2, 4, "Think about the order in which elements are accessed or removed from the structure.");
        setValues(&d1.d_q[1], "Which sorting algorithm has a worst-case time complexity of O(n^2)?", "1) Merge Sort", "2) Quick Sort", "3) Insertion Sort", "4) Heap Sort", 3, 10, 3, 1, "Consider the sorting algorithms that involve comparing and swapping elements.");
        setValues(&d1.d_q[2], "What is the time complexity of searching for an element in a balanced binary search tree?", "1) O(n)", "2) O(log n)", "3) O(n log n)", "4) O(1)", 2, 10, 2, 3, "Think about the property that makes a binary search tree balanced.");
        setValues(&d1.d_q[3], "Which data structure is efficient for implementing a LIFO (Last-In-First-Out) order of elements?", "1) Queue", "2) Array", "3) Linked List", "4) Stack", 4, 10, 4, 1, "Consider the order in which elements are accessed or removed from the structure.");
        setValues(&d1.d_q[4], "What is the worst-case time complexity of the quicksort algorithm?", "1) O(n)", "2) O(log n)", "3) O(n^2)", "4) O(n log n)", 3, 10, 3, 2, "Consider the best and worst-case scenarios for quicksort.");
        setValues(&d1.d_q[5], "Which data structure uses a \"hash function\" for efficient insertion and retrieval of elements?", "1) Queue", "2) Heap", "3) Hash Table", "4) Binary Search Tree", 3, 10, 3, 1, "Think about the mechanism that allows constant-time access to elements.");
        setValues(&d1.d_q[6], "Which searching algorithm requires a sorted array as input?", "1) Linear Search", "2) Binary Search", "3) Depth-First Search", "4) Breadth-First Search", 2, 10, 2, 4, "Consider the algorithm that divides the search space in half at each step.");
        setValues(&d1.d_q[7], "Which data structure represents a hierarchical relationship between elements?", "1) Graph", "2) Linked List", "3) Tree", "4) Stack)", 3, 10, 3, 1, "Think about the structure that consists of nodes with parent-child relationships.");
        setValues(&d1.d_q[8], "Which algorithm is used to find the shortest path between two vertices in a weighted graph?", "1) Depth-First Search", "2) Breadth-First Search", "3) Dijkstra's Algorithm", "4) Bellman-Ford Algorithm", 3, 10, 3, 2, "Consider the algorithm that takes edge weights into account.");
        setValues(&d1.d_q[9], "Which data structure provides constant-time insertion, deletion, and retrieval of the minimum and maximum elements?", "1) Heap", "2) Queue", "3) Stack", "4) Linked List", 1, 10, 1, 3, "Think about the structure that maintains the order of elements based on their priority.");
        setValues(&d1.d_q[10], "Which data structure is used to implement a breadth-first search (BFS) traversal of a graph?", "1) Queue", "2) Stack", "3) Heap", "4) Linked List", 1, 10, 1, 4, "Think about the order in which vertices are processed in BFS.");
        setValues(&d1.d_q[11], "Which algorithm is used to find the minimum spanning tree in a connected, weighted graph?", "1) Depth-First Search", "2) Breadth-First Search", "3) Prim's Algorithm", "4) Kruskl's Algorithm)", 3, 10, 3, 1, "Consider the algorithm that greedily selects the minimum weight edges.");
        setValues(&d1.d_q[12], "What is the time complexity of searching for an element in a hash table in the average case?", "1) O(1)", "2) O(n)", "3) O(log n)", "4) O(n log n))", 1, 10, 1, 3, "Think about the efficiency of the hash function and collision resolution technique.");
        setValues(&d1.d_q[13], "Which data structure is best suited for implementing a priority queue?", "1) Stack", "2) Linked List", "3) Heap", "4) Queue", 3, 10, 3, 4, "Consider the data structure that efficiently supports extracting the highest priority element.");
        setValues(&d1.d_q[14], ".What is the time complexity of merging two sorted arrays of sizes n and m, respectively?", "1) O(n)", "2) O(m)", "3) O(n + m)", "4) O(n * m)", 3, 10, 3, 1, "Think about the number of comparisons required to merge the arrays.");
        setValues(&d1.d_q[15], "Which algorithm is used to find the longest increasing subsequence in an array?", "1) Dijkstra's Algorithm", "2) Bellman-Ford Algorithm", "3) Prim's Algorithm", "4) Dynamic Programming", 4, 10, 4, 1, "Consider the approach that breaks down the problem into smaller subproblems.");
        setValues(&d1.d_q[16], "Which data structure is used to implement undo-redo functionality in a text editor?", "1) Queue", "2) Stack", "3) Heap", "4) Linked List", 2, 10, 2, 3, "Think about the order in which operations need to be performed for undo-redo.");
        setValues(&d1.d_q[17], "What is the time complexity of performing a matrix multiplication of two n x n matrices using the standard algorithm?", "1) O(1)", "2) O(n)", "3) O(n^2)", "4) O(n^3)", 4, 10, 4, 3, "Think about the number of multiplications required for each entry in the resulting matrix.");
        setValues(&d1.d_q[18], "Which algorithm is used to find the maximum flow in a network?", "1) Depth-First Search", "2) Breadth-First Search", "3) Dijkstra's Algorithm", "4) Ford-Fulkerson Algorithm", 4, 10, 4, 1, "Consider the algorithm that repeatedly augments the flow along the path.");
        setValues(&d1.d_q[19], "Which data structure is used to implement the undo operation in a text editor?", "1) Stack", "2) Queue", "3) Linked List", "4) Heap", 1, 10, 1, 3, "Think about the data structure that stores unique elements and supports efficient membership checking.");
        setValues(&d1.d_q[20], "Which algorithm is used to find the strongly connected components in a directed graph?", "1) Breadth-First Search", "2) Depth-First Search", "3) Dijkstra's Algorithm", "4) Kruskal's Algorithm", 2, 10, 2, 4, "Consider the algorithm that explores the graph by traversing through its vertices.");
        setValues(&d1.d_q[21], "Which data structure is used to efficiently check if an element is present or not?", "1) Queue", "2) Stack", "3) Set", "4) Linked List", 3, 10, 3, 4, "Think about the data structure that stores unique elements and supports efficient membership checking.");
        setValues(&d1.d_q[22], "What is the time complexity of a balanced binary search tree's operations in the worst case?", "1) O(n)", "2) O(log n)", "3) O(n log n)", "4) O(1)", 2, 10, 2, 4, "Think about the height of a balanced binary search tree.");
        setValues(&d1.d_q[23], "Which data structure is used to implement the call stack in most programming languages?", "1) Queue", "2) Stack", "3) Heap", "4) Linked List", 2, 10, 2, 1, "Think about the Last-In-First-Out (LIFO) property required for function calls.");
        setValues(&d1.d_q[24], "What is the time complexity of the radix sort algorithm?", "1) O(n)", "2) O(n^2)", "3) O(kn)", "4) O(n log n)", 3, 10, 3, 4, "Think about the number of passes required for sorting the digits.");
        setValues(&d1.d_q[25], "Which data structure is used to implement the backtracking algorithm?", "1) Queue", "2) Stack", "3) Heap", "4) Linked List", 2, 10, 2, 4, "Think about the Last-In-First-Out (LIFO) property required for backtracking.");

        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            askQuestion(&d1.d_q[questions[i]]);
            end_time = time(NULL);
            elapsed = difftime(end_time, start_time);
            printf("Time taken: %.2f seconds\n", elapsed);
            time_taken += elapsed;
            printf("\bPress Enter to Continue.");
            getchar();
            getchar();

            system("cls");
        }

        printf("The Total Score is %d out of 100.\n", Total);

        FILE *file_4 = fopen("Scores\\scores_D.txt", "a");
        setScore(file_4, Total, Name);
        fclose(file_4);
        
        break;
    case 5:
        setValues(&s1.s_q[0], "What is the primary purpose of a compiler?", "1) Execute programs", "2) Interpret source code", "3) Translate source code to machine code", "4) Debug programs", 3, 10, 3, 4, "A compiler converts high-level programming languages into low-level machine code.");
        setValues(&s1.s_q[1], "What is the purpose of the lexical analysis phase in a compiler?", "1) Performs syntax checking", "2) Builds the symbol table", "3) Breaks the source code into tokens", "4) Generates optimized code", 3, 10, 3, 1, "Lexical analysis scans the source code and breaks it into meaningful units called tokens.");
        setValues(&s1.s_q[2], "What is the purpose of the semantic analysis phase in a compiler?", "1) Checks for syntax errors", "2) Generates intermediate code", "3) Resolves variable references and enforces language semantics", "4) Performs optimization", 3, 10, 3, 1, "Semantic analysis ensures that the program adheres to the rules and constraints of the programming language.");
        setValues(&s1.s_q[3], "Which optimization technique reduces the number of memory accesses in a program?", "1) Loop unrolling", "2) Common subexpression elimination", "3) Dead code elimination", "4) Register allocation", 1, 10, 1, 2, "Loop unrolling reduces the overhead of loop control and memory accesses by duplicating loop iterations.");
        setValues(&s1.s_q[4], "What is the purpose of the semantic analysis phase in a compiler?", "1) Checks for syntax errors", "2) Generates intermediate code", "3) Resolves variable references and enforces language semantics", "4) Performs optimization", 3, 10, 3, 4, "Semantic analysis ensures that the program adheres to the rules and constraints of the programming language.");
        setValues(&s1.s_q[5], "which of the following is an example of a top-down parsing technique?", "1) Recursive Descent", "2) LR Parsing", "3) LALR Parsing", "4) Shift-Reduce Parsing", 1, 10, 1, 2, "Recursive Descent is a top-down parsing technique where each non-terminal in the grammar has a corresponding parsing function.");
        setValues(&s1.s_q[6], "What does the acronym \"LLVM\" stand for in the context of compilers?", "1) Low-Level Virtual Machine", "2) Language-Level Verification Model", "3) Linker and Loader for Virtual Machines", "4) Lightweight Language Validation Mechanism", 1, 10, 1, 3, "LLVM is a compiler infrastructure project that provides a collection of modular and reusable compiler and toolchain technologies.");
        setValues(&s1.s_q[7], "Which phase of the compiler performs type checking?", "1) Lexical Analysis", "2) Syntax Analysis", "3) Semantic Analysis", "4) Code Generation", 3, 10, 3, 1, "Semantic analysis verifies the compatibility and correctness of types used in the program.");
        setValues(&s1.s_q[8], "Which technique is used to convert an infix expression to postfix in a compiler?", "1) Abstract Syntax Tree (AST)", "2) Operator Precedence Parsing", "3) Recursive Descent Parsing", "4) Dangling Else Problem", 2, 10, 2, 3, "Operator precedence parsing converts infix expressions to postfix using operator precedence and associativity rules.");
        setValues(&s1.s_q[9], "Which of the following is an example of a code optimization technique?", "1) Lexical Analysis", "2) Syntax Analysis", "3) Dead Code Elimination", "4) Tokenization", 3, 10, 3, 1, "Dead code elimination removes code that does not affect the program's output.");
        setValues(&s1.s_q[10], "Which phase of the compiler performs constant folding and propagation?", "1) Lexical Analysis", "2) Syntax Analysis", "3) Semantic Analysis", "4) Code Optimization", 4, 10, 4, 3, "Constant folding and propagation simplify expressions by evaluating constant expressions at compile-time.");
        setValues(&s1.s_q[11], "What is the primary purpose of an operating system?", "1) Manage hardware components", "2) Run application software", "3) Provide user interfaces", "4) Control and coordinate computer resources", 4, 10, 4, 2, "The operating system manages and allocates computer resources such as CPU, memory, and devices.");
        setValues(&s1.s_q[12], "What is the role of the kernel in an operating system?", "1) Provides user interfaces", "2) Executes application software", "3) Manages system resources", "4) Controls input/output operations", 3, 10, 3, 1, "The kernel is the core component of an operating system that manages system resources and provides essential services.");
        setValues(&s1.s_q[13], "Which scheduling algorithm is based on priority assigned to each process?", "1) Round Robin", "2) First-Come, First-Served (FCFS)", "3) Shortest Job Next (SJN)", "4) Priority Scheduling", 4, 10, 4, 2, "Priority Scheduling assigns priority values to each process and schedules them based on their priority.");
        setValues(&s1.s_q[14], "Which memory management technique allows processes to be allocated memory in non-contiguous blocks?", "1) Paging", "2) Segmentation", "3) Swapping", "4) Fragmentation", 2, 10, 2, 4, "Segmentation divides the main memory into variable-sized segments to accommodate processes.");
        setValues(&s1.s_q[15], "What is assembly language?", "1) A high-level programming language", "2) A low-level programming language", "3) A scripting language", "4) A markup language", 2, 10, 2, 4, "Assembly language is a low-level programming language that is closely related to machine code and specific to a particular processor architecture.");
        setValues(&s1.s_q[16], "Which of the following is NOT true about assembly language?", "1) It is easier to understand than machine code", "2) It is directly executed by the processor", "3) It uses mnemonic instructions and symbolic labels", "4) It is portable across different processor architectures", 4, 10, 4, 3, "Assembly language is specific to a particular processor architecture and is not portable across different architectures.");
        setValues(&s1.s_q[17], "What is the purpose of an assembler?", "1) To execute assembly language programs", "2) To translate assembly language to machine code", "3) To provide an interactive programming environment", "4) To debug assembly language programs", 2, 10, 2, 1, "An assembler converts assembly language instructions into machine code that can be directly executed by the processor.");
        setValues(&s1.s_q[18], "Which of the following is a valid assembly language instruction?", "1) ADD R1, R2", "2) PRINT \"Hello, World!\"", "3) IF-ELSE", "4) FOR Loop", 1, 10, 1, 4, "Assembly language instructions typically consist of an operation mnemonic followed by operands, such as registers or memory addresses.");
        setValues(&s1.s_q[19], "Which component of the computer is responsible for executing assembly language instructions?", "1) Central Processing Unit (CPU)", "2) Random Access Memory (RAM)", "3) Hard Disk Drive (HD4)", "4) Graphics Processing Unit (GPU)", 1, 10, 1, 3, "The CPU is the component of the computer that executes instructions, including assembly language instructions.");
        setValues(&s1.s_q[20], "Which of the following is NOT a typical register found in a processor?", "1) Accumulator","2) Instruction Register", "3) Memory Address Register", "4) Control Register", 2, 10, 2, 4, "The instruction register holds the current instruction being executed, but it is not a general-purpose register.");
        setValues(&s1.s_q[21], "What is the purpose of the MOV instruction in assembly language?", "1) Move data between registers or memory locations", "2) Add two values", "3) Compare two values", "4) Jump to a different instruction", 1, 10, 1, 4, "The MOV instruction is used to transfer (move) data between registers or memory locations.");
        setValues(&s1.s_q[22], "Which of the following is a conditional jump instruction in assembly language?", "1) MOV", "2) ADD", "3) JMP", "4) CALL", 3, 10, 3, 4, "The JMP instruction is used for an unconditional jump, while conditional jumps depend on certain conditions.");
        setValues(&s1.s_q[23], "What is a macro in programming?", "1) A type of data structure", "2) A high-level programming language", "3) A reusable piece of code", "4) A database management system", 3, 10, 3, 2, "Macros are reusable code snippets that can be expanded inline in a program.");
        setValues(&s1.s_q[24], "What is the primary purpose of using macros?","1) To improve code readability","2) To reduce code duplication","3) To increase code portability","4) To optimize program execution", 2, 10, 2, 3, "Macros help in reducing code duplication by allowing you to define reusable code segments.");
        setValues(&s1.s_q[25], "Which programming languages support macros?", "1) Only high-level languages like Python and Java", "2) Only low-level languages like Assembly", "3) Both high-level and low-level languages", "4) None of the above", 3, 10, 3, 1, "Macros are supported in both high-level and low-level languages, although the syntax and usage may vary.");

        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            askQuestion(&s1.s_q[questions[i]]);
            end_time = time(NULL);
            elapsed = difftime(end_time, start_time);
            printf("Time taken: %.2f seconds\n", elapsed);
            time_taken += elapsed;
            printf("\bPress Enter to Continue.");
            getchar();
            getchar();

            system("cls");
        }

        printf("The Total Score is %d out of 100.\n", Total);

        FILE *file_5 = fopen("Scores\\scores_S.txt", "a");
        setScore(file_5, Total, Name);
        fclose(file_5);
        
        break;
    case 6:
    default:
        break;
    }
}

void askQuestion(Question *q)
{
    printf("\n%s\n", q->Question_Text);
    printf("%s\n", q->Option_1);
    printf("%s\n", q->Option_2);
    printf("%s\n", q->Option_3);
    printf("%s\n", q->Option_4);
    printf("\nEnter 5 for Lifeline.\n\n");
    // Storing User's Answer
    printf("Enter the answer (in number): \n");
    while (1)
    {
        if (scanf("%d", &Guess) != 1 || Guess > 5 || Guess < 1)
        {
            printf("Error: Invalid input. Please enter your answer.\n");
            while (getchar() != '\n')
            {
            }
            continue;
        }
        break;
    }

    int choice;
    while (Guess == 5)
    {
        if (Life1 == 2 && Life2 == 2)
        {
            printf("NO MORE LIFELINES REMAINING!\n");
            printf("Enter the answer (in number): \n");
            while (1)
            {
                if (scanf("%d", &Guess) != 1 || Guess == 5)
                {
                    printf("NO MORE LIFELINES REMAINING!\n");
                    printf("Enter the answer (number): \n");
                    while (getchar() != '\n')
                    {
                    }
                    continue;
                }
                break;
            }
            break;
        }
        printf("\nWhich LIFELINE do you want to use?\n");
        printf("1. Expert Advice\n");
        printf("2. 50-50\n\n");
        printf("Enter your choice(in number): ");
        scanf("%d", &choice);

    basic:

        if (choice == 1 && Life1 < 2)
        {
            printf("EXPERT ADVICE IS NOW ACTIVATED AND THIS IS YOUR HINT.\n");
            printf("%s", q->Hint);
            printf("\n");
            Life1 = Life1 + 1;
        }
        else if (choice == 1)
            printf("EXPERT ADVICE IS EXHAUSTED! ");
        else if (choice == 2 && Life2 < 2)
        {
            printf("\n50-50 IS ACTIVATED AND THE TWO OPTIONS REMAINING ARE-\n");
            if (q->show1 == 1 || q->show2 == 1)
                printf("%s\n", q->Option_1);
            if (q->show1 == 2 || q->show2 == 2)
                printf("%s\n", q->Option_2);
            if (q->show1 == 3 || q->show2 == 3)
                printf("%s\n", q->Option_3);
            if (q->show1 == 4 || q->show2 == 4)
                printf("%s\n", q->Option_4);
            Life2 = Life2 + 1;
        }
        else if (choice == 2)
            printf("50-50 IS EXHAUSTED!\n");
        printf("What is your answer?(in number)\n");
        while (1)
        {
            if (scanf("%d", &Guess) != 1 || Guess > 5 || Guess < 1)
            {
                printf("Error: Invalid input.\nPlease enter your answer.\n");
                while (getchar() != '\n')
                {
                }
                continue;
            }
            break;
        }
    }

    if (Guess == q->Correct_Answer)
    {
        printf("\nCorrect !\n");
        Total = Total + q->Question_Score;
        printf("Score = %d out of %d\n", q->Question_Score, q->Question_Score);
    }
    else
    {
        printf("\nWrong Answer !\n");
        printf("The Correct Answer was:%d\n", q->Correct_Answer);
        printf("Score = 0 out of %d\n", q->Question_Score);
    }
}

void random_Qnumber()
{
    srand(time(NULL));
    questions[0] = rand() % 24;
    int i = 1, flag = 1;
    while (i < 10)
    {
        flag = 1;
        questions[i] = rand() % 24;
        for (int j = 0; j < i; j++)
        {
            if (questions[j] == questions[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            i++;
        else
            continue;
    }
}

void setScore(FILE *file, int score, char *name)
{
    if (file == NULL)
        printf("Error opening the file.");
    else
    {
        fprintf(file,"%s %d\n",name,score);
        printf("Score saved successfully!\n");
    }
}

void Time()
{
    clock_t start = clock();
    clock_t end = clock();
    elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %.6f seconds\n", elapsed);
}