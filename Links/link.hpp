#ifndef LINK_HPP
#define LINK_HPP
#include <stddef.h>

typedef size_t link_t;


class Link
{
public:
    link_t Source;
    link_t Target;
    link_t LeftAsSource;
    link_t RightAsSource;
    link_t SizeAsSource;
    link_t LeftAsTarget;
    link_t RightAsTarget;
    link_t SizeAsTarget;
    Link(link_t source, link_t target);
};
#endif
