#include "DuckSimulator.h"
#include "Goose.h"
#include "GooseAdapter2Duck.h"
#include "DuckDecorator.h"
#include "AbstractDuckFactory.h"
#include "Flock.h"
#include <iostream>
using namespace std;

void DuckSimulator::simulate(AbstractDuckFactory* duckFactory)
{
	Flock* flockOfDucks = new Flock();
	IQuackable* redheadDuck = duckFactory->createRedheadDuck();
	IQuackable* duckCall = duckFactory->createDuckCall();
	IQuackable* rubberDuck = duckFactory->createRubberDuck();
	IQuackable* gooseDuck = new GooseAdapter2Duck(new Goose());
	flockOfDucks->add(redheadDuck);
	flockOfDucks->add(duckCall);
	flockOfDucks->add(rubberDuck);
	flockOfDucks->add(gooseDuck);

	Flock* flockOfMallards = new Flock();
	IQuackable* mallardOne = duckFactory->createMallardDuck();
	IQuackable* mallardTwo = duckFactory->createMallardDuck();
	IQuackable* mallardThree = duckFactory->createMallardDuck();
	IQuackable* mallardFour = duckFactory->createMallardDuck();
	IQuackable* mallardDuck = duckFactory->createMallardDuck();
	flockOfMallards->add(mallardOne);
	flockOfMallards->add(mallardTwo);
	flockOfMallards->add(mallardThree);
	flockOfMallards->add(mallardFour);
	flockOfMallards->add(mallardDuck);

	cout << "\nDuck Simulator1" << endl;
	simulate(flockOfDucks);
	cout << "\nDuck Simulator2" << endl;
	simulate(flockOfMallards);

	cout << DuckDecorator::getQuacks() << endl;

	delete redheadDuck;
	delete duckCall;
	delete rubberDuck;
	delete gooseDuck;

	delete mallardOne;
	delete mallardTwo;
	delete mallardThree;
	delete mallardFour;
	delete mallardDuck;
}

void DuckSimulator::simulate(IQuackable* duck)
{
	duck->quack();
}
