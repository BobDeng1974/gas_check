#ifndef LOGVIEW_H
#define LOGVIEW_H

#include <QWidget>

namespace Ui {
class LogView;
}

class LogView : public QWidget
{
    Q_OBJECT
    
public:
    explicit LogView(QWidget *parent = 0);
    ~LogView();

    
private:
    Ui::LogView *ui;
    void initTableView();
};

#endif // LOGVIEW_H
