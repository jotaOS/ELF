#include "allocator/allocator.hpp"

extern "C" void _start() {
	asm volatile("xchgw %bx, %bx");
	asm volatile("nop\nnop");
	allocPage();
	while(true);
}
