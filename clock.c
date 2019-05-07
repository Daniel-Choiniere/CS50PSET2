// create a function that will take two parameters (int, int)
// the first int should be between the range of 1 and 12
// and represents which number the clock hand is pointing at
// the second can be any integer

// MVP
// the second int will be a positive number only
// return the hour that the hand will be pointing at

// hacker 1
// return both the number of clock cycles and the final hour

// hacker 2
// accept negatve numbers in the second int and go back on the clock

#include <stdio.h>
#include <cs50.h>

void time_warp(int current_time, int time_change)
{
    int clock_cycles = time_change / 12;

    int new_time = (current_time + time_change) % 12;

    if (new_time == 0)
    {
        new_time = 12;
    }

    printf("Clock cycles: %i\n", clock_cycles);
    printf("New Time: %i\n", new_time);
}


int main(void)
{
    int current_time;
    int time_change;
    do
    {
        current_time = get_int("Current time: ");
    }
    while (current_time < 1 || current_time > 12);

    time_change = get_int("Hours passed: ");

    time_warp(current_time, time_change);
}
