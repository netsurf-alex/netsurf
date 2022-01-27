/* Define S_ISDIR if not defined by system headers, f.e. MSVC */
#if !defined(S_ISDIR) && defined(S_IFMT) && defined(S_IFDIR)
#define S_ISDIR(m) (((m)&S_IFMT) == S_IFDIR)
#endif

struct dirent {
	//ino_t d_ino; /* Inode number */
	//off_t d_off; /* Not an offset; see below */
	unsigned short d_reclen; /* Length of this record */
	unsigned char d_type; /* Type of file; not supported
				 by all filesystem types */
	char d_name[256]; /* Null-terminated filename */
};

struct DIR {
	struct dirent ent;
	//struct _WDIR *wdirp;
};
typedef struct DIR DIR;