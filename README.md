# reboot
Extremely fast reboot sequence for a Linux machine

## create reboot.c with contents:

#include <stdio.h>
#include <sys/reboot.h>


    int
    main (int argc, char **argv)
    {
	    if (reboot (RB_AUTOBOOT) < 0) {
		    fprintf (stderr, "%s: call to reboot() system call failed.\n",
			     argv[0]);
    	}

	    return 0;
    }

## compile reboot.c into reboot:

    gcc reboot.c -o reboot

## Execute reboot (it will sync disks, that’s it!)

have a nice reboot!
