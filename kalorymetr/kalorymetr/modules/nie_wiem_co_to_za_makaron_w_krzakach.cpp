#ifndef PIN_H
#define PIN_H

//-------------------------------

class Pin
{

public:

	void set_addr(const uns &addr)
	{
		this->addr = addr;
	}

	void out()
	{
		rejestr(addr, DIRECTION) |= OUT(addr);
	}

	void low(const &OUT_STATE)
	{
		rejestr(addr, OUT_STATE) &= ~OUT(addr);
	}

	void high()
	{
		rejestr(addr, OUT_STATE) |= OUT(addr);
	}

	void in(const &DIRECTION)
	{
		rejestr(addr, DIRECTION) &= ~OUT(addr);
	}

	const STATE &state()
	{
		return (rejestr(addr, IN_STATE) & OUT(addr));
	}

private:

	const unsigned addr;

};

//-------------------------------

class Pins
{

public:

	static &Pin get(const int &index)
	{
		if (!instance)
			instance = Pins();
		if (index > 0 && index < 29)
			return pins[index - 1];
		else
			return NULL;
	}

private:

	Pins()
	{
		pins[0].setAddr(PIN1);
		pins[1].setAddr(PIN2);
		pins[2].setAddr(PIN3);
		pins[3].setAddr(PIN4);
		pins[4].setAddr(PIN5);
		pins[5].setAddr(PIN6);
		pins[6].setAddr(PIN7);
		pins[7].setAddr(PIN8);
		pins[8].setAddr(PIN9);
		pins[9].setAddr(PIN10);
		pins[10].setAddr(PIN11);
		pins[11].setAddr(PIN12);
		pins[12].setAddr(PIN13);
		pins[13].setAddr(PIN14);
		pins[14].setAddr(PIN15);
		pins[15].setAddr(PIN16);
		pins[16].setAddr(PIN17);
		pins[17].setAddr(PIN18);
		pins[18].setAddr(PIN19);
		pins[19].setAddr(PIN20);
		pins[20].setAddr(PIN21);
		pins[21].setAddr(PIN22);
		pins[22].setAddr(PIN23);
		pins[23].setAddr(PIN24);
		pins[24].setAddr(PIN25);
		pins[25].setAddr(PIN26);
		pins[26].setAddr(PIN27);
		pins[27].setAddr(PIN28);
	}

	static Pins instance = NULL;
	Pin pins[28];

};

#endif