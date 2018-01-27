#ifndef		LACK_DMA_H_
#define		LACK_DMA_H_


class  lack_DMA : public base_DMA
{
	private:
		enum { COL_LEN = 40 } ;
		char color[COL_LEN] ;
	public:
		lack_DMA (const char * c = "blank", const char * l = "null", int r = 0 ) ;
		lack_DMA (const char * c, const base_DMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const lack_DMA & rs) ;
		
};



#endif		// LACK_DMA_H_