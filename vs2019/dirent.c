#include <stdio.h>
#include <dirent.h>

DIR *__cdecl opendir(const char *arg)
{
	return NULL;
}

struct dirent *__cdecl readdir(DIR *arg)
{
	return NULL;
}

int __cdecl closedir(DIR *arg)
{
	return 0;
}