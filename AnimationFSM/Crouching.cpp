#include <Crouching.h>
#include <Prone.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>

void Crounching::idle(PlayerFSM* a)
{
	std::cout << "Crounching -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Crounching::climbing(PlayerFSM* a)
{
	std::cout << "Crounching -> Jump" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

