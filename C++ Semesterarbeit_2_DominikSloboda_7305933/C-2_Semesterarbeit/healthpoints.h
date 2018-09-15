#include <vector>
using namespace std;
#include <QWidget>
#include <QTimer>
#include <QPainter>


class healthpoints : public QWidget
{

public:
    healthpoints(QWidget *parent = 0);
    ~healthpoints();
    int points;
    void updatePoints();
    bool endgame;

private:

protected:
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QPaintEvent *);
};
