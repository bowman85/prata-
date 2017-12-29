#ifndef		STEP_INFO_
#define		STEP_INFO_


class Step_info 
{
	private:
		int min_step ;
		int max_step ;
		double length ;
		int total_steps ;

	public:
		Step_info ();
		~Step_info();
		//operator+(double step_size);
		
		void set_val( int new_step ) ;
		double get_average () ;
		
		int get_min() { return min_step ;}
		int get_max() { return max_step ;}
		



};












#endif	//	STEP_INFO_