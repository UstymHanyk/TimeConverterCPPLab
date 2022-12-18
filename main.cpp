#include <iostream>
#include "TimeConverter.h"

int main()
{
    TimeConverter timeConverter(23,34,12);
    timeConverter.printTime();

    timeConverter.timeToSeconds();
    timeConverter.printTime();

    timeConverter.secondsToTime();
    timeConverter.printTime();

    timeConverter.setTime(89234);
    timeConverter.printTime();

    timeConverter.secondsToTime();
    timeConverter.printTime();

    timeConverter.setTime(0,47,64);
    timeConverter.printTime();

    return 0;
}
