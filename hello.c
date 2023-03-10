#include<stdio.h>           //Header File
    //stdio.h header file contains Standard Function Declaration (NOT Defination its πDeclaration)

int main( )                 // User Defined function
{
    printf("Hello.World");  //Library Function
    return 0;               //return is a jump statement
}

/*
    π΄ What happens in computer After writing program
    *Compilation and Execution in C Programms:- 1st Follow that pdf/img

    π’ hello.c (Source Code) --> 
    
    π’Preprocessor ( 1. removing commments 
                      2. Handle the statement starting with # )

    π’ hello.i (Expanded Source code) [i = intermidiate]
         π To see π(.i) file ==> gcc hello.c -E -o hello.i (It shows 472 Lines of code in that No comments are there)
                This why hello.i file is Expanded Source Code π
    
    π’ Compiler --> ( 1. Converts into Low Level lang
                       2. Check the syntax eg. ;)

    π’ hello.s (Assembly Code) 
         π To See Assembly Code of hello.c ==> gcc -S hello.c (hello.s file is created π)
                π Assembly lang is Low language level language and It is Machine Dependant Lang 
                π C Program is Machine Independant, we can run C in any Machine/comp.
                π Assembler internally taking care of C so that we can run that in any computer.
                π Machine Can Not understand Assembly code so for that we need Assembler
    
    π’ Assembler --> Converts Assembly code to Machine/Binary Code 

    π’ hello.o (Object Code) --> Here are machine Level Code

    π’ .lib (Predefined Functions) 
            Here are some Predefined function in C such as scanf, printf .....etc.
    
    π’ Linker:-
            Linker Combine Obove two points i.e Combines user Object Codes with .lib Codes 
            π So if print capital 'P' instaed of small 'p' in printf line, 
                then Linker gives you error i.e undefined reference to 'Printf'
                                                error: ld returned 1 exit status 
                                                        ld means Dynamic Linker

    π’ a.exe ( Here is our code but its in hard disk, in hard disk no ocde is execute so,)
    
    π’ Loader ( Unit of Operating System)
            Now here Loader which is unit of OS took that code in RAM coz Programs runs in RAM.

    π’ RAM (Programs always runs in RAM in the form of Process)
    π’ Process (here our code runs now and we can see it)
*/

/*
    1. π― Program compilation starts form line no. 1
    2. π― Program execution starts from main( )
    3. main ( ) is a entry point function 
    4. π― Only One [ main ( ) ] function is allowed in program
    5. return 0; Indiactes successful execution of program

SYMBOL USED:
π΄
π’
π
π
π―
β’


*/