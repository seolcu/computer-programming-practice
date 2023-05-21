#define STRSIZ 10

typedef struct
{
    char name[STRSIZ];
    double diameter;
    int moons;
    double orbit_time,
        rotation_time;
} planet_t;

planet_t earth = {"Earth", 12742, 1, 365, 24};