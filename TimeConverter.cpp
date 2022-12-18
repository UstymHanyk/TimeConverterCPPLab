#include "TimeConverter.h"
#include <iostream>

TimeConverter::TimeConverter() {
    hour = 0;
    minute = 0;
    second = 0;
}
TimeConverter::TimeConverter(int hours, int minutes, int seconds) {
    hour = hours;
    minute = minutes;
    second = seconds;
}
TimeConverter::TimeConverter(int seconds) {
    std::cout << "curr hour: " <<hour << std::endl;
    second = seconds;
}

void TimeConverter::setTime(int seconds) {
    hour = 0;
    minute = 0;
    second = seconds;
}
void TimeConverter::setTime(int hours, int minutes, int seconds) {
    hour = hours;
    minute = minutes;
    second = seconds;
}
void TimeConverter::printTime() {
    if((hour ==0) && (minute ==0)){
        std::cout << second << " seconds" << std::endl;
    }else{
//        this could be improved but works. It is needed in case user sets time which is out of 24h format bounds
        timeToSeconds();
        secondsToTime();

        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }
}

void TimeConverter::timeToSeconds() {
    const int secondsInAMinute = 60;
    const int secondsInAnHour = 3600;
    second+= minute * secondsInAMinute  + hour *secondsInAnHour;
    minute = 0;
    hour = 0;
}
void TimeConverter::secondsToTime() {
//    divide seconds by the number of seconds in one hour and take the modulo of 24 to account time overflow in 24h format
//    (i.e. 86399 seconds = 23:59:59, but 86401 seconds = 00:00:01)
    const int hoursInADay = 24;
    const int secondsInAnHour = 60;
    const int secondsInAMinute = 60;
    const int minutesInAnHour = 60;

    hour = (second/secondsInAnHour) % hoursInADay;
    minute = (second/secondsInAMinute) % minutesInAnHour;
    second = second %secondsInAMinute;
}