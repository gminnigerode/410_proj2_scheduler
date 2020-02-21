/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 */

#include "../includes/stats.h"

using namespace std;
	//TODO Finish class
	Stats::Stats(vector<PCB> &finished_vector){
		av_wait_time = 0.0;
		av_turnaround_time = 0.0;
		av_response_time = 0.0;
		vec = &finished_vector;
	}

	//loops thru vec, prints 1 line for each process using the following format
	//Process 1 Required CPU time:2  arrived:0 started:0 finished:2
	//if there are 10 processes in vector, should print 10 lines
	void Stats::showAllProcessInfo(){
		//TODO Finish print statement
		for(int i = 0; i<vec->size(); i++){
			cout << "Process " + to_string(i) + " Required CPU time:";
		}
	}

	//after a process is placed in the ready_q, how long does
	//it take before its placed on the processor?
	//response_time per process = start_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_response_time(){
		return av_wait_time;
	}

	//after a process is placed in the ready_q, how long does
	//it take to complete?
	//turnaround time per process = finish_time - arrival_time
	//this funtion returns the average over all processes
	float Stats::get_av_turnaround_time(){
		return av_turnaround_time;
	}

	//after a process is placed in the ready_q, how much time does it
	//spend waiting for processor time?
	//wait time per process = finish_time - arrival_time-required_CPU_time
	//this funtion returns the average over all processes
	float Stats::get_av_wait_time(){
		return av_wait_time;
	}
