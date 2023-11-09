//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",  "/home/youyi/src/moon",  60, 1},
	{"",  "/home/youyi/src/ram",  2, 1},
	{"",  "/home/youyi/src/netraf",  3, 1},
	{"",  "/home/youyi/src/clock",  60, 1},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
