//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int hr, int min = 0, int sec = 0)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

Time::Time() {

  time_t timer;
  struct tm * horaLocal;

  time(&timer);
  horaLocal = localtime(&timer);

  int hora = horaLocal -> tm_hour;
  int minuto = horaLocal -> tm_min;
  int segundo = horaLocal -> tm_sec;

  setTime(hora, minuto, segundo);
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}

void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}