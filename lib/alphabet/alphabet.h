#ifndef _ALPHABET_H_
#define _ALPHABET_H_

#define HEIGHT 5
#define WIDTH 5
#define SHAPE_SIZE 25
#define GRAPH_SIZE 77

typedef enum{
    FULL,
    EMPTY,
    MARU,
    BATSU,
    UP,
    DOWN,
    LEFT,
    RIGHT,
} extern_shape_t;

typedef enum{
    WIFI_CONNECTED,
    WIFI_FAILURE,
    WIFI_CONNECTING_1,
    WIFI_CONNECTING_2,
    WIFI_CONNECTING_3,
    DJI,
    DJI_D,
    DJI_J,
    DJI_I,
    BT,
    ROS,
    micro_ROS,
    TokyoTech,
} extern_graph_t;

class Alphabet{
    public:
        // variables
        unsigned char color[3] = {0xff, 0xff, 0xff};
        bool shape[SHAPE_SIZE];
        unsigned char graph[GRAPH_SIZE];
        // methods
        void init(void);
        void set_text(char);
        void set_text(int);
        void gen_shape(int index, bool *shapes);
        void gen_graph(void);
        void set_color(unsigned char r, unsigned char g, unsigned char b);
        void set_color(unsigned long rgb);
        void display(void);
        void display(char letter);
        void display(char letter, unsigned long rgb);
        void display(int number);
        void display(int number, unsigned long rgb);
        void display(extern_shape_t extern_shape);
        void display(extern_shape_t extern_shape, unsigned long rgb);
        void display(extern_graph_t extern_graph);
};

#endif