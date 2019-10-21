#include <Prone.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void Prone::idle(PlayerFSM* a)
{
	std::cout << "Prone -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Prone::climbing(PlayerFSM* a)
{
	std::cout << "Prone -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}