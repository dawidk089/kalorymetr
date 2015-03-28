/*
 * all.cpp
 *
 * Created: 2015-03-26 23:56:00
 *  Author: mcmushroom
 */ 

//###typedef'y na adresy pinow - wszystkie bezwzglednie !!!
//###walidacja zakresu

typedef unsigned short int uns;
//---PINS----------------------------------------

void pin_low( uns addr ){
		
}

void pin_high( uns addr ){
	
}

void pin_out( uns addr ){
	
}

void pin_in( uns addr ){
	
}

void pin_state( uns addr ){
	
}

//---PWM-----------------------------------------

void pwm_mode( uns addr, PWM_MODES mode ){
	
}

void pwm_power( uns addr, float percent){
	
}

//---TIMER---------------------------------------

void timer_resolution( uns id, TIMER_RESOLUTION resolution ){
	
}

void timer_get_time( uns id ){
	//najpierw czesc ulamkowa potem calkowita!!!
}

//---INTERRUPT-----------------------------------

void interrupt_update(){
	
}

//---DELAY---------------------------------------

void delay( TYPE id, unsigned time, UNIT_TIME unit ){
	
}

//---USART---------------------------------------

void usart_bitrate( uns bitrate, bool double_speed ){
	
}

void usart_send( char character ){
	
}

void usart_receive( char& character, bool& is_coming ){
	
}

//---ADC-----------------------------------------

void adc_on(){
	
}

void adc_frequency( TIMER_RESOLUTION resolution ){
	
}

void adc_channel( uns addr ){
	
}

uns adc_measure(){
	
}