#include <iostream>
#include <exception>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <stddef.h>
#include <linux/inotify.h>

using namespace std;

#include "debug.h"
#include "config.h"
#include "demon.h"

int main(int argc, char** argv)
{
	Fatal error;

	try
	{
		Demon demon(argc, argv);
	}
	catch(exception const& e)
	{
		error << e.what() << endl;
	}
	catch(Exception& e)
	{
		error << e.What() << endl;
	}
	
	return 0;
}

/*
	char** w = &watch[0];
	for (int i = 0; w[i]; ++i)
	{
		cout << "W:" << w[i] << endl;
	}
*/
