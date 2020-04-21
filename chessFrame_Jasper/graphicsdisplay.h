#ifndef GRAPHICSDISPLAY_H
#define GRAPHICSDISPLAY_H
#include "subject.h"
#include "observer.h"
#include "cell.h"
#include "window.h"

class GraphicsDisplay : public Observer {
    Xwindow *xw;
    const int BOARDSIZE = 8;
    const int GAP = 50;
    const int PIECE_PLACEMENT = 75;
public:
    GraphicsDisplay();
    ~GraphicsDisplay();

    void notify(Subject &whoNotified) override;
};

#endif
