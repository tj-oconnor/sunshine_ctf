#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void func1(void);
void func2(void);
void func3(void);
void func4(void);
void func5(void);

__attribute__((constructor)) void ignore_me() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
}

void win(void) {
   system("/bin/sh");
   exit(0);
}

void fail(void) {
    system("echo '<<< Fail'");
    exit(0);
}

void func5(void) {
    char buffer[100];
    void *rbp = &buffer;

    printf("<<< Song Begins At %p\n",rbp);
    printf("PwnMe >>> ");
    ssize_t bytesRead = read(STDIN_FILENO, buffer, 500);
    void* return_address = __builtin_return_address(0);
    if (return_address!=(func4+13)) {
       fail();
    }
}

void func4(void) {
   func5();
    void* return_address = __builtin_return_address(0);
    if (return_address!=(func3+13)) {
       fail();
    }
}

void func3(void) {
   func4();
    void* return_address = __builtin_return_address(0);
    if (return_address!=(func2+13)) {
       fail();
    }
}

void func2(void) {
   func3();
    void* return_address = __builtin_return_address(0);
    if (return_address!=(func1+9)) {
      fail();
    }
}

void func1(void) {
   func2();
}

int main(void) {
      printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMWNXKKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMNOo:'....':d0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMWO;.          .oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMWx.   ...        oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMWN0l.   .:lo.       .OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMWKOxl:'.      .'.         oWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMNx,.                        cNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMk....';ldxo;                ,ONWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMN00KXNWMMMMK;                .',:ldkKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMWk.                       ..':d0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMWO'                             .,o0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMX;               .;.               .:xXWMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMk.               ;O;                  .:xKWMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMx.               .oc                     .;d0WMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMO.                .l:                       .;o0NMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMNc                 .:c'                        .,oONWMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMM0;                  .cc'                          'cd0XWMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMK:                   .:c;.                          ..;lxOKNMMMMMM\n");
   printf("MMMMMMMMMMMMMMMXl.                   .,ccc'                           .';xNMMMMM\n");
   printf("MMMMMMMMMMMMMMMMNk,                      'o:                  .,codxkO0KXWMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMXx,.                    ,o'                 ..,:codxk0KXWMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMNOl,.                 .cxxdolc:;,,'...              ..,lKMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMWKkoc:.  ..   ,lodxOKNMMMMMMMWWNXKK0Okxddollc:;;,,;cdKMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMk. :k, ,0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMM0' :O, :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc.oK;.xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWo'kX;.OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWl,0X;.OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMX:;KK,.OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMO':XO..kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMWXOo. .d:  cNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMXk:..      . .dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMWXkdxxkkdok00kONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
   printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    func1();
    return 0;
}
