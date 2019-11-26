# include "iGraphics.h"
# include "Lights.h"        //holds the functions for printing digits
# include "Time.h"          //holds functions related to calculating time

int x = 300, y = 300, r = 20;

int digits[8]={};      //array that holds time in digits
                       //2 extra elements are taken. one for blinking and another for am/pm
/*
	function iDraw() is called again and again by the system.

	*/
void timed(){            //this function is called every 500 ms
    digits[7]%=2;
    showtime(digits);   //shows the time according to digits
    digits[7]++;
    //printf("%d %d : %d %d : %d %d\n",digits[0],digits[1],digits[2],digits[3],digits[4],digits[5]); // hour, minute, second
        //checks whether showtime() is called with an interval of 500 ms or not
}

void iDraw() {
	//drawing codes are placed here
    //light_all();          //to check if everything is in place
    int t[3] = {};          //array that holds time in integer format

    getTime(t);             //brings current time from the system
    timeDigits(t,digits);   //breaks the numbers into separate digits

    iSetColor(38,230,38);

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//unchanged
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//unchanged
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//unchanged
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//unchanged
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//unchanged
}


int main() {
	//initialization codes are placed here.
	digits[7]=0;                      //this element is used for controlling the circles
    iSetTimer(500, timed);            //time interval is 500ms to blink the circles once every second
	iInitialize(800, 300, "Clock");   //brings up the screen

	return 0;
}
