#ifndef _ALPHABET_H_
#define _ALPHABET_H_

#define kHeight 5
#define kWidth 5
#define kShapeSize 25
#define kGraphSize 77

typedef enum{
    Full,
    Empty,
    Maru,
    Batsu,
    Up,
    Down,
    Left,
    Right,
} extern_shape_t;

typedef enum{
    WifiConnected,
    WifiFailure,
    WifiConnecting1,
    WifiConnecting2,
    WifiConnecting3,
    Dji,
    DjiD,
    DjiJ,
    DjiI,
    Bluetooth,
    Ros,
    MicroRos,
    TokyoTech,
} extern_graph_t;

class Alphabet{
    public:
        // variables
        unsigned char color[3] = {0xff, 0xff, 0xff};
        bool shape[kShapeSize];
        unsigned char graph[kGraphSize];
        // functions
        void Init(void);
        void SetText(char);
        void SetText(int);
        void GenShape(int index, const bool *shapes);
        void GenGraph(void);
        void SetColor(unsigned char r, unsigned char g, unsigned char b);
        void SetColor(unsigned long rgb);
        void Display(void);
        void Display(char letter);
        void Display(char letter, unsigned long rgb);
        void Display(int number);
        void Display(int number, unsigned long rgb);
        void Display(extern_shape_t extern_shape);
        void Display(extern_shape_t extern_shape, unsigned long rgb);
        void Display(extern_graph_t extern_graph);
};

#endif