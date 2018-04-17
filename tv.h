/*
 * tv.h
 *
 *  Created on: 2018-4-17
 *      Author: xiezheng
 */

#ifndef TV_H_
#define TV_H_

class Tv {
public:
	friend class Remote;
	enum {Off,On};
	enum {MinVal,MaxVal = 20};
	enum {Antenna,Cable};
	enum {TV,DVD};

	Tv(int s = Off ,int mc = 125) : state(s),volume(5),
			maxchannel(mc),channel(2),mode(Cable),input(TV){}
	bool onoff(){state = ((state ==On)?On:Off);}
	bool ison() const{return state ==On;}
	void volup();
	void voldown();
	void chanup();
	void chandown();
	void set_mode(){mode = (mode == Antenna)? Antenna:Cable;}
	void set_input() {input = (input == TV)?TV:DVD;}
	void settings()const;


private :
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;

};


class Remote {
private:
	int mode;
public:
	Remote(int m = Tv::TV):mode(m){};
	bool volup(Tv & t){return t.volup();}
	bool voldown(Tv & t){return t.voldown();}
	bool onoff(Tv & t){return t.onoff();}
	void chanup(Tv & t){return t.chanup();}
	void chandown(Tv & t){return t.chandown();}
	void set_mode(Tv & t){return t.set_mode();}
	void set_chan(Tv & t,int chan){t.channel = chan;}//可以直接访问 Tv类中的私有属性
	void set_input(Tv & t){t.set_input();}
};

#endif /* TV_H_ */
