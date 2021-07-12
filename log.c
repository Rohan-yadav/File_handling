#include <time.h>

#define LOGFILE "/var/log/temp.log"
#define CURRENTFILE "/var/temp.data"



/* Saves the date time and humidity to a log file and current file */


void write_value (int temp, int humidity) {

    char dt[20]; // space enough for YYYY-MM-DD HH:MM:SS and terminator
    struct tm tm;
    time_t current_time;
    current_time = time(NULL);
    tm = *localtime(&current_time); // convert time_t to struct tm
    strftime(dt, sizeof dt, "%Y-%m-%d %H:%M:%S", &tm); // format

    /* Write to log file */
    FILE *logfd;
    logfd = fopen (LOGFILE, "a");
    fprintf (logfd, "%s %d %d/n", dt, temp, humidity);
    fclose (logfd);

    /* Write to current file */
    FILE *currfd;
    currfd = fopen(CURRENTFILE, "w");
    fprintf (currfd, "%s %d %d/n", dt, temp, humidity);
    fclose (currfd); 

}
