#ifndef MODIFIER_2_H
#define MODIFIER_2_H

#include <QMainWindow>

namespace Ui {
class modifier_2;
}

class modifier_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit modifier_2(QWidget *parent = nullptr);
    ~modifier_2();

private:
    Ui::modifier_2 *ui;
};

#endif // MODIFIER_2_H
