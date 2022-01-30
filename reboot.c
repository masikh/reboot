#include <stdio.h>
#include <sys/reboot.h>


int main (int argc, char **argv)
{
    if (reboot (RB_AUTOBOOT) < 0) {
        fprintf (stderr, "%s: call to reboot() system call failed.\n", argv[0]);
    }
    return 0;
}
