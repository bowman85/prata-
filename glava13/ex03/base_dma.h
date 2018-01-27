#ifndef		BASE_DMA_H_
#define		BASE_DMA_H_



class base_DMA
{
	private:
		char * label;
		int rating;
	
	public:
		base_DMA (const char * l = "null" , int r = 0);
		base_DMA (const base_DMA & rs);
		virtual ~base_DMA() ;
		base_DMA & operator= (const base_DMA & rs) ;

};






#endif		// BASE_DMA_H_