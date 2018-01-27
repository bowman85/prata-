#ifndef		HAS_DMA_H_
#define		HAS_DMA_H_


class has_DMA: public base_DMA
{
	private:
		char * style;
	public:
		has_DMA (const char * s = "none" , const char *l = "null", int r = 0 );
		has_DMA (const char * s, const base_DMA & rs);
		has_DMA (const has_DMA & hs);
		~has_DMA ();
		
		has_DMA & operator= (const has_DMA & hs) ;
		
		friend std::ostream & operator<<( std::ostream & os, const has_DMA & hs) ;

};



#endif		//	HAS_DMA_H_