#include "aliasy.h"

typedef unsigned short int uns;
#define DDR(X) DDR##X
#define PIN(X) PIN##X
#define PORT(X) PORT##X

enum ACCESS_PIN{
	BANNED,
	NOT_EXIST	
};

enum REGISTER_PIN{
	DIRECTION,
	IN_STATE,
	OUT_STATE
};

//>0x3F interpretuj jako NULL
ADR rejestr ( uns id_pin, REGISTER_PIN register ){
	if( OUT(addr) != BANNED && OUT(addr) != NOT_EXIST ) return 0xff;
	else{
		switch( id_pin ){
			case 1:
			case 23:
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
				switch( register ){
					
					case DIRECTION:
					return DDR(C);
					break;
					
					case IN_STATE:
					return PIN(C);
					break;
					
					case OUT_STATE:
					return PORT(C);
					break;
					
					default:
					return 0xff;
					break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 11:
			case 12:
			case 13:
				switch( register ){
					
					case DIRECTION:
					return DDR(D);
					break;
					
					case IN_STATE:
					return PIN(D);
					break;
					
					case OUT_STATE:
					return PORT(D);
					break;
					
					default:
					return 0xff;
					break;
			case 9:
			case 10:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
				switch( register ){
					
					case DIRECTION:
					return DDR(B);
					break;
					
					case IN_STATE:
					return PIN(B);
					break;
					
					case OUT_STATE:
					return PORT(B);
					break;
					
					default:
					return 0xff;
					break;
				
			default:
				return 0xff;
				break;
		}
	}
}