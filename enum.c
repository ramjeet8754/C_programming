#include <stdio.h>

//enum week{mon=8,tue=40,wed=40,thur,fri,sat,sun};
int main()
{
enum week{mon=8,tue=40,wed=40,thur,fri,sat};
enum week day;
enum week_day{sun=50};
enum week_day day2;
day2=sun;
printf("%d\n",day2);
day=wed;
printf("%d",day);

return 0;
}
