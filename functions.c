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

int Answer;
int Total_Score;
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
            printf("%d. ", i + 1);
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

        printf("The Total Score is %d out of 100.\n", Total_Score);

        FILE *file_1 = fopen("Scores\\scores_P.txt", "a");
        setScore(file_1, Total_Score, Name, time_taken);
        fclose(file_1);

        break;
    case 2:
        setValues(&e1.e_q[0], "Which type of line is used to represent hidden or invisible edges in an orthographic projection?", "1) Dashed line", "2) Solid line", "3) Dot-dashed line", "4) Dotted line", 1, 10, 1, 3, "Hidden lines are typically represented by dashed lines to differentiate them from visible lines.");
        setValues(&e1.e_q[1], "In an isometric projection, angles between axes are:", "1) 90 degrees", "2) 120 degrees", "3) 30 degrees", "4) 45 degrees", 3, 10, 2, 3, "In an isometric projection, the angles between each pair of axes are 120 degrees.");
        setValues(&e1.e_q[2], "What is the purpose of a centerline in an engineering drawing?", "1) To indicate symmetry", "2) To indicate dimensions", "3) To indicate hidden lines", "4) To indicate material specifications", 1, 10, 1, 3, "Centerlines are used to indicate the symmetry of an object or feature.");
        setValues(&e1.e_q[3], "Which type of projection is commonly used in engineering drawings?", "1) Perspective projection", "2) Isometric projection", "3) Oblique projection", "3) Oblique projection", 4, 10, 1, 4, "Orthographic projection is the standard method used to represent objects in engineering drawings.");
        setValues(&e1.e_q[4], "Which of the following is NOT a basic dimensioning element in engineering drawings?", "1) Diameter", "2) Radius", "3) Thickness", "4) Volume", 4, 10, 2, 4, "Basic dimensioning elements include diameter, radius, and thickness, which define the size and shape of objects.");
        setValues(&e1.e_q[5], "What does the term \"tolerance\" refer to in engineering drawings?", "1) The level of accuracy required for a dimension", "2) The distance between two parallel lines", "3) The thickness of a line", "4) The size of a drawing sheet", 1, 10, 1, 3, "Tolerance defines the allowable variation from a specified dimension.");
        setValues(&e1.e_q[6], "Which type of line is used to represent the outline of an object in an orthographic projection?", "1) Phantom line", "2) Hidden line", "3) Object line", "4) Centerline", 3, 10, 3, 4, "Object lines are solid lines used to represent the visible edges of an object in an orthographic projection.");
        setValues(&e1.e_q[7], "What is the purpose of section views in engineering drawings?", "1) To show the interior details of an object", "2) To indicate symmetry", "3) To show the isometric view of an object", "4) To indicate surface finishes", 1, 10, 1, 3, "Section views are used to reveal the internal features of an object that are not visible in the standard views.");
        setValues(&e1.e_q[8], "Which type of projection is commonly used to represent curved surfaces in engineering drawings?", "1) Isometric projection", "2) Oblique projection", "3) Orthographic projection", "4) Perspective projection", 2, 10, 2, 4, "Oblique projection is often used to represent curved surfaces by showing them at an angle.");
        setValues(&e1.e_q[9], "What does the abbreviation \"R\" typically represent in engineering drawings?", "1) Radius", "2) Right angle", "3) Rectangular dimension", "4) Roughness", 1, 10, 1, 2, "The abbreviation \"R\" is commonly used to represent the radius of a curved feature in engineering drawings.");
        setValues(&e1.e_q[10], "Which type of line is used to represent alternate positions or movement in engineering drawings?", "1) Hidden line", "2) Phantom line", "3) Construction line", "4) Centerline", 2, 10, 2, 4, "Phantom lines are used to represent alternate positions or movement of an object.");
        setValues(&e1.e_q[11], "What does the abbreviation \"C\" typically represent in engineering drawings?", "1) Centerline", "2) Circumference", "3) Chord", "4) Counterbore", 1, 10, 1, 4, "The abbreviation \" C \" is commonly used to represent a centerline in engineering drawings.");
        setValues(&e1.e_q[12], "Which type of line is used to indicate a cutting plane in a section view?", "1) Phantom line", "2) Hidden line", "3) Cutting plane line", "4) Break line", 3, 10, 2, 3, "Cutting plane lines are used to indicate the plane along which a section view is taken.");
        setValues(&e1.e_q[13], "Which type of line is used to represent an alternate position or a repeated detail in a drawing?", "1) Hidden line", "2) Phantom line", "3) Construction line", "4) Break line", 4, 10, 2, 4, "Break lines are used to show an alternate position or a repeated detail in a drawing.");
        setValues(&e1.e_q[14], "Which type of line is used to represent a cylindrical surface in a sectional view?", "1) Hidden line", "2) Phantom line", "3) Section line", "4) Cutting plane line", 3, 10, 1, 3, "Section lines are used to represent the cut surface of a material in a sectional view.");
        setValues(&e1.e_q[15], "Which type of line is used to represent the edge of a surface or an outline of a part in an engineering drawing?", "1) Phantom line", "2) Centerline", "3) Object line", "4) Construction line", 3, 10, 3, 4, "Object lines are solid lines used to represent the visible edges or outline of a part.");
        setValues(&e1.e_q[16], "What does the abbreviation \"DIA\" typically represent in engineering drawings?", "1) Dimension", "2) Diameter", "3) Drawing", "4) Distance", 2, 10, 2, 3, "The abbreviation \" DIA \" is commonly used to represent the diameter of a circular feature in engineering drawings.");
        setValues(&e1.e_q[17], "Which type of line is used to represent the outline of an object that extends beyond the boundaries of the drawing sheet?", "1) Extension line", "2) Hidden line", "3) Phantom line", "4) Break line", 3, 10, 1, 3, "Phantom lines are used to represent the outline of an object that extends beyond the boundaries of the drawing sheet.");
        setValues(&e1.e_q[18], "What does the abbreviation \"H\" typically represent in engineering drawings?", "1) Height", "2) Hypotenuse", "3) Horizontal", "4) Hole", 1, 10, 1, 3, "The abbreviation \" H \" is commonly used to represent the height of a feature or an object in engineering drawings.");
        setValues(&e1.e_q[19], "Which type of line is used to represent the outline of an object when it is partially obscured by another object?", "1) Hidden line", "2) Phantom line", "3) Extension line", "4) Section line", 1, 10, 1, 2, "Hidden lines are used to represent the outline of an object when it is obscured by another object in an orthographic projection.");
        setValues(&e1.e_q[20], "Which type of line is used to indicate the cutting plane in a sectional view?", "1) Break line", "2) Hidden line", "3) Phantom line", "4) Section line", 4, 10, 2, 4, "Section lines are used to indicate the cutting plane in a sectional view.");
        setValues(&e1.e_q[21], "What does the abbreviation \"THK\" typically represent in engineering drawings?", "1) Thickness", "2) Think", "3) Throttle", "4) Thread", 1, 10, 1, 3, "The abbreviation \"THK\" is commonly used to represent the thickness of a material or a feature in engineering drawings.");
        setValues(&e1.e_q[22], "Which type of line is used to represent the edges of a hole or a cylindrical feature in a sectional view?", "1) Hidden line", "2) Phantom line", "3) Section line", "4) Cutting plane line", 3, 10, 3, 4, "Section lines are used to represent the edges of a hole or a cylindrical feature in a sectional view.");
        setValues(&e1.e_q[23], "What does the abbreviation \"TYP\" typically represent in engineering drawings?", "1) Typical", "2) Thickness", "3) Taper", "4) Tolerance", 1, 10, 1, 2, "The abbreviation \"TYP\" is commonly used to represent a typical dimension or feature in engineering drawings.");
        setValues(&e1.e_q[24], "Which type of line is used to represent a long, narrow slot in an engineering drawing?", "1) Hidden line", "2) Phantom line", "3) Break line", "4) Centerline", 1, 10, 1, 4, "Hidden lines are used to represent the edges of a long, narrow slot in an engineering drawing.");
        setValues(&e1.e_q[25], "What does the abbreviation \"CONC\" typically represent in engineering drawings?", "1) Concentric", "2) Concrete", "3) Concentration", "3) Concentration", 2, 10, 1, 2, "The abbreviation \"CONC\" is commonly used to represent a concrete material or construction in engineering drawings.");

        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            printf("%d. ", i + 1);
            askQuestion(&e1.e_q[questions[i]]);
            end_time = time(NULL);
            elapsed = difftime(end_time, start_time);
            printf("Time taken: %.2f seconds\n", elapsed);

            printf("\bPress Enter to Continue.");
            getchar();
            getchar();
            time_taken += elapsed;
            system("cls");
        }

        printf("The Total Score is %d out of 100.\n", Total_Score);

        FILE *file_2 = fopen("Scores\\scores_E.txt", "a");
        setScore(file_2, Total_Score, Name, time_taken);
        fclose(file_2);

        break;
    case 3:
        setValues(&c1.c_q[0], "Which component of a computer is responsible for executing instructions?", "1) Central Processing Unit (CPU)", "2) Random Access Memory (RAM)", "3) Hard Disk Drive (HD4)", "4) Graphics Processing Unit (GPU)", 1, 10, 1, 3, "It is often referred to as the \"brain\" of the computer.");
        setValues(&c1.c_q[1], "Which type of memory is volatile and loses its data when the power is turned off?", "1) Read-Only Memory (ROM)", "2) Cache Memory", "3) Secondary Memory", "4) Random Access Memory (RAM)", 4, 10, 4, 2, "It provides temporary storage for data and instructions that are actively being used by the CPU.");
        setValues(&c1.c_q[2], "What is the purpose of an operating system?", "1)manage hardware resources", "2) Store data permanently", "3) Run application software", "4) All of the above", 4, 10, 4, 3, "An operating system is responsible for managing various aspects of computer hardware, providing an interface for user interaction, and enabling software execution.");
        setValues(&c1.c_q[3], "Which of the following is an example of an input device?", "1) Monitor", "2) Printer", "3) Keyboard", "4) Speakers", 3, 10, 3, 1, "Input devices are used to enter data or commands into the computer system.");
        setValues(&c1.c_q[4], "What is the function of a motherboard in a computer system?", "1) Store data permanently", "2) Provide power to the system", "3) Connect all the hardware components", "4) Execute program instructions", 3, 10, 3, 2, "The motherboard is the main circuit board that connects the CPU, RAM, storage devices, and other peripherals.");
        setValues(&c1.c_q[5], "Which programming language is often used for web development?", "1) Java", "2) C++", "3) Python", "4) HTML", 4, 10, 4, 2, "HTML (Hypertext Markup Language) is the standard language for creating web pages.");
        setValues(&c1.c_q[6], "What is the primary function of a compiler?", "1) Execute program instructions", "2) Convert source code into machine code", "3) Provide an interface for user interaction", "4) Manage computer hardware resources", 2, 10, 2, 3, "A compiler translates high-level programming languages into low-level machine code that can be executed by the computer.");
        setValues(&c1.c_q[7], "Which of the following is a secondary storage device?", "1) USB flash drive", "2) CPU cache", "3) RAM", "4) Optical disc drive", 1, 10, 1, 4, "Secondary storage devices are used for long-term storage of data and programs.");
        setValues(&c1.c_q[8], "What is the purpose of an IP address?", "1) Identify a specific website", "2) Store files and folders", "3) Identify a device on a network", "4) Execute program instructions", 3, 10, 2, 3, "An IP address is a unique numerical identifier assigned to each device connected to a network.");
        setValues(&c1.c_q[9], "Which of the following is an example of an output device?", "1) Mouse", "2) Hard disk drive", "3) Printer", "4) Network interface card (NI3)", 3, 10, 3, 4, "Output devices are used to display or produce information from the computer system.");
        setValues(&c1.c_q[10], "What does the acronym \"URL\" stand for?", "1) Universal Resource Locator", "2) Unified Resource Locator", "3) Uniform Resource Language", "4) Universal Routing Language", 1, 10, 1, 3, "A URL is the address used to locate a resource on the internet.");
        setValues(&c1.c_q[11], "Which of the following is an example of a high-level programming language?", "1) Assembly language", "2) Machine language", "3) C++", "4) Binary code", 3, 10, 3, 2, "High-level programming languages are easier for humans to read and write compared to low-level languages like assembly or machine language.");
        setValues(&c1.c_q[12], "What is the purpose of a firewall in a computer system?", "1) Protect against unauthorized access", "2) Store data permanently", "3) Execute program instructions", "4) Provide power to the system", 1, 10, 1, 4, "A firewall is a security measure that monitors and filters incoming and outgoing network traffic to protect against unauthorized access or malicious activities.");
        setValues(&c1.c_q[13], "What is the function of an input/output (I/O) device?", "1) Execute program instructions", "2) Connect all the hardware components", "3) Store data permanently", "4) Enable communication between the computer and the user or other devices", 4, 10, 2, 4, "I/O devices facilitate the exchange of data between the computer and external devices, such as keyboards, mice, monitors, and printers.");
        setValues(&c1.c_q[14], "Which of the following is an example of system software?", "1) Web browser", "2) Word processor", "3) Operating system", "4) Spreadsheet program", 3, 10, 3, 1, "System software provides the fundamental functions and services required to operate and manage a computer system.");
        setValues(&c1.c_q[15], "What is the purpose of a cache memory in a computer system?", "1) Store frequently used data and instructions for quick access", "2) Execute program instructions", "3) Connect all the hardware components", "4) Store data permanently", 1, 10, 1, 2, "Cache memory is a high-speed storage unit that holds frequently accessed data and instructions to reduce the time it takes for the CPU to access them.");
        setValues(&c1.c_q[16], "Which of the following is an example of a network topology?", "1) HTML", "2) Ethernet", "3) Ring", "4) Java", 3, 10, 2, 3, "Network topology refers to the physical or logical layout of devices and connections in a network, such as bus, star, ring, or mesh.");
        setValues(&c1.c_q[17], "What is the purpose of a compiler in the software development process?", "1) Detect and fix software bugs", "2) Convert source code into machine code", "3) Provide an interface for user interaction", "4) Manage computer hardware resources", 2, 10, 2, 4, "A compiler is used to translate human-readable source code into machine code that can be executed by the computer.");
        setValues(&c1.c_q[19], "Which of the following is an example of an application software?", "1) Operating system", "2) Compiler", "3) Spreadsheet program", "4) BIOS", 3, 10, 4, 3, "Application software is designed to perform specific tasks or applications, such as word processing, spreadsheet calculations, or graphic design.");
        setValues(&c1.c_q[20], "What is the purpose of a graphical user interface (GUI)?", "1) Manage computer hardware resources", "2) Provide an interface for user interaction", "3) Convert source code into machine code", "4) Store data permanently", 2, 10, 2, 1, "A GUI allows users to interact with the computer system using graphical elements, such as windows, icons, and menus.");
        setValues(&c1.c_q[21], "Which type of computer memory is non-volatile and retains its data even when the power is turned off?", "1) Cache memory", "2) Random Access Memory (RAM)", "3) Read-Only Memory (ROM)", "4) Hard Disk Drive (HDD)", 3, 10, 3, 4, "ROM is a type of memory that stores permanent instructions or data that are not intended to be modified.");
        setValues(&c1.c_q[22], "What is the purpose of an antivirus software?", "1) Convert source code into machine code", "2) Provide an interface for user interaction", "3) Detect and remove computer viruses", "4) Store data permanently", 3, 10, 1, 3, "Antivirus software is designed to identify, prevent, and remove malicious software, including computer viruses, from a computer system.");
        setValues(&c1.c_q[23], "Which of the following is an example of a cloud storage service?", "1) USB flash drive", "2) DVD-ROM", "3) Google Drive", "4) Solid State Drive (SSD)", 3, 10, 3, 2, "Cloud storage services allow users to store and access their files and data remotely over the internet.");
        setValues(&c1.c_q[24], "What is the purpose of an interrupt in a computer system?", "1) Execute program instructions", "2) Connect all the hardware components", "3) Provide power to the system", "4) Signal the CPU to pause its current activities and handle a specific event or condition", 4, 10, 4, 1, "Interrupts are used to handle time-critical events or tasks that require immediate attention from the CPU.");
        setValues(&c1.c_q[25], "Which of the following is an example of a firmware?", "1) Web browser", "2) Operating system", "3) Printer driver", "4) BIOS", 4, 10, 4, 3, "Firmware is a type of software that is permanently stored in hardware devices, such as the Basic Input/Output System (BIOS) of a computer.");

        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            printf("%d. ", i + 1);
            askQuestion(&c1.c_q[questions[i]]);
            end_time = time(NULL);
            elapsed = difftime(end_time, start_time);
            printf("Time taken: %.2f seconds\n", elapsed);

            printf("\bPress Enter to Continue.");
            getchar();
            getchar();
            time_taken += elapsed;
            system("cls");
        }

        printf("The Total Score is %d out of 100.\n", Total_Score);

        FILE *file_3 = fopen("Scores\\scores_C.txt", "a");
        setScore(file_3, Total_Score, Name, time_taken);
        fclose(file_3);

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
            printf("%d. ", i + 1);
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

        printf("The Total Score is %d out of 100.\n", Total_Score);

        FILE *file_4 = fopen("Scores\\scores_D.txt", "a");
        setScore(file_4, Total_Score, Name, time_taken);
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
        setValues(&s1.s_q[20], "Which of the following is NOT a typical register found in a processor?", "1) Accumulator", "2) Instruction Register", "3) Memory Address Register", "4) Control Register", 2, 10, 2, 4, "The instruction register holds the current instruction being executed, but it is not a general-purpose register.");
        setValues(&s1.s_q[21], "What is the purpose of the MOV instruction in assembly language?", "1) Move data between registers or memory locations", "2) Add two values", "3) Compare two values", "4) Jump to a different instruction", 1, 10, 1, 4, "The MOV instruction is used to transfer (move) data between registers or memory locations.");
        setValues(&s1.s_q[22], "Which of the following is a conditional jump instruction in assembly language?", "1) MOV", "2) ADD", "3) JMP", "4) CALL", 3, 10, 3, 4, "The JMP instruction is used for an unconditional jump, while conditional jumps depend on certain conditions.");
        setValues(&s1.s_q[23], "What is a macro in programming?", "1) A type of data structure", "2) A high-level programming language", "3) A reusable piece of code", "4) A database management system", 3, 10, 3, 2, "Macros are reusable code snippets that can be expanded inline in a program.");
        setValues(&s1.s_q[24], "What is the primary purpose of using macros?", "1) To improve code readability", "2) To reduce code duplication", "3) To increase code portability", "4) To optimize program execution", 2, 10, 2, 3, "Macros help in reducing code duplication by allowing you to define reusable code segments.");
        setValues(&s1.s_q[25], "Which programming languages support macros?", "1) Only high-level languages like Python and Java", "2) Only low-level languages like Assembly", "3) Both high-level and low-level languages", "4) None of the above", 3, 10, 3, 1, "Macros are supported in both high-level and low-level languages, although the syntax and usage may vary.");

        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            printf("%d. ", i + 1);
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

        printf("The Total Score is %d out of 100.\n", Total_Score);

        FILE *file_5 = fopen("Scores\\scores_S.txt", "a");
        setScore(file_5, Total_Score, Name, time_taken);
        fclose(file_5);

        break;
    case 6:
        setValues(&g1.g_q[0], " What is always in front of you but can't be seen?", "1) Future", "2) Mirror", "3) Air", "4) Memory", 1, 10, 1, 3, "It refers to the concept of time.");
        setValues(&g1.g_q[1], " What has keys but can't open locks?", "1) Piano", "2) Keyboard", "3) Map", "4) Tree", 1, 10, 1, 4, "It produces sounds when you press its keys.");
        setValues(&g1.g_q[2], "The more you take, the more you leave behind. What am I?", "1) Footsteps", "2) Breath", "3) Time", "4) Knowledge", 3, 10, 3, 1, " It refers to a non-physical concept.");
        setValues(&g1.g_q[3], "I speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I?", "1) Whisper", "2) Echo", "3) Dream", "4) Thought", 2, 10, 2, 1, "You often hear it in nature.");
        setValues(&g1.g_q[4], "What has a heart that doesn't beat?", "1) Clock", "2) Human", "3) Computer", "4) Tomato", 1, 10, 1, 2, "It is a common household item.");
        setValues(&g1.g_q[5], "I can be cracked, made, told, and played. What am I?", "1) Joke", "2) Egg", "3) Music", "4) Riddle", 4, 10, 4, 3, " It involves creativity.");
        setValues(&g1.g_q[6], "What gets wetter the more it dries?", "1) Towel", "2) Soap", "3) Hair", "4) Sponge", 1, 10, 1, 3, "It is used for drying.");
        setValues(&g1.g_q[7], "I am always hungry, I must always be fed. The finger I touch will soon turn red. What am I?", "1) Fire", "2) Baby", "3) Shark", "4) Spider", 1, 10, 1, 3, "It requires fuel to continue.");
        setValues(&g1.g_q[8], "The more you have of it, the less you see. What is it?", "1) Darkness", "2) Wisdom", "3) Sleep", "4) Mist", 1, 10, 1, 4, "It refers to a lack of something.");
        setValues(&g1.g_q[9], "I can fly without wings. I can cry without eyes. Wherever I go, darkness follows me. What am I?", "1) Wind", "2) Ghost", "3) Cloud", "4) Moon", 3, 10, 3, 4, " It is related to weather.");
        setValues(&g1.g_q[10], "I have cities but no houses, forests but no trees, and rivers but no water. What am I?", "1) Map", "2) Globe", "3) Book", "4) Dream", 1, 10, 1, 2, "It provides information.");
        setValues(&g1.g_q[11], " What goes up but never comes down?", "1) Age", "2) Happiness", "3) Energy", "4) Balloon", 1, 10, 1, 3, "It refers to a natural process.");
        setValues(&g1.g_q[12], " I am an odd number. Take away one letter and I become even. What number am I?", "1) One", "2) Three", "3) Five", "4) Seven", 2, 10, 2, 3, "Pay attention to the wording.");
        setValues(&g1.g_q[13], "The more you take, the more you leave behind. What am I", "1) Steps", "2) Footprints", "3) Time", "4) Money", 3, 10, 3, 2, "It refers to a non-physical concept.");
        setValues(&g1.g_q[14], "What can you catch but not throw?", "1) Cold", "2) Ball", "3) Fish", "4) Air", 1, 10, 1, 4, "It is an illness.");
        setValues(&g1.g_q[15], "The person who makes it, sells it. The person who buys it, never uses it. The person who uses it, never knows they're using it. What is it?", "1) Coffin", "2) Pen", "3) Bed", "4) Car", 1, 10, 1, 3, "It is related to a somber event.");
        setValues(&g1.g_q[16], "I am not alive, but I can grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. What am I?", "1) Fire", "2) Tree", "3) Cloud", "4) Candle", 1, 10, 1, 4, "It is a common household item.");
        setValues(&g1.g_q[17], "What has keys that open no locks, space but no room, and you can enter but not go in?", "1) Keyboard", "2) Piano", "3) Map", "4) Website", 4, 10, 4, 3, "It is a virtual space.");
        setValues(&g1.g_q[18], " What has a neck but no head?", "1) Bottle", "2) Giraffe", "3) Shirt", "4) Pen", 1, 10, 1, 2, "It is a common object.");
        setValues(&g1.g_q[19], " What can be seen once in a minute, twice in a moment, and never in a thousand years?", "1) Opportunity", "2) Reflection", "3) Lightning", "4) Star", 3, 10, 3, 2, "It is a natural phenomenon.");
        setValues(&g1.g_q[20], " I am taken from a mine and shut in a wooden case, from which I am never released, and yet I am used by almost every person. What am I?", "1) Coal", "2) Oxygen", "3) Gold", "4) Pencil Lead", 4, 10, 4, 1, "You use it to write or draw.");
        setValues(&g1.g_q[21], "What has a thumb and four fingers, but is not alive?", "1) Glove", "2) Statue", "3) Handprint", "4) Puppet", 1, 10, 1, 3, "It is often worn.");
        setValues(&g1.g_q[22], "The more you work, the more I'll eat. You keep me full, I'll keep you neat. What am I?", "1) Time", "2) Money", "3) Vacuum cleaner", "4) Hunger", 3, 10, 3, 4, "It involves cleanliness");
        setValues(&g1.g_q[23], " What has a face and two hands but no arms or legs?", "1) Clock", "2) Mirror", "3) Sun", "4) Ball", 1, 10, 1, 3, "It helps you keep track of time.");
        setValues(&g1.g_q[24], " What has keys but can't open locks?", "1) Piano", "2) Keyboard", "3) Map", "4) Tree", 1, 10, 1, 2, "It produces sounds when you press its keys.");
        setValues(&g1.g_q[25], "I can be cracked, made, told, and played. What am I?", "1) Joke", "2) Egg", "3) Music", "4) Riddle", 4, 10, 4, 3, "It involves creativity.");
        random_Qnumber();

        for (int i = 0; i < 10; i++)
        {
            start_time = time(NULL);
            printf("%d. ", i + 1);
            askQuestion(&g1.g_q[questions[i]]);
            end_time = time(NULL);
            elapsed = difftime(end_time, start_time);
            printf("Time taken: %.2f seconds\n", elapsed);
            time_taken += elapsed;
            printf("\bPress Enter to Continue.");
            getchar();
            getchar();

            system("cls");
        }

        printf("The Total Score is %d out of 100.\n", Total_Score);

        FILE *file_6 = fopen("Scores\\scores_G.txt", "a");
        setScore(file_6, Total_Score, Name, time_taken);
        fclose(file_6);

    default:
        break;
    }
}

void askQuestion(Question *q)
{
    printf("%s\n", q->Question_Text);
    printf("%s\n", q->Option_1);
    printf("%s\n", q->Option_2);
    printf("%s\n", q->Option_3);
    printf("%s\n", q->Option_4);
    printf("\nEnter 5 for Lifeline.\n\n");
    // Storing User's Answer
    printf("Enter the answer (in number): \n");
    while (1)
    {
        scanf("%d", &Answer);
        if (Answer > 5 || Answer < 1)
        {
            printf("Error: Invalid input.\nEnter the answer (in number): \n");
            continue;
        }
        break;
    }

    int choice;
    while (Answer == 5)
    {
        if (Life1 == 1 && Life2 == 1)
        {
            printf("NO MORE LIFELINES REMAINING!\n");
            printf("Enter the answer (in number): \n");
            while (1)
            {
                scanf("%d", &Answer);
                if (Answer > 5 || Answer < 1)
                {
                    printf("Error: Invalid input.\nEnter the answer (in number): \n");
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

        if (choice == 1 && Life1 == 0)
        {
            printf("YOU HAVE CHOSEN EXPERT ADVICE..\nHINT : ");
            printf("%s", q->Hint);
            printf("\n");
            Life1++;
        }
        else if (choice == 1)
            printf("EXPERT ADVICE IS EXHAUSTED! ");
        else if (choice == 2 && Life2 == 0)
        {
            printf("\nYOU HAVE CHOSEN 50-50...\nTHE TWO OPTIONS REMAINING ARE-\n");
            if (q->show1 == 1 || q->show2 == 1)
                printf("%s\n", q->Option_1);
            if (q->show1 == 2 || q->show2 == 2)
                printf("%s\n", q->Option_2);
            if (q->show1 == 3 || q->show2 == 3)
                printf("%s\n", q->Option_3);
            if (q->show1 == 4 || q->show2 == 4)
                printf("%s\n", q->Option_4);
            Life2++;
        }
        else if (choice == 2)
            printf("50-50 IS EXHAUSTED!\n");
        printf("What is your answer?(in number)\n");
        while (1)
        {
            scanf("%d", &Answer);
            if (Answer > 5 || Answer < 1)
            {
                printf("Error: Invalid input.\nEnter the answer (in number): \n");
                continue;
            }
            break;
        }
    }

    if (Answer == q->Correct_Answer)
    {
        printf("\nCorrect !\n");
        Total_Score = Total_Score + q->Question_Score;
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

void setScore(FILE *file, int score, char *name, float time)
{
    if (file == NULL)
        printf("Error opening the file.");
    else
    {
        fprintf(file, "%s\t%d\t%f\n", name, score, time);
        printf("Score saved successfully!\n");
    }
}
