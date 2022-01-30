# Reboot what is it all about?

This program was originaly made because an automated install refused to reboot upon completion. It will extremely fast reboot a Linux machine. The linux kernel will sync your disks and call reboot. No Ubuntu/RedHat/SuSe, etc... scripts running, just a flush to disk and reboot call. Because of the disk flush, it's relatively save.

## Create reboot.c with contents:

    #include <stdio.h>
    #include <sys/reboot.h>
    
    int main (int argc, char **argv)
    {
        if (reboot (RB_AUTOBOOT) < 0) {
	        fprintf (stderr, "%s: call to reboot() system call failed.\n", argv[0]);
        }
        return 0;
    }

## Compile reboot.c into reboot:

    gcc reboot.c -o reboot

## Execute reboot (it will sync disks, that’s it!)

have a nice reboot!
