

#ifndef INCFILE1_H_
#define INCFILE1_H_

#define PIN1	BANNED		//C RESET		
#define PIN2	BANNED		//D RxD		
#define PIN3	BANNED		//D TxD		
#define PIN4	(1<<PD2)	//D INT0			
#define PIN5	(1<<PD3)	//D INT1
#define PIN6	(1<<PD4)	//D XCK/T0
#define PIN7	NOT_EXIST	//Vcc
#define PIN8	NOT_EXIST	//GND
#define PIN9	BANNED		//B XTAL1/TOSC1
#define PIN10	BANNED		//B XTAL2/TOSC2
#define PIN11	(1<<PD5)	//D T1
#define PIN12	(1<<PD6)	//D AIN0
#define PIN13	(1<<PD7)	//D AIN1
#define PIN14	(1<<PB0)	//B ICP1
#define PIN15	(1<<PB1)	//B OC1A
#define PIN16	(1<<PB2)	//B SS/OC1A
#define PIN17	BANNED		//B MOSI/OC2
#define PIN18	BANNED		//B MISO
#define PIN19	BANNED		//B SCK
#define PIN20	NOT_EXIST	//AVcc
#define PIN21	NOT_EXIST	//Aref
#define PIN22	NOT_EXIST	//GND
#define PIN23	(1<<PC0)	//C ADC0
#define PIN24	(1<<PC1)	//C ADC1
#define PIN25	(1<<PC2)	//C ADC2
#define PIN26	(1<<PC3)	//C ADC3
#define PIN27	(1<<PC4)	//C ADC4/SDA
#define PIN28	(1<<PC5)	//C ADC5/SCL

#define ADR volatile uint8_t

enum STATE{
	LOW = 0,
	HIGH = 1
};





#endif /* INCFILE1_H_ */