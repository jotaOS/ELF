#ifndef ALLOCATOR_HPP
#define ALLOCATOR_HPP

#include <types>
#include <syscalls>

inline uint64_t allocPage() { return std::moreHeap(1); }

#endif
