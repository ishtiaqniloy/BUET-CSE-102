/*
    Header for individual hexagons created by Abdullah Al Ishtiaq (S201505080)
    */
void light_circles();
void light_am();
void light_pm();

void light_a1();    //these next "light_**()" functions represents individual 42 hexagons on the screen
void light_a2();
void light_a3();
void light_a4();
void light_a5();
void light_a6();
void light_a7();
void light_b1();
void light_b2();
void light_b3();
void light_b4();
void light_b5();
void light_b6();
void light_b7();
void light_c1();
void light_c2();
void light_c3();
void light_c4();
void light_c5();
void light_c6();
void light_c7();
void light_d1();
void light_d2();
void light_d3();
void light_d4();
void light_d5();
void light_d6();
void light_d7();
void light_e1();
void light_e2();
void light_e3();
void light_e4();
void light_e5();
void light_e6();
void light_e7();
void light_f1();
void light_f2();
void light_f3();
void light_f4();
void light_f5();
void light_f6();
void light_f7();

void light_all();

void light_circles(){


    iFilledCircle(242,93,9);
    iFilledCircle(242,166,9);
    iFilledCircle(464,93,9);
    iFilledCircle(464,166,9);

}

void light_am(){
    //printf("am\n");
    iText(700,56,"AM",GLUT_BITMAP_TIMES_ROMAN_24);
}
void light_pm(){
    //printf("pm\n");
    iText(700,56,"PM",GLUT_BITMAP_TIMES_ROMAN_24);
}

void  light_a1(){
    double m[]={50,44,50,110,116,110};
	double n[]={50,56,62,62,56,50};

	iFilledPolygon(m,n,6);
}
void  light_a2(){
    double m[]={44,38,38,44,50,50};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_a3(){
    double m[]={116,110,110,116,122,122};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_a4(){
    double m[]={45,51,110,116,110,51};
	double n[]={129.5,135.5,135.5,129.5,123.5,123.5};

	iFilledPolygon(m,n,6);
}
void  light_a5(){
    double m[]={44,38,38,44,50,50};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_a6(){
    double m[]={116,110,110,116,122,122};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_a7(){
    double m[]={50,44,50,110,116,110};
	double n[]={197,203,209,209,203,197};

	iFilledPolygon(m,n,6);
}


void  light_b1(){
    double m[]={152,146,152,212,218,212};
	double n[]={50,56,62,62,56,50};

	iFilledPolygon(m,n,6);
}
void  light_b2(){
    double m[]={146,140,140,146,152,152};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_b3(){
    double m[]={218,212,212,218,224,224};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_b4(){
    double m[]={147,153,212,218,212,153};
	double n[]={129.5,135.5,135.5,129.5,123.5,123.5};

	iFilledPolygon(m,n,6);
}
void  light_b5(){
    double m[]={146,140,140,146,152,152};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_b6(){
    double m[]={218,212,212,218,224,224};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_b7(){
    double m[]={152,146,152,212,218,212};
	double n[]={197,203,209,209,203,197};

	iFilledPolygon(m,n,6);
}



void  light_c1(){
    double m[]={272,266,272,332,338,332};
	double n[]={50,56,62,62,56,50};

	iFilledPolygon(m,n,6);
}
void  light_c2(){
    double m[]={266,260,260,266,272,272};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_c3(){
    double m[]={338,332,332,338,344,344};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_c4(){
    double m[]={267,273,332,338,332,273};
	double n[]={129.5,135.5,135.5,129.5,123.5,123.5};

	iFilledPolygon(m,n,6);
}
void  light_c5(){
    double m[]={266,260,260,266,272,272};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_c6(){
    double m[]={338,332,332,338,344,344};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_c7(){
    double m[]={272,266,272,332,338,332};
	double n[]={197,203,209,209,203,197};

	iFilledPolygon(m,n,6);
}



void  light_d1(){
    double m[]={374,368,374,434,440,434};
	double n[]={50,56,62,62,56,50};

	iFilledPolygon(m,n,6);
}
void  light_d2(){
    double m[]={368,362,362,368,374,374};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_d3(){
    double m[]={440,434,434,440,446,446};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_d4(){
    double m[]={369,375,434,440,434,375};
	double n[]={129.5,135.5,135.5,129.5,123.5,123.5};

	iFilledPolygon(m,n,6);
}
void  light_d5(){
    double m[]={368,362,362,368,374,374};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_d6(){
    double m[]={440,434,434,440,446,446};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_d7(){
    double m[]={374,368,374,434,440,434};
	double n[]={197,203,209,209,203,197};

	iFilledPolygon(m,n,6);
}



void  light_e1(){
    double m[]={494,488,494,554,560,554};
	double n[]={50,56,62,62,56,50};

	iFilledPolygon(m,n,6);
}
void  light_e2(){
    double m[]={488,482,482,488,494,494};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_e3(){
    double m[]={560,554,554,560,566,566};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_e4(){
    double m[]={489,495,554,560,554,495};
	double n[]={129.5,135.5,135.5,129.5,123.5,123.5};

	iFilledPolygon(m,n,6);
}
void  light_e5(){
    double m[]={488,482,482,488,494,494};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_e6(){
    double m[]={560,554,554,560,566,566};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_e7(){
    double m[]={494,488,494,554,560,554};
	double n[]={197,203,209,209,203,197};

	iFilledPolygon(m,n,6);
}



void  light_f1(){
    double m[]={596,590,596,656,662,656};
	double n[]={50,56,62,62,56,50};

	iFilledPolygon(m,n,6);
}
void  light_f2(){
    double m[]={590,584,584,590,596,596};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_f3(){
    double m[]={662,656,656,662,668,668};
	double n[]={57,63,123,129,123,63};

	iFilledPolygon(m,n,6);
}
void  light_f4(){
    double m[]={591,597,655,661,655,597};
	double n[]={129.5,135.5,135.5,129.5,123.5,123.5};

	iFilledPolygon(m,n,6);
}
void  light_f5(){
    double m[]={590,584,584,590,596,596};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_f6(){
    double m[]={662,656,656,662,668,668};
	double n[]={130,136,196,202,196,136};

	iFilledPolygon(m,n,6);
}
void  light_f7(){
    double m[]={596,590,596,656,662,656};
	double n[]={197,203,209,209,203,197};

	iFilledPolygon(m,n,6);
}



void light_all(){

    light_circles();

	light_a1();
	light_a2();
	light_a3();
	light_a4();
	light_a5();
	light_a6();
	light_a7();

	light_b1();
	light_b2();
	light_b3();
	light_b4();
	light_b5();
	light_b6();
	light_b7();

	light_c1();
	light_c2();
	light_c3();
	light_c4();
	light_c5();
	light_c6();
	light_c7();

	light_d1();
	light_d2();
	light_d3();
	light_d4();
	light_d5();
	light_d6();
	light_d7();

    light_e1();
	light_e2();
	light_e3();
	light_e4();
	light_e5();
	light_e6();
	light_e7();

	light_f1();
	light_f2();
	light_f3();
	light_f4();
	light_f5();
	light_f6();
	light_f7();

}






