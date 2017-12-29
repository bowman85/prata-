#include <iostream>

#include "step_info.h"



Step_info::Step_info()
{
	min_step = -1 ;
	max_step = 0 ;
	length = 0.0 ;
	total_steps = 0 ;

}


Step_info::~Step_info()
{


}


void Step_info::set_val (int new_step)
{
	// first value
	if (min_step == -1 ){
		min_step = new_step ;
	}
	
	if (min_step > new_step){
		min_step = new_step;
	}
	if (max_step < new_step){
		max_step = new_step; 
	}
	
	length += new_step ;
	total_steps++ ;	
	
}


double Step_info::get_average()
{
	double out ;
	
	out  = length/total_steps ;
	return out ;
	
}



