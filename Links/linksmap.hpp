#ifndef LINKSMAP_HPP
#define LINKSMAP_HPP

#include <stddef.h>
#include "link.hpp"


typedef size_t fd_t;


class LinksMap {
public:
	size_t BlockSize = 1024 * 1024 * 64; // 64MB
    	size_t LinksSize = 0;
	fd_t FileDescriptor;
	fd_t MapFileDescriptor;
	void* MappedLinks;
	Link* Map(const char* filename);
	void Unmap();
	void Remap();
	void Close();
};

#endif