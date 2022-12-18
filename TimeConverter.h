//
// Created by lajob on 08.10.22.
//

#ifndef LAB_5_TIMECONVERTER_H
#define LAB_5_TIMECONVERTER_H


class TimeConverter {
public:
    TimeConverter();
    TimeConverter(int hours, int minutes, int seconds);
    TimeConverter(int seconds);

    void setTime(int seconds);
    void setTime(int hours, int minutes, int seconds);
    void printTime();
    void timeToSeconds();
    void secondsToTime();
private:
    int hour, minute, second;
};


#endif //LAB_5_TIMECONVERTER_H
