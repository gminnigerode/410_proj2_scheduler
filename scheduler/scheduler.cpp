/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

#include "../includes/scheduler.h"
using namespace std;

//TODO Finish

void Scheduler::add(PCB p){
	ready_q->push(p);
}

PCB Scheduler::getNext(){
	PCB temp = ready_q->front();
	ready_q->pop();
	return temp;
}





